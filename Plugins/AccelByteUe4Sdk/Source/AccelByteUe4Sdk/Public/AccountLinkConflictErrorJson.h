#pragma once
#include "CoreMinimal.h"
#include "AccountLinkConflictMessageVariables.h"
#include "AccountLinkConflictErrorJson.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccountLinkConflictErrorJson {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ErrorCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ErrorMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccountLinkConflictMessageVariables MessageVariables;
    
    FAccountLinkConflictErrorJson();
};

