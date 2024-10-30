#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZSpawnWaveFilteredBehavior.generated.h"

class UBehaviorTree;

USTRUCT(BlueprintType)
struct FSBZSpawnWaveFilteredBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* BehaviorTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer PawnTypes;
    
    STARBREEZE_API FSBZSpawnWaveFilteredBehavior();
};

