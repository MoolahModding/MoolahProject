#pragma once
#include "CoreMinimal.h"
#include "SBZActorPool.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSBZActorPool {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> Actors;
    
    STARBREEZE_API FSBZActorPool();
};

