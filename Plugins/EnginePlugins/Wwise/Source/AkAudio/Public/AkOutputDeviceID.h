#pragma once
#include "CoreMinimal.h"
#include "AkOutputDeviceID.generated.h"

USTRUCT(BlueprintType)
struct FAkOutputDeviceID {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IdDevice;
    
    AKAUDIO_API FAkOutputDeviceID();
};

