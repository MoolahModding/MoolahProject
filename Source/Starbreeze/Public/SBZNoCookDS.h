#pragma once
#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "SBZNoCookDS.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API ASBZNoCookDS : public AStaticMeshActor {
    GENERATED_BODY()
public:
    ASBZNoCookDS(const FObjectInitializer& ObjectInitializer);

};

