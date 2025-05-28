#pragma once
#include "CoreMinimal.h"
#include "SBZMarkerRuntime.h"
#include "SBZMarkerWidget.h"
#include "SBZDamageStatusMarkerWidget.generated.h"

class USBZPawnAttributeSet;

UCLASS(Blueprintable, EditInlineNew)
class USBZDamageStatusMarkerWidget : public USBZMarkerWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float HealthMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Armor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ArmorMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ArmorHardness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsFadeOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZPawnAttributeSet* PawnAttributeSet;
    
public:
    USBZDamageStatusMarkerWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetData(const FSBZMarkerRuntime& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnHealthMaxChanged(float OldHealthMax);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnHealthChanged(float OldHealth);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BP_OnFadeOutChanged(bool bInIsFadeOut);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnArmorMaxChanged(float OldArmorMax);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnArmorHardnessChanged(float OldArmorHardness);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnArmorChanged(float OldArmor);
    
};

