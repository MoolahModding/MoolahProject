#pragma once
#include "CoreMinimal.h"
#include "User2FaSecretKey.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FUser2FaSecretKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SecretKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Uri;
    
    FUser2FaSecretKey();
};

