#pragma once
#include "CoreMinimal.h"
#include "SBZOnlineBeaconHostObject.h"
#include "SBZLobbyBeaconHost.generated.h"

class ASBZLobbyRemoteState;

UCLASS(Blueprintable, NonTransient)
class STARBREEZE_API ASBZLobbyBeaconHost : public ASBZOnlineBeaconHostObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZLobbyRemoteState* LobbyState;
    
    ASBZLobbyBeaconHost(const FObjectInitializer& ObjectInitializer);

};

