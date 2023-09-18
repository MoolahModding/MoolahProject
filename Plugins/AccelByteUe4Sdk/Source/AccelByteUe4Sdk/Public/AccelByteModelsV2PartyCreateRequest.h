#pragma once
#include "CoreMinimal.h"
#include "JsonObjectWrapper.h"
#include "AccelByteModelsV2SessionUser.h"
#include "EAccelByteV2SessionConfigurationServerType.h"
#include "EAccelByteV2SessionJoinability.h"
#include "AccelByteModelsV2PartyCreateRequest.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsV2PartyCreateRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsV2SessionUser> Members;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJsonObjectWrapper Attributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAccelByteV2SessionJoinability Joinability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ConfigurationName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 MaxPlayers;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 MinPlayers;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 InactiveTimeout;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 InviteTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAccelByteV2SessionConfigurationServerType Type;
    
    FAccelByteModelsV2PartyCreateRequest();
};

