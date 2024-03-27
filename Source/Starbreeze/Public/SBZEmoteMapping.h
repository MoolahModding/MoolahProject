#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZEmoteMapping.generated.h"

USTRUCT(BlueprintType)
struct FSBZEmoteMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    STARBREEZE_API FSBZEmoteMapping();
};

