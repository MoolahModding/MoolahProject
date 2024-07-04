#pragma once
#include "CoreMinimal.h"
#include "SBZAIAction.h"
#include "SBZAIAction_DelayedSurrender.generated.h"

class AActor;
class AController;
class ASBZAIController;
class UAnimMontage;
class UDamageType;

UCLASS(Blueprintable, EditInlineNew)
class USBZAIAction_DelayedSurrender : public USBZAIAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinAimDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZAIController* AIController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* SelectedMontage;
    
public:
    USBZAIAction_DelayedSurrender();

private:
    UFUNCTION(BlueprintCallable)
    void OnTakeDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void OnMontageEnded(UAnimMontage* Montage, bool bInterrupted);
    
};

