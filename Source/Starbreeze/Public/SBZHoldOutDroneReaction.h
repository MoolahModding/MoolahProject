#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBZHoldOutDroneReaction.generated.h"

class ASBZHoldOutAIDrone;

UCLASS(Blueprintable)
class ASBZHoldOutDroneReaction : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LifeSpanWhenInvalidated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZHoldOutAIDrone* Drone;
    
public:
    ASBZHoldOutDroneReaction(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLifeSpanChangedDueToInvalidation(float NewLifeSpan);
    
};

