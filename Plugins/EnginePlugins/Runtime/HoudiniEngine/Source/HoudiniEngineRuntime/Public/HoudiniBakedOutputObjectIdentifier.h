#pragma once
#include "CoreMinimal.h"
#include "HoudiniBakedOutputObjectIdentifier.generated.h"

USTRUCT(BlueprintType)
struct HOUDINIENGINERUNTIME_API FHoudiniBakedOutputObjectIdentifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PartId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SplitIdentifier;
    
    FHoudiniBakedOutputObjectIdentifier();
};
FORCEINLINE uint32 GetTypeHash(const FHoudiniBakedOutputObjectIdentifier) { return 0; }

