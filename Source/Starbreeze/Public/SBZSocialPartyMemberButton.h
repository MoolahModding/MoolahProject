#pragma once
#include "CoreMinimal.h"
#include "ESBZPartyMemberButtonType.h"
#include "SBZMenuButton.h"
#include "SBZSocialPartyMemberButton.generated.h"

class UPaperSprite;

UCLASS(Blueprintable, EditInlineNew)
class USBZSocialPartyMemberButton : public USBZMenuButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlatformUsername;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NebulaUsername;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPartyLeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZPartyMemberButtonType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PartyId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InvitationId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperSprite* PlatformIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperSprite* NebulaIcon;
    
    USBZSocialPartyMemberButton();

    UFUNCTION(BlueprintCallable)
    void RevokeInvite();
    
    UFUNCTION(BlueprintCallable)
    void RejectInvite();
    
    UFUNCTION(BlueprintCallable)
    void PromotePlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReadyToDisplayMember();
    
    UFUNCTION(BlueprintCallable)
    void KickPlayer();
    
    UFUNCTION(BlueprintCallable)
    void FriendProfileAction();
    
    UFUNCTION(BlueprintCallable)
    void ExecuteAction(FName Action);
    
    UFUNCTION(BlueprintCallable)
    bool CanShowFriendProfile();
    
    UFUNCTION(BlueprintCallable)
    void AcceptInvite();
    
};

