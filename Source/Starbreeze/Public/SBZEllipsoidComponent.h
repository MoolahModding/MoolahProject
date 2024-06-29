#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "SBZEllipsoidComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZEllipsoidComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    USBZEllipsoidComponent(const FObjectInitializer& ObjectInitializer);

};

