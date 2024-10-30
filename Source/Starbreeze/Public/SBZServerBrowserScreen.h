#pragma once
#include "CoreMinimal.h"
#include "Layout/Margin.h"
#include "ESBZHeistType.h"
#include "ESBZServerBrowserSessionsType.h"
#include "OnHostableHeistDataUpdatedDelegateDelegate.h"
#include "SBZJoinableHeistData.h"
#include "SBZMenuStackScreenWidget.h"
#include "SBZServerBrowserFilters.h"
#include "SBZServerBrowserHeistCollection.h"
#include "SBZServerBrowserHeistLevel.h"
#include "SBZServersListInterpreter.h"
#include "Templates/SubclassOf.h"
#include "SBZServerBrowserScreen.generated.h"

class UCanvasPanel;
class USBZMainMenuCrimeNetHeistMapIcon;
class USBZMenuButton;
class USBZServerBrowserHeistButton;
class USBZServerBrowserHeistMapWidget;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZServerBrowserScreen : public USBZMenuStackScreenWidget, public ISBZServersListInterpreter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHostableHeistDataUpdatedDelegate OnHostableHeistDataUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZServerBrowserHeistButton> HeistButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZServerBrowserHeistMapWidget> HeistMapIconClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin HeistButtonPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* CanvasPanel_HeistMapIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* VerticalBox_HeistButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZServerBrowserHeistButton* SelectedHeistButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZServerBrowserHeistButton*> ActiveHeistButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZServerBrowserHeistCollection> HeistCollections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZHeistType HeistMode;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ActiveHeistCollectionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZServerBrowserHeistButton*> HeistButtonPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZServerBrowserHeistMapWidget*> HeistMapIconsPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZServerBrowserHeistMapWidget*> ActiveHeistMapIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZServerBrowserHeistCollection> HostableHeistCollections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZServerBrowserHeistCollection> JoinableHeistCollections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, FSBZJoinableHeistData> ServerBrowserSessionsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZServerBrowserFilters ServerFilters;
    
public:
    USBZServerBrowserScreen();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateHeistCollection();
    
    UFUNCTION(BlueprintCallable)
    bool ToggleStoryModeFilter();
    
    UFUNCTION(BlueprintCallable)
    void SetTacticFilter(int32 TacticSelectionIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetHeistNameFilter(const TArray<FSBZServerBrowserHeistLevel>& InHeistData);
    
    UFUNCTION(BlueprintCallable)
    void SetDifficultyFilter(int32 DifficultySelectionIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveHeistMode(int32 NewIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveHeistCollection(int32 NewIndex);
    
    UFUNCTION(BlueprintCallable)
    void RefreshJoinableServers();
    
private:
    UFUNCTION(BlueprintCallable)
    void RefreshHostableHeistCollections();
    
protected:
    UFUNCTION(BlueprintCallable)
    void QueryFilters();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlaceMapPin(USBZServerBrowserHeistMapWidget* TargetPin, USBZServerBrowserHeistButton* ConnectedHeistButton);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnServersUpdated(TEnumAsByte<ESBZServerBrowserSessionsType> SessionsType);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMatchmakingStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputTypeChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHeistModeChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHeistCollectionChanged(const FSBZServerBrowserHeistCollection& ActiveHeistCollection);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHeistButtonSelected(USBZServerBrowserHeistButton* SelectedButton);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHeistButtonFocused(USBZMenuButton* MenuButton, bool bIsFocused);
    
private:
    UFUNCTION(BlueprintCallable)
    void NativeOnStoryButtonFocused(USBZMenuButton* InFocusedButton, bool bIsFocused);
    
    UFUNCTION(BlueprintCallable)
    void NativeOnHeistMapIconHovered(USBZMainMenuCrimeNetHeistMapIcon* MapIcon, bool bIsHovered);
    
    UFUNCTION(BlueprintCallable)
    void NativeOnHeistMapIconClicked(USBZMainMenuCrimeNetHeistMapIcon* InSelectedHeistMapIcon);
    
    UFUNCTION(BlueprintCallable)
    void NativeOnHeistButtonSelected(USBZMenuButton* InSelectedButton);
    
    UFUNCTION(BlueprintCallable)
    void NativeOnHeistButtonFocused(USBZMenuButton* InFocusedButton, bool bIsFocused);
    
    UFUNCTION(BlueprintCallable)
    void HandleMatchmakingStarted();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnHostableHeistDataUpdated(const TArray<FSBZServerBrowserHeistCollection>& OutHostableHeistCollections);
    

    // Fix for true pure virtual functions not being implemented
};

