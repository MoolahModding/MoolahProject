#pragma once
#include "CoreMinimal.h"
#include "SBZPendingUsingSpawnedCarryData.generated.h"

class ASBZCharacter;

USTRUCT(BlueprintType)
struct FSBZPendingUsingSpawnedCarryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZCharacter* User;
    
    STARBREEZE_API FSBZPendingUsingSpawnedCarryData();
};

