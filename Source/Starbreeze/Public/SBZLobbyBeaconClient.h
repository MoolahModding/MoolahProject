#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "SBZLobbyCharacterInfo.h"
#include "SBZOnlineBeaconClient.h"
#include "SBZSlotData.h"
#include "SBZLobbyBeaconClient.generated.h"

class ASBZLobbyRemoteState;

UCLASS(Blueprintable, NonTransient)
class STARBREEZE_API ASBZLobbyBeaconClient : public ASBZOnlineBeaconClient {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LobbyState, meta=(AllowPrivateAccess=true))
    ASBZLobbyRemoteState* LobbyState;
    
    ASBZLobbyBeaconClient();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(Reliable, Server)
    void ServerUpdateSlot(const FUniqueNetIdRepl& InPlayerId, FSBZSlotData InSlotData);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerUpdatePlayerInfo(const FSBZLobbyCharacterInfo& PlayerInfo);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetPlayerReady(const FUniqueNetIdRepl& InPlayerId, bool bIsReady);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetPlayerAcceptedMatch(const FUniqueNetIdRepl& InPlayerId, bool bIsConfirmed);
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerReserveSlot(const TArray<FUniqueNetIdRepl>& InPlayerIds);
    
public:
    UFUNCTION(Reliable, Server)
    void ServerRemovePreplanningAsset(const FUniqueNetIdRepl& InPlayerId);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerPlayerToReadyReceive(const FUniqueNetIdRepl& InPlayerId);
    
    UFUNCTION()
    void ServerPlayerToReady();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerMoveToServerAck(const FUniqueNetIdRepl& InPlayerId);
    
    UFUNCTION(Reliable, Server)
    void ServerAddPreplanningAsset(const FUniqueNetIdRepl& InPlayerId, const FString& AccelByteItemSku);
    
    UFUNCTION()
    void OnRep_LobbyState();
    
    UFUNCTION(Client, Reliable)
    void MulticastSlotUpdated(FSBZSlotData InSlotData);
    
    UFUNCTION(Client, Reliable)
    void ClientStopWaitingOtherPlayers();
    
protected:
    UFUNCTION(Client, Reliable)
    void ClientReserveSlotAck(bool bWasSuccessful);
    
public:
    UFUNCTION(Client, Reliable)
    void ClientPreplanningAssetRemoved(const FUniqueNetIdRepl& InPlayerId);
    
    UFUNCTION(Client, Reliable)
    void ClientPreplanningAssetRejected();
    
    UFUNCTION(Client, Reliable)
    void ClientPreplanningAssetAdded(const FUniqueNetIdRepl& InPlayerId, const FString& AccelByteItemSku);
    
    UFUNCTION(Client, Reliable)
    void ClientInitiateWaitActionPhase();
    
    UFUNCTION(Client, Reliable)
    void ClientFreeSlot(const FUniqueNetIdRepl& InPlayerId);
    
    UFUNCTION(Client, Reliable)
    void ClientAddSlot(const FUniqueNetIdRepl& InPlayerId);
    
};

