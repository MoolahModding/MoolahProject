#pragma once
#include "CoreMinimal.h"
#include "ESBZSpawnRotationMethod.h"
#include "SBZSpawnRotationHandlingMethod.generated.h"

USTRUCT(BlueprintType)
struct FSBZSpawnRotationHandlingMethod {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumAngleVariation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZSpawnRotationMethod Method;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadingAngle;
    
    STARBREEZE_API FSBZSpawnRotationHandlingMethod();
};

