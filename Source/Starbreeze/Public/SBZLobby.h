#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESBZOnlineCode.h"
#include "SBZOnlineSessionParams.h"
#include "SBZLobby.generated.h"

class AOnlineBeaconHost;
class ASBZBeaconActionPhaseClient;
class ASBZBeaconActionPhaseHost;
class ASBZLobbyBeaconClient;
class ASBZLobbyBeaconHost;
class USBZLobbyLocalState;

UCLASS(Blueprintable, Config=Engine, DefaultConfig, NotPlaceable, Transient, Config=Starbreeze)
class STARBREEZE_API USBZLobby : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZLobbyLocalState* LocalState;
    
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultPort;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZLobbyBeaconClient* LobbyClient;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZLobbyBeaconHost* LobbyHost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AOnlineBeaconHost* LobbyOnlineBeacon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZBeaconActionPhaseClient* BeaconActionPhaseClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZBeaconActionPhaseHost* BeaconActionPhaseHost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AOnlineBeaconHost* ActionPhaseOnlineBeacon;
    
public:
    USBZLobby();
private:
    UFUNCTION()
    void JoinLobbyComplete(ESBZOnlineCode Result);
    
    UFUNCTION()
    void InitLobbyHostComplete(const ESBZOnlineCode& Result);
    
public:
    UFUNCTION()
    void HostMigrationSession(int32 HostId);
    
private:
    UFUNCTION()
    void HostLobbyComplete(ESBZOnlineCode Result);
    
public:
    UFUNCTION()
    void HostLobby(const FSBZOnlineSessionParams& Params);
    
    UFUNCTION()
    void HandleLostConnectionToHost();
    
};

