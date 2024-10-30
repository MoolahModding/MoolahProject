#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerStateWidgetBase.h"
#include "PD3ConsumableStatusWidget.generated.h"

class UPaperSprite;
class USBZAbilityInputActionWidget;

UCLASS(Blueprintable, EditInlineNew)
class UPD3ConsumableStatusWidget : public USBZPlayerStateWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZAbilityInputActionWidget* Widget_AbilityAction;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ConsumableCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UPaperSprite> Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UPaperSprite> EmptyIcon;
    
public:
    UPD3ConsumableStatusWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnIconChanged(const TSoftObjectPtr<UPaperSprite>& InIcon);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnConsumableCountChanged(int32 InAmmoInventory);
    
};

