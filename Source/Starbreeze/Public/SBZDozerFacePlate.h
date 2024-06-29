#pragma once
#include "CoreMinimal.h"
#include "SBZDozerFaceArmor.h"
#include "SBZDozerFacePlate.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZDozerFacePlate : public USBZDozerFaceArmor {
    GENERATED_BODY()
public:
    USBZDozerFacePlate(const FObjectInitializer& ObjectInitializer);

};

