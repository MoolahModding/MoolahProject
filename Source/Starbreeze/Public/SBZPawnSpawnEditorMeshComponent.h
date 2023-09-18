#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "SBZPawnSpawnEditorMeshComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZPawnSpawnEditorMeshComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    USBZPawnSpawnEditorMeshComponent();

};

