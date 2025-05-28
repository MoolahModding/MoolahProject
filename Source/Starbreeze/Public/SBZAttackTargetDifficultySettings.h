#pragma once
#include "CoreMinimal.h"
#include "SBZAttackTargetDifficultySettings.generated.h"

USTRUCT(BlueprintType)
struct FSBZAttackTargetDifficultySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomDeviation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LOSLostAdditionalAimTime;
    
    STARBREEZE_API FSBZAttackTargetDifficultySettings();
};

