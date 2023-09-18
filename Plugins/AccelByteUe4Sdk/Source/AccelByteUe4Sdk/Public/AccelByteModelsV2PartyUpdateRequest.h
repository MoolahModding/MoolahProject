#pragma once
#include "CoreMinimal.h"
#include "JsonObjectWrapper.h"
#include "EAccelByteV2SessionConfigurationServerType.h"
#include "EAccelByteV2SessionJoinability.h"
#include "AccelByteModelsV2PartyUpdateRequest.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsV2PartyUpdateRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJsonObjectWrapper Attributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAccelByteV2SessionJoinability Joinability;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAccelByteV2SessionConfigurationServerType Type;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 InactiveTimeout;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 InviteTimeout;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 MinPlayers;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 MaxPlayers;
    
    FAccelByteModelsV2PartyUpdateRequest();
};

