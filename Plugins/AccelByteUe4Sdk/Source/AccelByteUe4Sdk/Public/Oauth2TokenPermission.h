#pragma once
#include "CoreMinimal.h"
#include "Oauth2TokenPermission.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FOauth2TokenPermission {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Resource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Action;
    
    FOauth2TokenPermission();
};

