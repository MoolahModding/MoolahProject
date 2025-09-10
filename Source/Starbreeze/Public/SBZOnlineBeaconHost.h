#pragma once
#include "CoreMinimal.h"
#include "OnlineBeaconHost.h"
#include "SBZOnlineBeaconHost.generated.h"

UCLASS(Blueprintable, NonTransient)
class STARBREEZE_API ASBZOnlineBeaconHost : public AOnlineBeaconHost {
    GENERATED_BODY()
public:
    ASBZOnlineBeaconHost(const FObjectInitializer& ObjectInitializer);

};

