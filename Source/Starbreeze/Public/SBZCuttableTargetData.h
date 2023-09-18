#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "SBZCuttableTargetData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSBZCuttableTargetData : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* CuttableActor;
    
public:
    STARBREEZE_API FSBZCuttableTargetData();
};

