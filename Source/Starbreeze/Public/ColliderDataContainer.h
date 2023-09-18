#pragma once
#include "CoreMinimal.h"
#include "ColliderDataContainer.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FColliderDataContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* Collider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AssociatedInteractable;
    
    STARBREEZE_API FColliderDataContainer();
};

