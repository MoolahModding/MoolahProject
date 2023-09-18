#pragma once
#include "CoreMinimal.h"
#include "User2FaBackupCode.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FUser2FaBackupCode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 GeneratedAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> InvalidCodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ValidCodes;
    
    FUser2FaBackupCode();
};

