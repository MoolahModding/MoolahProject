#pragma once
#include "CoreMinimal.h"
#include "SBZGameplayAbility.h"
#include "SBZGameplayAbility_CharacterTraverse.generated.h"

class USBZCharacterMovementComponent;

UCLASS(Blueprintable)
class USBZGameplayAbility_CharacterTraverse : public USBZGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bComputeTrajectoryOnActivationAttempt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZCharacterMovementComponent* MovementComponent;
    
public:
    USBZGameplayAbility_CharacterTraverse();

};

