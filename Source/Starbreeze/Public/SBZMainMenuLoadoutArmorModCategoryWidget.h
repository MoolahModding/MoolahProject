#pragma once
#include "CoreMinimal.h"
#include "SBZArmorConfig.h"
#include "SBZMenuStackScreenWidgetWithTutorial.h"
#include "Templates/SubclassOf.h"
#include "SBZMainMenuLoadoutArmorModCategoryWidget.generated.h"

class UPanelWidget;
class USBZArmorModCategoryButton;
class USBZMenuButton;

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuLoadoutArmorModCategoryWidget : public USBZMenuStackScreenWidgetWithTutorial {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZArmorModCategoryButton> ButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ObjectPoolAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* CategoryParentPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZArmorConfig ArmorConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ArmorSlotIndex;
    
public:
    USBZMainMenuLoadoutArmorModCategoryWidget();

    UFUNCTION(BlueprintCallable)
    void OnCategoryButtonSelected(int32 InArmorChunkIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCategoryButtonFocused(USBZMenuButton* InButton, bool bIsFocused);
    
    UFUNCTION(BlueprintCallable)
    USBZArmorModCategoryButton* GetAvailableButton(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool CustomizeArmorInSlot(int32 InArmorSlotIndex);
    
};

