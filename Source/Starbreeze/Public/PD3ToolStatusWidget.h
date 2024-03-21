#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerStateWidgetBase.h"
#include "PD3ToolStatusWidget.generated.h"

class UPaperSprite;
class USBZAbilityInputActionWidget;

UCLASS(Blueprintable, EditInlineNew)
class UPD3ToolStatusWidget : public USBZPlayerStateWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZAbilityInputActionWidget* Widget_AbilityAction;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasValidPlaceableIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 AmmoInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UPaperSprite> Icon;
    
public:
    UPD3ToolStatusWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnIconChanged(const TSoftObjectPtr<UPaperSprite>& InIcon);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnAmmoInventoryChanged(int32 InAmmoInventory);
    
};

