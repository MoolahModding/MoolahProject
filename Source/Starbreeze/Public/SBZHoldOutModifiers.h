#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZHoldOutModifiers.generated.h"

USTRUCT(BlueprintType)
struct FSBZHoldOutModifiers {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> ModifierCounts;
    
    STARBREEZE_API FSBZHoldOutModifiers();
};

