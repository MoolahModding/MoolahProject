#pragma once
#include "CoreMinimal.h"
#include "ListUserDataRequest.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FListUserDataRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> UserIds;
    
    FListUserDataRequest();
};

