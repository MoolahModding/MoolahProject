#pragma once
#include "CoreMinimal.h"
#include "SBZInteractorComponent.h"
#include "SBZAIInteractorComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZAIInteractorComponent : public USBZInteractorComponent {
    GENERATED_BODY()
public:
    USBZAIInteractorComponent(const FObjectInitializer& ObjectInitializer);

};

