#pragma once
#include "CoreMinimal.h"
#include "SBZGasCellHitData.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FSBZGasCellHitData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* HitComponent;
    
    STARBREEZE_API FSBZGasCellHitData();
};

