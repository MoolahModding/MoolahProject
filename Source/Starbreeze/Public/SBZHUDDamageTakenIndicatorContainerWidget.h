#pragma once
#include "CoreMinimal.h"
#include "SBZDamageEvent.h"
#include "SBZWidgetBase.h"
#include "Templates/SubclassOf.h"
#include "SBZHUDDamageTakenIndicatorContainerWidget.generated.h"

class UPanelWidget;
class USBZHUDDamageTakenIndicatorWidget;

UCLASS(Blueprintable, EditInlineNew)
class USBZHUDDamageTakenIndicatorContainerWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZHUDDamageTakenIndicatorWidget> DamageTakenWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfDamageIndicators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HealthDamageColorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ArmorDamageColorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_HUDDamageTakenContainer;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZHUDDamageTakenIndicatorWidget*> DamageIndicators;
    
public:
    USBZHUDDamageTakenIndicatorContainerWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OnTakenDamageEvent(const FSBZDamageEvent& DamageEventData);
    
};

