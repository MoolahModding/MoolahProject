#pragma once
#include "CoreMinimal.h"
#include "ESBZEquippableLoadoutSlot.h"
#include "SBZEquippableConfig.h"
#include "SBZMenuStackScreenWidgetWithTutorial.h"
#include "Templates/SubclassOf.h"
#include "SBZMainMenuLoadoutWeaponModCategoryWidget.generated.h"

class UPanelWidget;
class USBZLoadoutModCategoryButton;
class USBZMenuButton;
class USBZModularPartSlotBase;

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuLoadoutWeaponModCategoryWidget : public USBZMenuStackScreenWidgetWithTutorial {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZLoadoutModCategoryButton> ButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ObjectPoolAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* CategoryParentPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZEquippableConfig EquippableConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZEquippableLoadoutSlot EquippableSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 WeaponSlotIndex;
    
public:
    USBZMainMenuLoadoutWeaponModCategoryWidget();

    UFUNCTION(BlueprintCallable)
    void OnCategoryButtonSelected(const USBZModularPartSlotBase* ModSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCategoryButtonFocused(USBZMenuButton* InButton, bool bIsFocused);
    
    UFUNCTION(BlueprintCallable)
    USBZLoadoutModCategoryButton* GetAvailibleButton(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool CustomizeWeaponInSlot(ESBZEquippableLoadoutSlot InEquippableSlot, int32 InWeaponSlotIndex);
    
};

