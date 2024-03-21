#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerStatePawnWidgetBase.h"
#include "PD3OverkillWeaponRequestWidget.generated.h"

class USBZAbilityInputActionWidget;

UCLASS(Blueprintable, EditInlineNew)
class UPD3OverkillWeaponRequestWidget : public USBZPlayerStatePawnWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZAbilityInputActionWidget* Widget_AbilityAction;
    
public:
    UPD3OverkillWeaponRequestWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnOverkillWeaponRequestReady();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnOverkillWeaponRequestNotReady();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnOverkillProgressChanged(float NewProgress);
    
};

