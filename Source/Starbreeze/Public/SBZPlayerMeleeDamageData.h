#pragma once
#include "CoreMinimal.h"
#include "SBZMeleeDamageData.h"
#include "SBZPlayerMeleeDamageData.generated.h"

UCLASS(Blueprintable)
class USBZPlayerMeleeDamageData : public USBZMeleeDamageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PropDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumAimAssistAngleDifference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimAssistSpeed;
    
    USBZPlayerMeleeDamageData();

};

