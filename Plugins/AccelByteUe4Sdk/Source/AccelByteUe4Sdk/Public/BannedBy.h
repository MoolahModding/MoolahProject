#pragma once
#include "CoreMinimal.h"
#include "BannedBy.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FBannedBy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    FBannedBy();
};

