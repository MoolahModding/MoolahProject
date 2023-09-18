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
    
    ASBZLobbyBeaconClient(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerUpdateSlot(const FUniqueNetIdRepl& InPlayerId, FSBZSlotData InSlotData);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpdatePlayerInfo(const FSBZLobbyCharacterInfo& PlayerInfo);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetPlayerReady(const FUniqueNetIdRepl& InPlayerId, bool bIsReady);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetPlayerAcceptedMatch(const FUniqueNetIdRepl& InPlayerId, bool bIsConfirmed);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerReserveSlot(const TArray<FUniqueNetIdRepl>& InPlayerIds);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerRemovePreplanningAsset(const FUniqueNetIdRepl& InPlayerId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerPlayerToReadyReceive(const FUniqueNetIdRepl& InPlayerId);
    
    UFUNCTION(BlueprintCallable)
    void ServerPlayerToReady();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerMoveToServerAck(const FUniqueNetIdRepl& InPlayerId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerAddPreplanningAsset(const FUniqueNetIdRepl& InPlayerId, const FString& AccelByteItemSku);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LobbyState();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void MulticastSlotUpdated(FSBZSlotData InSlotData);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientStopWaitingOtherPlayers();
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReserveSlotAck(bool bWasSuccessful);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientPreplanningAssetRemoved(const FUniqueNetIdRepl& InPlayerId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientPreplanningAssetRejected();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientPreplanningAssetAdded(const FUniqueNetIdRepl& InPlayerId, const FString& AccelByteItemSku);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientInitiateWaitActionPhase();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientFreeSlot(const FUniqueNetIdRepl& InPlayerId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAddSlot(const FUniqueNetIdRepl& InPlayerId);
    
};

