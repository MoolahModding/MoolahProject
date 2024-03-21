#pragma once
#include "CoreMinimal.h"
#include "SBZMenuStackWidget.h"
#include "SBZPartyMember.h"
#include "Templates/SubclassOf.h"
#include "SBZSocialFriendButtonContainer.generated.h"

class UPanelWidget;
class USBZMenuButton;
class USBZSocialFriendButton;
class USBZSocialPartyMemberButton;
class USBZTextEntryButton;

UCLASS(Blueprintable, EditInlineNew)
class USBZSocialFriendButtonContainer : public USBZMenuStackWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZTextEntryButton* Button_FilterFriends;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZMenuButton* LeavePartyButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_AccelByteFriendList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_PlatformFriendList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_IncomingFriendRequests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_OutgoingFriendRequests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_UserSearch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_BlockedPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_PartyMembers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_OfflinePlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZSocialFriendButton> FriendButtonWidgetClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, USBZSocialFriendButton*> AccelByteFriendButtonMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, USBZSocialFriendButton*> PlatformFriendButtonMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, USBZSocialFriendButton*> IncomingFriendButtonMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, USBZSocialFriendButton*> OutgoingFriendButtonMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, USBZSocialFriendButton*> UserSearchButtonMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, USBZSocialFriendButton*> BlockedPlayerButtonMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, USBZSocialFriendButton*> OfflineFriendButtonMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, USBZSocialPartyMemberButton*> PartyMembers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZSocialPartyMemberButton*> PartyEmptyButtonPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZSocialPartyMemberButton> PartyMemberButtonWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZSocialFriendButton* CurrentlyFocusedButton;
    
public:
    USBZSocialFriendButtonContainer();
    UFUNCTION(BlueprintCallable)
    void UpdatePartyMembersList();
    
    UFUNCTION(BlueprintCallable)
    void UpdateFriendFilterText(const FString& Text);
    
    UFUNCTION(BlueprintCallable)
    void UpdateFriendButton(const FString& UserID);
    
    UFUNCTION(BlueprintCallable)
    void StopAutoRefreshFriends();
    
    UFUNCTION(BlueprintCallable)
    void StartAutoRefreshFriends();
    
    UFUNCTION(BlueprintCallable)
    void SearchUser(const FString& UserName);
    
    UFUNCTION(BlueprintCallable)
    void RequestPartyLeave();
    
    UFUNCTION(BlueprintCallable)
    void RefreshPartyPanel();
    
    UFUNCTION(BlueprintCallable)
    void RefreshFriends();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPartyPanelRefreshComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPartyButtonFocused(USBZMenuButton* MenuButton, bool bIsFocused);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFriendButtonsUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFriendButtonFocused(USBZMenuButton* MenuButton, bool bIsFocused);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetPlatformName() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetPartyMembersNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSBZPartyMember> GetPartyMembers() const;
    
    UFUNCTION(BlueprintCallable)
    void BuildPartyMembersList();
    
private:
    UFUNCTION(BlueprintCallable)
    void AddPartyMember(FSBZPartyMember NewMember);
    
};

