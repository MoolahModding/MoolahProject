#pragma once
#include "CoreMinimal.h"
#include "SBZImpactConfig.h"
#include "SBZProjectileTypeImpactData.h"
#include "SBZThrowableProjectileImpactConfig.generated.h"

UCLASS(Blueprintable)
class USBZThrowableProjectileImpactConfig : public USBZImpactConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZProjectileTypeImpactData> Types;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldDoBloodSplatter;
    
    USBZThrowableProjectileImpactConfig();

};

