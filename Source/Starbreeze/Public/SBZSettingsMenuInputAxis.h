#pragma once
#include "CoreMinimal.h"
#include "SBZSettingsMenuInputAxis.generated.h"

USTRUCT(BlueprintType)
struct FSBZSettingsMenuInputAxis {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AxisName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
    STARBREEZE_API FSBZSettingsMenuInputAxis();
};

