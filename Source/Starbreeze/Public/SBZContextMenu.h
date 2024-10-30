#pragma once
#include "CoreMinimal.h"
#include "ESBZSocialPlayerCardType.h"
#include "SBZReportPlayerInfo.h"
#include "SBZWidgetBase.h"
#include "SBZContextMenu.generated.h"

class USBZMenuButton;
class USBZPlayerCard;
class USBZUIManager;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZContextMenu : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZPlayerCard* ParentPlayerCard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZMenuButton* Button_InviteToParty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZMenuButton* Button_SendFriendRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZMenuButton* Button_RemoveFriend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZMenuButton* Button_BlockPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZMenuButton* Button_UnblockPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZMenuButton* Button_MutePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZMenuButton* Button_UnmutePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZMenuButton* Button_ReportPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZMenuButton* Button_ShowProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZMenuButton* Button_JoinGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZMenuButton* Button_AcceptFriendRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZMenuButton* Button_RejectFriendRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZMenuButton* Button_CancelFriendRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZMenuButton* Button_PromoteToPartyLeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZMenuButton* Button_KickFromParty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZMenuButton* Button_Close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZMenuButton* Button_KickFromHeist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZSocialPlayerCardType PlayerCardType;
    
public:
    USBZContextMenu();

    UFUNCTION(BlueprintCallable)
    void UnblockPlayerAction();
    
    UFUNCTION(BlueprintCallable)
    void ShowFriendProfileAction();
    
    UFUNCTION(BlueprintCallable)
    void ShowCrewProfileAction();
    
    UFUNCTION(BlueprintCallable)
    void SetContextMenuData(USBZPlayerCard* InParentPlayerCard);
    
    UFUNCTION(BlueprintCallable)
    void RequestFriendAction();
    
    UFUNCTION(BlueprintCallable)
    void ReportPlayerAction(const FSBZReportPlayerInfo& InReportPlayerInfo);
    
    UFUNCTION(BlueprintCallable)
    void RemoveFriendAction();
    
    UFUNCTION(BlueprintCallable)
    void RejectFriendRequest();
    
    UFUNCTION(BlueprintCallable)
    void PromoteToPartyLeader();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPopupShown(USBZUIManager* UIManager);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnContextMenuDataSet();
    
public:
    UFUNCTION(BlueprintCallable)
    void MutePlayerAction(bool MutePlayer);
    
    UFUNCTION(BlueprintCallable)
    void KickFromParty();
    
    UFUNCTION(BlueprintCallable)
    void KickFromHeist();
    
    UFUNCTION(BlueprintCallable)
    void JoinLobbyAction();
    
    UFUNCTION(BlueprintCallable)
    void InviteToPartyAction();
    
    UFUNCTION(BlueprintCallable)
    void CancelFriendRequest();
    
    UFUNCTION(BlueprintCallable)
    void BlockPlayerAction();
    
    UFUNCTION(BlueprintCallable)
    void AcceptFriendRequest();
    
};

