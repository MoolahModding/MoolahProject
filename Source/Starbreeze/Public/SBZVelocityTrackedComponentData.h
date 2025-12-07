#pragma once
#include "CoreMinimal.h"
#include "SBZVelocityTrackedComponentData.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FSBZVelocityTrackedComponentData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* Component;
    
public:
    STARBREEZE_API FSBZVelocityTrackedComponentData();
};

