#pragma once
#include "CoreMinimal.h"
#include "EChromaSDKCoreDeviceTypeEnum.h"
#include "ChromaSDKDeviceInfoType.generated.h"

USTRUCT(BlueprintType)
struct CHROMASDKPLUGIN_API FChromaSDKDeviceInfoType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EChromaSDKCoreDeviceTypeEnum::Type> DeviceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Connected;
    
    FChromaSDKDeviceInfoType();
};

