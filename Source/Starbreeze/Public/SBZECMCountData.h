#pragma once
#include "CoreMinimal.h"
#include "SBZECMCountData.generated.h"

USTRUCT(BlueprintType)
struct FSBZECMCountData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentECMJammerCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastAddedECMTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ElectricInterferenceCount;
    
    STARBREEZE_API FSBZECMCountData();
};

