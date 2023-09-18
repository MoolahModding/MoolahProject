#pragma once
#include "CoreMinimal.h"
#include "PD3PawnVariationArray.generated.h"

class UClass;

USTRUCT(BlueprintType)
struct FPD3PawnVariationArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UClass*> PawnArray;
    
    STARBREEZE_API FPD3PawnVariationArray();
};

