#pragma once
#include "CoreMinimal.h"
#include "SBZRemoteEventWithActorParams.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSBZRemoteEventWithActorParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    STARBREEZE_API FSBZRemoteEventWithActorParams();
};

