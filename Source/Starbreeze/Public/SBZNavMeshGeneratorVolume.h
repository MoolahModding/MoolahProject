#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "SBZNavMeshGeneratorVolume.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API ASBZNavMeshGeneratorVolume : public AVolume {
    GENERATED_BODY()
public:
    ASBZNavMeshGeneratorVolume(const FObjectInitializer& ObjectInitializer);

};

