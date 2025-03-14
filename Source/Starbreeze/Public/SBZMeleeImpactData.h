#pragma once
#include "CoreMinimal.h"
#include "ESBZMeleeAttackCategory.h"
#include "SBZStandardImpactData.h"
#include "SBZMeleeImpactData.generated.h"

class USBZBloodSplatterImpactConfig;

USTRUCT(BlueprintType)
struct FSBZMeleeImpactData : public FSBZStandardImpactData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZMeleeAttackCategory, float> CategoryDecalScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBloodSplatter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsExtraBloodSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZBloodSplatterImpactConfig* BloodSplatterImpactConfig;
    
    STARBREEZE_API FSBZMeleeImpactData();
};

