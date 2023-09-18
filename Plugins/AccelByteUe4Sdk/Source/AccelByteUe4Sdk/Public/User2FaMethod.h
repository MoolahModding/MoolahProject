#pragma once
#include "CoreMinimal.h"
#include "User2FaMethod.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FUser2FaMethod {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Enabled;
    
    FUser2FaMethod();
};

