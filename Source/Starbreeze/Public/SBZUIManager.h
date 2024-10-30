#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagAssetInterface.h"
#include "GameplayTagContainer.h"
#include "InputCoreTypes.h"
#include "Components/SlateWrapperTypes.h"
#include "ESBZInputState.h"
#include "ESBZMetaRequestResult.h"
#include "ESBZPlatform.h"
#include "OnControlsReferenceActionPressedDelegate.h"
#include "SBZButtonControlsReference.h"
#include "SBZControlsReference.h"
#include "SBZControlsReferenceRuntime.h"
#include "SBZHUDNotificationData.h"
#include "SBZInfoPopupText.h"
#include "SBZMetaNotification.h"
#include "SBZOnCultureChangedDelegateDelegate.h"
#include "SBZOnDisplayHUDNotificationDelegate.h"
#include "SBZOnHUDContextChangedDelegate.h"
#include "SBZOnInstallStateChangedDelegate.h"
#include "SBZOnLanguageChangedDelegateDelegate.h"
#include "SBZOnPopUpWidgetClosedDelegate.h"
#include "SBZOnUIStackLockChangedDelegate.h"
#include "SBZOnUIStackStateChangedDelegate.h"
#include "SBZOnUITagsChangedDelegate.h"
#include "SBZSideBarNotificationData.h"
#include "SBZUIFullscreenNotificationData.h"
#include "SBZUIPopupData.h"
#include "Templates/SubclassOf.h"
#include "SBZUIManager.generated.h"

class AActor;
class UPaperSprite;
class USBZBaseMenuWidget;
class USBZDebugWidget;
class USBZFullScreenNotification;
class USBZLoginScreenBaseWidget;
class USBZLoginScreenInfoPopupWidget;
class USBZPSOCompilationScreen;
class USBZPopupWidget;
class USBZSideBarNotifications;
class USBZSubtitleWidget;
class USBZTutorialPopUpBody;
class USBZTutorialPopUpDataAsset;
class USBZUIData;
class USBZWidgetBase;

UCLASS(Blueprintable)
class USBZUIManager : public UObject, public IGameplayTagAssetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnDisplayHUDNotification OnDisplayNotification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZPopupWidget> PopUpWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZPopupWidget* PopUpWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZTutorialPopUpBody> TutorialPopUpBodyWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZTutorialPopUpBody* TutorialPopUpBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZFullScreenNotification> FullscreenNotificationWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZFullScreenNotification* FullscreenNotificationWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZSideBarNotifications> SideBarNotificationWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZSideBarNotifications* SideBarNotificationWidget;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZLoginScreenInfoPopupWidget> InfoPopupWidgetWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZLoginScreenInfoPopupWidget* InfoPopupWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZInfoPopupText EULAContent;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnHUDContextChanged OnHUDContextChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZDebugWidget> DebugWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZDebugWidget* DebugWidget;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnUITagsChanged OnUITagsChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MetaSaveSuccessfulText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MetaSaveFailedText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer UIGameplayTags;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnLanguageChangedDelegate OnLanguageChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnCultureChangedDelegate OnCultureChangedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZSubtitleWidget> SubtitleWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperSprite* PlatformSprite_GenericPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperSprite* PlatformSprite_GenericConsole;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperSprite* PlatformSprite_Playstation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperSprite* PlatformSprite_XBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperSprite* NebulaSprite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PlayerNoName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperSprite* XBoxGamepadSprite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperSprite* PlayStationGamepadSprite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperSprite* KeySpriteEmpty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKey, UPaperSprite*> MouseSpriteMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKey, UPaperSprite*> KeyboardSpriteMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKey, UPaperSprite*> XBoxSpriteMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKey, UPaperSprite*> PlayStationSpriteMap;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZSubtitleWidget* SubtitleWidget;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnUIStackStateChanged OnUIStackChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnUIStackStateChanged OnUIStackLostOrRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnUIStackLockChanged OnUIStackLockChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PopUpStackString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SwitchingStackString;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> UIStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZWidgetBase*> StackLockedArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZControlsReferenceRuntime> RuntimeControlsReference;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZWidgetBase> BlackBackgroundWidgetClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZBaseMenuWidget* ActiveMenuWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZLoginScreenBaseWidget* ActiveLoginScreenWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZPSOCompilationScreen* ActivePSOCompilationScreenWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZWidgetBase* LastFocusedWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastUIStackUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bSetFocusOnUnlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bSavePushedUIStackValues;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnInstallStateChanged OnInstallStateChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZUIData* UIData;
    
