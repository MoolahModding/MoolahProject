#pragma once
#include "CoreMinimal.h"
#include "Layout/Margin.h"
#include "ESBZPlayerCardContainerType.h"
#include "SBZWidgetBase.h"
#include "Templates/SubclassOf.h"
#include "SBZPlayerCardContainer.generated.h"

class UImage;
class USBZMenuButton;
class USBZPlayerCard;
class UScrollBox;
class UWrapBox;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZPlayerCardContainer : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZPlayerCardContainerType CardContainerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZPlayerCard> PlayerCardWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin DividerPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin LeaveCrewButtonPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* ScrollBox_PlayerCardList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWrapBox* WrapBox_PlayerCards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Divider_I;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZMenuButton* Button_LeaveCrew;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZMenuButton* Button_CurrentPlatform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZMenuButton* Button_OtherConsole;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZMenuButton* Button_GenericPC;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, USBZPlayerCard*> ContainerPlayerCardMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, USBZPlayerCard*> PlatformPlayerCardMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, USBZPlayerCard*> AccelBytePlayerCardMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, USBZPlayerCard*> IncomingPlayerCardMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, USBZPlayerCard*> OutgoingPlayerCardMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, USBZPlayerCard*> OfflinePlayerCardMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, USBZPlayerCard*> BlockedPlayerCardMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, USBZPlayerCard*> RecentPlayerCardMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, USBZPlayerCard*> SearchPlayerCardMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> PlatformToggleFilterMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZPlayerCard* CurrentlyFocusedButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, USBZPlayerCard*> PartyMembers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, USBZPlayerCard*> SessionMembers;
    
public:
    USBZPlayerCardContainer();

    UFUNCTION(BlueprintCallable)
    void UpdatePlayerEntries(bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable)
    void UpdateFriendFilterText(const FString& Text);
    
    UFUNCTION(BlueprintCallable)
    void UpdateCrewMembersList();
    
    UFUNCTION(BlueprintCallable)
    void TogglePlatformFilter(const FName& ToggleKey, const bool ToggleValue);
    
    UFUNCTION(BlueprintCallable)
    void SearchUser(const FString& UserName);
    
    UFUNCTION(BlueprintCallable)
    void RequestPartyLeave();
    
    UFUNCTION(BlueprintCallable)
    void RefreshCrewPanel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerCardFocused(USBZMenuButton* MenuButton, bool bIsFocused);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerCardDataUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPartyPanelRefreshComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFocusUpdateRequested();
    
private:
    UFUNCTION(BlueprintCallable)
    void NativeOnOtherConsoleFilterSelected(USBZMenuButton* Button);
    
    UFUNCTION(BlueprintCallable)
    void NativeOnGenericPCFilterSelected(USBZMenuButton* Button);
    
    UFUNCTION(BlueprintCallable)
    void NativeOnCurrentPlatformFilterSelected(USBZMenuButton* Button);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPartyMembersNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESBZPlayerCardContainerType GetCardContainerType() const;
    
};

