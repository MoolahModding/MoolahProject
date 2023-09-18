#pragma once
#include "CoreMinimal.h"
#include "SBZRemoteEventWithActorsArrayParams.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSBZRemoteEventWithActorsArrayParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> Actor;
    
    STARBREEZE_API FSBZRemoteEventWithActorsArrayParams();
};

