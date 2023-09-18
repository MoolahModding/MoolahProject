#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "SBZLaser.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZLaser : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    USBZLaser();

};

