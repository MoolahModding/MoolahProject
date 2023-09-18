#pragma once
#include "CoreMinimal.h"
#include "SBZPatrolNext.generated.h"

class ASBZPatrolPoint;

USTRUCT(BlueprintType)
struct FSBZPatrolNext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZPatrolPoint* Point;
    
    STARBREEZE_API FSBZPatrolNext();
};

