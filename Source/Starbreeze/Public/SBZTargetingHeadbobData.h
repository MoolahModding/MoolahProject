#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBZTargetingHeadbobData.generated.h"

class UCurveVector;

UCLASS(Blueprintable, Const)
class USBZTargetingHeadbobData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* BreathingCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LocomotionFPRigModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BreathingFPRigModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BreathingAmplitude;
    
    USBZTargetingHeadbobData();

};

