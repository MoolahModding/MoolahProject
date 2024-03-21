#pragma once
#include "CoreMinimal.h"
#include "SBZCableComponent.h"
#include "SBZRappellingRopeComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZRappellingRopeComponent : public USBZCableComponent {
    GENERATED_BODY()
public:
    USBZRappellingRopeComponent();
};

