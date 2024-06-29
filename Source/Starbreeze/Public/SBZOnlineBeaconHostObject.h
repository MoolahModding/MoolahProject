#pragma once
#include "CoreMinimal.h"
#include "OnlineBeaconHostObject.h"
#include "SBZOnlineBeaconHostObject.generated.h"

UCLASS(Blueprintable, NonTransient)
class STARBREEZE_API ASBZOnlineBeaconHostObject : public AOnlineBeaconHostObject {
    GENERATED_BODY()
public:
    ASBZOnlineBeaconHostObject(const FObjectInitializer& ObjectInitializer);

};

