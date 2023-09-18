#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "SBZSensorToolTargetData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSBZSensorToolTargetData : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* ToggledActor;
    
public:
    STARBREEZE_API FSBZSensorToolTargetData();
};