public:
    USBZUIManager();

    UFUNCTION(BlueprintCallable)
    bool TryRemoveFromStack(const FName& StackValue);
    
    UFUNCTION(BlueprintCallable)
    void SwitchUIStack(const FName& StackValueToSwitch);
    
    UFUNCTION(BlueprintCallable)
    void SimulateJoinHeistActivity();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ShowTutorialPopUp(const UObject* WorldContextObject, const USBZTutorialPopUpDataAsset* InTutorialToDisplay, FSBZOnPopUpWidgetClosed InPopUpActionInputDelegate);
    
    UFUNCTION(BlueprintCallable)
    void ShowSidebarNotification(FSBZSideBarNotificationData InSideBarNotificationData);
    
    UFUNCTION(BlueprintCallable)
    void ShowPopUpWithCallback(FSBZUIPopupData InPopupData, FSBZOnPopUpWidgetClosed InPopUpActionInputDelegate, int32 InAutomaticClosingCountdownTime, FName InAutomaticClosingActionName, bool bReturnFocusWhenClosed, bool bDeferUIStackEvents);
    
    UFUNCTION(BlueprintCallable)
    void ShowPopUp(FSBZUIPopupData InPopupData, bool bReturnFocusWhenClosed, bool bDeferUIStackEvents);
    
    UFUNCTION(BlueprintCallable)
    void ShowMetaNotification(FSBZMetaNotification InMetaNotification);
    
    UFUNCTION(BlueprintCallable)
    void ShowFullScreenNotification(FSBZUIFullscreenNotificationData InFullscreenNotificationData);
    
    UFUNCTION(BlueprintCallable)
    void ShowEULAPopup(const FSBZOnPopUpWidgetClosed& InDelegate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldStartInHeistSelection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldDisplayCursor() const;
    
    UFUNCTION(BlueprintCallable)
    void SetStartInHeistSelection();
    
    UFUNCTION(BlueprintCallable)
    void SetOnePlayerMatchHook();
    
    UFUNCTION(BlueprintCallable)
    void SetLogoP3Visibility(ESlateVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetLoginScreenVisibility(ESlateVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetLastFocusedWidget(USBZWidgetBase* InLastFocusedWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetInputModeToUI();
    
    UFUNCTION(BlueprintCallable)
    void SetInputModeToGameAndUI();
    
    UFUNCTION(BlueprintCallable)
    void SetInputModeToGame();
    
    UFUNCTION(BlueprintCallable)
    void SetDisplayPlayerHUD(bool bShouldDisplayPlayerHUD);
    
    UFUNCTION(BlueprintCallable)
    void SaveProgressionSaveGame();
    
    UFUNCTION(BlueprintCallable)
    void RemoveGameplayTag(FGameplayTag UITag);
    
    UFUNCTION(BlueprintCallable)
    void RemoveControlsReference(int32 InControlsReferenceID);
    
    UFUNCTION(BlueprintCallable)
    void RefreshFullScreenNotificationQueue();
    
    UFUNCTION(BlueprintCallable)
    void PushUIStack(const FName& StackValue);
    
    UFUNCTION(BlueprintCallable)
    FName PopStack();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName PeekStack() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnStateMachineStateExited(FName StateName);
    
    UFUNCTION(BlueprintCallable)
    void OnStateMachineStateEntered(FName StateName);
    
    UFUNCTION(BlueprintCallable)
    void OnPopupControllerEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
    UFUNCTION(BlueprintCallable)
    void OnOptForSoloModePopupClosed(FName ClosingActionName);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnHeistSelectionMenuSet();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStackLocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStackEmpty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPopupShowing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGameInstallPending() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsControllerMode() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void HideMenuControlsReference(const UObject* WorldContextObject);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleProgressionSave(ESBZMetaRequestResult Result);
    
    UFUNCTION(BlueprintCallable)
    void HandleLocalPlayerControllerReady();
    
    UFUNCTION(BlueprintCallable)
    void HandleActionPhaseEntered();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetUIStack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZUIData* GetUIData(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPaperSprite* GetSpriteForPlatform(ESBZPlatform InPlatform, bool bUseCurrentPlatformIconIfUnknown) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPaperSprite* GetSpriteForNebula() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZPopupWidget* GetPopUpWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZBaseMenuWidget* GetMenuWidget(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetLocalizedPlayerNoName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZWidgetBase* GetLastFocusedWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPaperSprite* GetKeySpriteForFKey(const FKey& InKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPaperSprite* GetKeySpriteEmpty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetKeysForAxisMapping(const FName& InAxisName, TArray<FKey>& ReturnList) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetKeyForActionMapping(const FName& InActionName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESBZInputState GetInputMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPaperSprite* GetGamepadSprite() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSBZUIFullscreenNotificationData> GetFullscreenNotificationQueue() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetActiveControlsReference(FSBZControlsReference& OutControlsReference);
    
    UFUNCTION(BlueprintCallable)
    void DisplayHUDNotification(const FSBZHUDNotificationData& HUDNotification);
    
    UFUNCTION(BlueprintCallable)
    void ClearPopupStack();
    
    UFUNCTION(BlueprintCallable)
    void AddUIGameplayTag(FGameplayTag UITag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddMenuControlsReference(const UObject* WorldContextObject, const FSBZButtonControlsReference& InButtonControlsReference, FOnControlsReferenceActionPressed ControlsReferenceActionPressedEvent);
    
    UFUNCTION(BlueprintCallable)
    int32 AddControlsReference(const FSBZControlsReference& InControlsReference);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override PURE_VIRTUAL(HasMatchingGameplayTag, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAnyMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAllMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(GetOwnedGameplayTags,);
    
};

