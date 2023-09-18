#pragma once
#include "CoreMinimal.h"
#include "SBZDetectionData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSBZDetectionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* Detector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 Detection;
    
    STARBREEZE_API FSBZDetectionData();
};

