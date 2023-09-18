#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsLobbyType.h"
#include "AccelByteModelsLobbyBaseResponse.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsLobbyBaseResponse : public FAccelByteModelsLobbyType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Code;
    
    FAccelByteModelsLobbyBaseResponse();
};

