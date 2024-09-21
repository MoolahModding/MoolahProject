#pragma once
#include "CoreMinimal.h"
#include "SBZBTService_PlaceActor.h"
#include "Templates/SubclassOf.h"
#include "SBZBTService_PlaceDeployable.generated.h"

class ASBZPlaceableCharges;

UCLASS(Blueprintable)
class USBZBTService_PlaceDeployable : public USBZBTService_PlaceActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASBZPlaceableCharges> Deployables[3];
    
public:
    USBZBTService_PlaceDeployable();

};

