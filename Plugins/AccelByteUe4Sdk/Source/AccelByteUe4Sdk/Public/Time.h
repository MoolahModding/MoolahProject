#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Time.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FTime {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime CurrentTime;
    
    FTime();
};

