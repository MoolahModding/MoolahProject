#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "PD3PawnVariationArray.generated.h"

class APawn;

USTRUCT(BlueprintType)
struct FPD3PawnVariationArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<APawn>> PawnArray;
    
    STARBREEZE_API FPD3PawnVariationArray();
};

