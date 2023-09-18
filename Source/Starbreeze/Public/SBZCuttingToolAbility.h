#pragma once
#include "CoreMinimal.h"
#include "ESBZDisplayCaseState.h"
#include "ESBZGateState.h"
#include "SBZGameplayAbility.h"
#include "SBZCuttingToolAbility.generated.h"

class ASBZDisplayCase;
class ASBZGate;
class ASBZInteractableGate;
class ASBZPlayerCharacter;

UCLASS(Blueprintable)
class USBZCuttingToolAbility : public USBZGameplayAbility {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZDisplayCase* DisplayCase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZInteractableGate* InteractableGate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerCharacter* OwnerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoiseGenerationInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoiseRange;
    
public:
    USBZCuttingToolAbility();

private:
    UFUNCTION(BlueprintCallable)
    void OnGateStateChanged(ASBZGate* Gate, ESBZGateState OldState, ESBZGateState NewState);
    
    UFUNCTION(BlueprintCallable)
    void OnDisplayCaseStateChanged(ESBZDisplayCaseState NewState);
    
};

