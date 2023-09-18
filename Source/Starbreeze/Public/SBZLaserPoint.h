#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "SBZLaserPoint.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZLaserPoint : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    USBZLaserPoint();

};

