#pragma once
#include "CoreMinimal.h"
#include "SBZImpactConfig.h"
#include "SBZProjectileTypeImpactData.h"
#include "SBZProjectileImpactConfig.generated.h"

UCLASS(Blueprintable)
class USBZProjectileImpactConfig : public USBZImpactConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZProjectileTypeImpactData> Types;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldDoBloodSplatter;
    
    USBZProjectileImpactConfig();

};

