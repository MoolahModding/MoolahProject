#pragma once
#include "CoreMinimal.h"
#include "SBZHoldOutDroneFogSettings.h"
#include "SBZProgressionFogMapping.generated.h"

USTRUCT(BlueprintType)
struct FSBZProgressionFogMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZHoldOutDroneFogSettings FogSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Progression;
    
    STARBREEZE_API FSBZProgressionFogMapping();
};

