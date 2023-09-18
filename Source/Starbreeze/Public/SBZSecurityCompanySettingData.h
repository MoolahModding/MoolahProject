#pragma once
#include "CoreMinimal.h"
#include "SBZSecurityCompanySettingData.generated.h"

USTRUCT(BlueprintType)
struct FSBZSecurityCompanySettingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IndestructibleCamerasMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 CameraRuntimeLimitMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 LeadGuardMask;
    
    STARBREEZE_API FSBZSecurityCompanySettingData();
};

