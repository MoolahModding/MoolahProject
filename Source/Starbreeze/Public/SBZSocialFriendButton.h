#pragma once
#include "CoreMinimal.h"
#include "ESBZPartyRequestFeedbackType.h"
#include "ESBZRequestFeedbackType.h"
#include "ESocialFriendButtonType.h"
#include "SBZFriendListEntry.h"
#include "SBZMenuButton.h"
#include "SBZReportPlayerInfo.h"
#include "SBZSocialFriendButton.generated.h"

class USBZSocialFriendButtonContainer;

UCLASS(Blueprintable, EditInlineNew)
class USBZSocialFriendButton : public USBZMenuButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZFriendListEntry FriendListEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESocialFriendButtonType FriendButtonType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZSocialFriendButtonContainer* SocialFriendButtonContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZRequestFeedbackType CurrentFeedbackType;
    
public:
    USBZSocialFriendButton();

    UFUNCTION(BlueprintCallable)
    void UnblockPlayerAction();
    
    UFUNCTION(BlueprintCallable)
    void TertiaryAction();
    
    UFUNCTION(BlueprintCallable)
    void SecondaryAction();
    
    UFUNCTION(BlueprintCallable)
    void RequestFriend();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReportPlayerAction();
    
    UFUNCTION(BlueprintCallable)
    void ReportPlayer(const FSBZReportPlayerInfo& ReportPlayerInfo);
    
    UFUNCTION(BlueprintCallable)
    void RemoveFriend();
    
    UFUNCTION(BlueprintCallable)
    void RejectFriendRequest();
    
    UFUNCTION(BlueprintCallable)
    void QuaternaryAction();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRequestStatusPopupClosed(FName ActionName);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestFeedback(ESBZRequestFeedbackType FeedbackType, bool bResult, const FString& ErrorCode);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerDataInitialized(const FSBZFriendListEntry& InFriendListEntry);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPartyRequestFeedback(ESBZPartyRequestFeedbackType FeedbackType, bool bResult, const FString& ErrorCode);
    
    UFUNCTION(BlueprintCallable)
    void OnConfirmationPopupClosed(FName ActionName);
    
public:
    UFUNCTION(BlueprintCallable)
    void JoinParty();
    
    UFUNCTION(BlueprintCallable)
    void JoinLobby();
    
    UFUNCTION(BlueprintCallable)
    void FriendProfileAction();
    
    UFUNCTION(BlueprintCallable)
    void ExecuteAction(FName Action);
    
    UFUNCTION(BlueprintCallable)
    bool CanShowFriendProfile();
    
    UFUNCTION(BlueprintCallable)
    bool CanRequestFriend();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanJoinParty();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanJoinLobby();
    
    UFUNCTION(BlueprintCallable)
    bool CanInvitePlayer();
    
    UFUNCTION(BlueprintCallable)
    void CancelFriendRequest();
    
    UFUNCTION(BlueprintCallable)
    bool CanBlockPlayer();
    
    UFUNCTION(BlueprintCallable)
    void BlockPlayerAction();
    
    UFUNCTION(BlueprintCallable)
    void AcceptFriendRequest();
    
};

