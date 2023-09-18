#pragma once
#include "CoreMinimal.h"
#include "ArrayByte.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FArrayByte {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> Content;
    
    FArrayByte();
};

