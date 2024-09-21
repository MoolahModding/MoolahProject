#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerStatePawnWidgetBase.h"
#include "PD3PlaceableStatusWidget.generated.h"

class UPaperSprite;
class USBZAbilityInputActionWidget;

UCLASS(Blueprintable, EditInlineNew)
class UPD3PlaceableStatusWidget : public USBZPlayerStatePawnWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZAbilityInputActionWidget* Widget_AbilityAction;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasValidPlaceableIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentPlaceableIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 AmmoInventory;
    
public:
    UPD3PlaceableStatusWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnIconChanged(const TSoftObjectPtr<UPaperSprite>& InIcon);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnAmmoInventoryChanged(int32 InAmmoInventory);
    
};

