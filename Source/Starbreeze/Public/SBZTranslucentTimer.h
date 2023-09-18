#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "SBZTranslucentTimer.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FSBZTranslucentTimer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* PrimitiveComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerHandle;
    
    STARBREEZE_API FSBZTranslucentTimer();
};

