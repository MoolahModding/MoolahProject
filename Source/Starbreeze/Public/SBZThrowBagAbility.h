#pragma once
#include "CoreMinimal.h"
#include "SBZGameplayAbility.h"
#include "SBZThrowBagAbility.generated.h"

UCLASS(Blueprintable)
class USBZThrowBagAbility : public USBZGameplayAbility {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsClientCalculated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VelocityModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BackwardVelocityReduction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpwardForce;
    
public:
    USBZThrowBagAbility();

};

