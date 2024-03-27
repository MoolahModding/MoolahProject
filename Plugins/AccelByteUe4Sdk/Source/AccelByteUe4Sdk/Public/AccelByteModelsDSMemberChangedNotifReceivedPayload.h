#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsDSRegisteredPayload.h"
#include "AccelByteModelsV2GameSessionTeam.h"
#include "AccelByteModelsV2SessionUser.h"
#include "AccelByteModelsDSMemberChangedNotifReceivedPayload.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsDSMemberChangedNotifReceivedPayload : public FAccelByteModelsDSRegisteredPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GameSessionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsV2SessionUser> Members;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsV2GameSessionTeam> Teams;
    
    FAccelByteModelsDSMemberChangedNotifReceivedPayload();
};

