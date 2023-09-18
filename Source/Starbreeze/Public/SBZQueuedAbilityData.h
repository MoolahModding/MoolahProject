#pragma once
#include "CoreMinimal.h"
#include "SBZQueuedAbilityData.generated.h"

class USBZGameplayAbility;

USTRUCT(BlueprintType)
struct FSBZQueuedAbilityData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZGameplayAbility* AbilityCDO;
    
    STARBREEZE_API FSBZQueuedAbilityData();
};

