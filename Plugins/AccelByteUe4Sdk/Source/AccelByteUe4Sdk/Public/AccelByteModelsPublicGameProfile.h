#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPublicGameProfileInfo.h"
#include "AccelByteModelsPublicGameProfile.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsPublicGameProfile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsPublicGameProfileInfo> gameProfiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString userId;
    
    FAccelByteModelsPublicGameProfile();
};

