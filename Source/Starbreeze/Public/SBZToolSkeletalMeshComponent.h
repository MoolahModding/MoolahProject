#pragma once
#include "CoreMinimal.h"
#include "Components/SkeletalMeshComponent.h"
#include "SBZToolSkeletalMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZToolSkeletalMeshComponent : public USkeletalMeshComponent {
    GENERATED_BODY()
public:
    USBZToolSkeletalMeshComponent();

};

