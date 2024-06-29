#pragma once
#include "CoreMinimal.h"
#include "Navigation/CrowdFollowingComponent.h"
#include "SBZCrowdFollowingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZCrowdFollowingComponent : public UCrowdFollowingComponent {
    GENERATED_BODY()
public:
    USBZCrowdFollowingComponent(const FObjectInitializer& ObjectInitializer);

};

