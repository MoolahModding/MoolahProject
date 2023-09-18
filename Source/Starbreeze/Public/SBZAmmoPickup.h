#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBZComponentSelector.h"
#include "SBZAmmoPickup.generated.h"

UCLASS(Blueprintable)
class ASBZAmmoPickup : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PickupModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZComponentSelector PhysicsComponent;
    
public:
    ASBZAmmoPickup(const FObjectInitializer& ObjectInitializer);

};

