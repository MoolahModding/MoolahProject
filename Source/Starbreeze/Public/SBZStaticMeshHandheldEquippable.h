#pragma once
#include "CoreMinimal.h"
#include "SBZHandheldEquippable.h"
#include "SBZStaticMeshHandheldEquippable.generated.h"

class UStaticMeshComponent;

UCLASS(Abstract, Blueprintable)
class STARBREEZE_API ASBZStaticMeshHandheldEquippable : public ASBZHandheldEquippable {
    GENERATED_BODY()
public:
    ASBZStaticMeshHandheldEquippable(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    UStaticMeshComponent* GetStaticMeshComponent();
    
};

