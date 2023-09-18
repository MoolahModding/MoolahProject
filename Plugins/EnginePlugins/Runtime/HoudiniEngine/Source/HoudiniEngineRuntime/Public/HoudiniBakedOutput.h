#pragma once
#include "CoreMinimal.h"
#include "HoudiniBakedOutputObject.h"
#include "HoudiniBakedOutputObjectIdentifier.h"
#include "HoudiniBakedOutput.generated.h"

USTRUCT(BlueprintType)
struct HOUDINIENGINERUNTIME_API FHoudiniBakedOutput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FHoudiniBakedOutputObjectIdentifier, FHoudiniBakedOutputObject> BakedOutputObjects;
    
    FHoudiniBakedOutput();
};

