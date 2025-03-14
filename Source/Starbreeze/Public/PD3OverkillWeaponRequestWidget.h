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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverkillProgressionScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOverskillLoadoutTicking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsReady;
    
public:
    UPD3OverkillWeaponRequestWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnOverkillWeaponRequestReady();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnOverkillWeaponRequestNotReady();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnOverkillRequested();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnOverkillProgressChanged(float NewProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnOverkillDisabled();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_OnOverskillLoadoutTickingChanged(bool bInIsTicking);
    
};

