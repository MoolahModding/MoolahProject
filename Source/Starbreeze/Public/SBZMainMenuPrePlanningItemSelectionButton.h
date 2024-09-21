#pragma once
#include "CoreMinimal.h"
#include "SBZMenuButton.h"
#include "SBZMainMenuPrePlanningItemSelectionButton.generated.h"

class USBZPreplanningAssetData;

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuPrePlanningItemSelectionButton : public USBZMenuButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZPreplanningAssetData* PreplanningItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 StackCount;
    
public:
    USBZMainMenuPrePlanningItemSelectionButton();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRemoveAssetButton(bool bIsRemoveAssetButton);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPrePlanningItemInitialized(const USBZPreplanningAssetData* InPreplanningData);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializePrePlanningItem(const USBZPreplanningAssetData* InPreplanningItem, int32 InStackCount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZPreplanningAssetData* GetPreplanningItem() const;
    
};

