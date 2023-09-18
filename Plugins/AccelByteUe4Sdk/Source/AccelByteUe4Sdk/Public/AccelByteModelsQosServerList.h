#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsQosServer.h"
#include "AccelByteModelsQosServerList.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsQosServerList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsQosServer> Servers;
    
    FAccelByteModelsQosServerList();
};

