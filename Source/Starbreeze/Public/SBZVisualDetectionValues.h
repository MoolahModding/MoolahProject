#pragma once
#include "CoreMinimal.h"
#include "SBZVisualDetectionValues.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSBZVisualDetectionValues {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* Target;
    
    STARBREEZE_API FSBZVisualDetectionValues();
};

