#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "SBZMenuStackWidget.h"
#include "SBZMainMenuPrePlanningItemSelectionWidget.generated.h"

class UClass;
class UPanelWidget;
class USBZMainMenuPrePlanningItemSelectionButton;
class USBZMenuButton;
class USBZPlayerInventory;
class USBZPreplanningAssetData;

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuPrePlanningItemSelectionWidget : public USBZMenuStackWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_ButtonList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* PreplanningItemButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FUniqueNetIdRepl, USBZPreplanningAssetData*> ActiveMap;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZMainMenuPrePlanningItemSelectionButton*> PrePlanningItemButtonPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZPlayerInventory* CachedPlayerInventory;
    
public:
    USBZMainMenuPrePlanningItemSelectionWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateAvailablePrePlanningAssetList();
    
    UFUNCTION(BlueprintCallable)
    void SetPreplanningSelectionEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreplanningSelectionEnabledChanged(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPrePlanningItemButtonFocused(USBZMenuButton* InButton, bool bIsFocused);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreplanningAssetRemovedByPlayer(const FUniqueNetIdRepl& PlayerID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreplanningAssetDeclinedByServer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreplanningAssetAddedByPlayer(const FUniqueNetIdRepl& PlayerID, const USBZPreplanningAssetData* PreplanningAsset);
    
    UFUNCTION(BlueprintCallable)
    void NativePreplanningAssetRemovedByPlayer(const FUniqueNetIdRepl& PlayerID);
    
    UFUNCTION(BlueprintCallable)
    void NativePreplanningAssetAddedByPlayer(const FUniqueNetIdRepl& PlayerID, const FString& AssetSku);
    
private:
    UFUNCTION(BlueprintCallable)
    void NativeOnPrePlanningItemButtonSelected(USBZMenuButton* InButton);
    
};

