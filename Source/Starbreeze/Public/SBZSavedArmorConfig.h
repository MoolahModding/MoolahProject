#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZArmorConfig.h"
#include "SBZSavedArmorConfig.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZSavedArmorConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ArmorEntitlementId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZArmorConfig ArmorConfig;
    
    FSBZSavedArmorConfig();
};

