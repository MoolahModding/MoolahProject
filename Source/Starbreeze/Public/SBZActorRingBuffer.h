#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "SBZObjectRingBuffer.h"
#include "SBZActorRingBuffer.generated.h"

class AActor;

UCLASS(Blueprintable)
class USBZActorRingBuffer : public USBZObjectRingBuffer {
    GENERATED_BODY()
public:
    USBZActorRingBuffer();

private:
    UFUNCTION(BlueprintCallable)
    void OnActorEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
};

