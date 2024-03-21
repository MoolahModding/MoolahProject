#pragma once
#include "CoreMinimal.h"
#include "SBZOnPlayerDisconnectedEventDelegate.h"
#include "SBZOnPlayerStartTravelEventDelegate.h"
#include "SBZOnPlayerToReadyEventDelegate.h"
#include "SBZOnlineBeaconHostObject.h"
#include "SBZBeaconActionPhaseHost.generated.h"

class APlayerState;

UCLASS(Blueprintable, NonTransient)
class STARBREEZE_API ASBZBeaconActionPhaseHost : public ASBZOnlineBeaconHostObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnPlayerToReadyEvent OnPlayerToReadyEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnPlayerStartTravelEvent OnPlayerStartTravelEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnPlayerDisconnectedEvent OnPlayerDisconnectedEvent;
    
    ASBZBeaconActionPhaseHost();
    UFUNCTION(BlueprintCallable)
    void HandlePlayerCountChanged(APlayerState* PlayerState);
    
};

