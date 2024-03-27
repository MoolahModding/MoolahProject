#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "SBZMenuStackWidget.h"
#include "Templates/SubclassOf.h"
#include "SBZMainMenuPrePlanningItemSelectionWidget.generated.h"

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
    TSubclassOf<USBZMainMenuPrePlanningItemSelectionButton> PreplanningItemButtonClass;
    
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
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPreplanningSelectionEnabledChanged(bool bEnabled);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPrePlanningItemButtonFocused(USBZMenuButton* InButton, bool bIsFocused);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPreplanningAssetRemovedByPlayer(const FUniqueNetIdRepl& PlayerID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPreplanningAssetDeclinedByServer();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPreplanningAssetAddedByPlayer(const FUniqueNetIdRepl& PlayerID, const USBZPreplanningAssetData* PreplanningAsset);
    
    UFUNCTION()
    void NativePreplanningAssetRemovedByPlayer(const FUniqueNetIdRepl& PlayerID);
    
    UFUNCTION()
    void NativePreplanningAssetAddedByPlayer(const FUniqueNetIdRepl& PlayerID, const FString& AssetSku);
    
private:
    UFUNCTION()
    void NativeOnPrePlanningItemButtonSelected(USBZMenuButton* InButton);
    
};

