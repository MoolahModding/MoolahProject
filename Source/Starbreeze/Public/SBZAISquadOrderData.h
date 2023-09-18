#pragma once
#include "CoreMinimal.h"
#include "SBZAISquadOrderData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSBZAISquadOrderData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
    STARBREEZE_API FSBZAISquadOrderData();
};

