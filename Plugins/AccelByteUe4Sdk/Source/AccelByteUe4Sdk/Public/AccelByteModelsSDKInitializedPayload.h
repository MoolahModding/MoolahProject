#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPluginInfo.h"
#include "AccelByteModelsPredefinedEvent.h"
#include "AccelByteModelsSDKInitializedPayload.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsSDKInitializedPayload : public FAccelByteModelsPredefinedEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsPluginInfo> Plugins;
    
    FAccelByteModelsSDKInitializedPayload();
};

