#pragma once
#include "CoreMinimal.h"
#include "ArrayByte.h"
#include "BinaryFileStructure.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FBinaryFileStructure {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FArrayByte> Segments;
    
    FBinaryFileStructure();
};

