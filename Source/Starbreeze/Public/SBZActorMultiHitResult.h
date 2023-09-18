#pragma once
#include "CoreMinimal.h"
#include "SBZActorMultiHitResult.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSBZActorMultiHitResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> ActorPtr;
    
    STARBREEZE_API FSBZActorMultiHitResult();
};

