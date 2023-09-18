#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "SBZHackableToolTargetData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSBZHackableToolTargetData : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* HackableActor;
    
public:
    STARBREEZE_API FSBZHackableToolTargetData();
};

