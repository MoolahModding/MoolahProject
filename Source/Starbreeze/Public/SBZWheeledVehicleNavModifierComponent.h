#pragma once
#include "CoreMinimal.h"
#include "NavModifierComponent.h"
#include "SBZWheeledVehicleNavModifierComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZWheeledVehicleNavModifierComponent : public UNavModifierComponent {
    GENERATED_BODY()
public:
    USBZWheeledVehicleNavModifierComponent(const FObjectInitializer& ObjectInitializer);

};

