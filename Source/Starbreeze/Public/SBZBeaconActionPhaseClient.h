#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/OnlineReplStructs.h"
#include "ESBZFirstPartyPlatform.h"
#include "ESBZOnlineCode.h"
#include "ESBZPlatform.h"
#include "ESBZPreMatchLobbyStatus.h"
#include "ESBZSlotStatus.h"
#include "PD3PlayerLoadout.h"
#include "SBZLobbyCharacterInfo.h"
#include "SBZMissionInfo.h"
#include "SBZOnlineBeaconClient.h"
#include "SBZPlayerSlotInfo.h"
#include "SBZSlotData.h"
#include "SBZBeaconActionPhaseClient.generated.h"

UCLASS(Blueprintable, NonTransient)
class STARBREEZE_API ASBZBeaconActionPhaseClient : public ASBZOnlineBeaconClient {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CharactersInfo, meta=(AllowPrivateAccess=true))
    TArray<FSBZLobbyCharacterInfo> PlayersInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDsLobbyClient;
    
    ASBZBeaconActionPhaseClient();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(Reliable, Server)
    void ServerVoteStayAsParty();
    
    UFUNCTION(Reliable, Server)
    void ServerTogglePlayerReady(const FUniqueNetIdRepl& InPlayerId);
    
    UFUNCTION(Reliable, Server)
    void ServerSetSlotStatus(const FUniqueNetIdRepl& InPlayerId, ESBZSlotStatus Status);
    
    UFUNCTION(Reliable, Server)
    void ServerSetPlayerUnready(const FUniqueNetIdRepl& InPlayerId);
    
    UFUNCTION(Reliable, Server)
    void ServerSetPlayerReady(const FUniqueNetIdRepl& InPlayerId);
    
    UFUNCTION(Reliable, Server)
    void ServerSetPlayerLoadout(const FUniqueNetIdRepl& InPlayerId, const FPD3PlayerLoadout& InLoadout, const ESBZFirstPartyPlatform& FirstPartyPlatform, const ESBZPlatform InPlatform, const int32 InInfamyLevel, const FString& AccelByteUserName, const FString& AccelByteDisplayName, bool bCrossPlayEnabled);
    
    UFUNCTION(Reliable, Server)
    void ServerSetPlayerLoadingComplete(const FUniqueNetIdRepl& InPlayerId);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetPlayerInfo(const FSBZLobbyCharacterInfo& PlayerInfo);
    
    UFUNCTION(Reliable, Server)
    void ServerSetPlayerData(const FSBZSlotData& InSlotData);
    
    UFUNCTION(Reliable, Server)
    void ServerSetPlayerCharactersArray(const FUniqueNetIdRepl& InPlayerId, const TArray<FSoftObjectPath>& InPreferredPlayerCharacters, const TArray<FSoftObjectPath>& InInventoryPlayerCharacters);
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerReserveSlot(const TArray<FSBZPlayerSlotInfo>& InPlayers);
    
public:
    UFUNCTION(Reliable, Server)
    void ServerRemovePreplanningAsset(const FUniqueNetIdRepl& InPlayerId);
    
    UFUNCTION(Reliable, Server)
    void ServerPlayerToReadyReceive(const FUniqueNetIdRepl& InPlayerId);
    
    UFUNCTION(Client, Reliable)
    void ServerPlayerToReadyAck();
    
    UFUNCTION()
    void ServerPlayerToReady();
    
    UFUNCTION(Reliable, Server)
    void ServerNotifyStartTravel(const FUniqueNetIdRepl& InPlayerIdStartTravel);
    
    UFUNCTION(Reliable, Server)
    void ServerAddPreplanningAsset(const FUniqueNetIdRepl& InPlayerId, const FString& AccelByteItemSku);
    
    UFUNCTION()
    void SendTogglePlayerReady();
    
    UFUNCTION()
    void SendPreplanningAssets();
    
    UFUNCTION()
    void SendPlayerUnready();
    
    UFUNCTION()
    void SendPlayerReady();
    
    UFUNCTION()
    void SendActiveLoadout(const FUniqueNetIdRepl& InPlayerId);
    
    UFUNCTION()
    void OnRep_CharactersInfo();
    
private:
    UFUNCTION()
    void OnActiveLoadoutChanged(int32 NewActiveLoadoutIndex);
    
public:
    UFUNCTION(Client, Reliable)
    void NotifyMissionEnd();
    
    UFUNCTION(Client, Reliable)
    void ClientUpdateStayAsPartyList(const TArray<FString>& BackendPlayerIds);
    
    UFUNCTION(Client, Reliable)
    void ClientUpdateSlotsData(const TArray<FSBZSlotData>& InSlotsData);
    
protected:
    UFUNCTION()
    void ClientTravelConnectionTimeout();
    
public:
    UFUNCTION(Client, Reliable)
    void ClientStartWaitingPlayersLoadingComplete();
    
    UFUNCTION(Client, Reliable)
    void ClientStartTravelAck(const ESBZOnlineCode& Result);
    
    UFUNCTION(Client, Reliable)
    void ClientSetPlayerLoadout(const FUniqueNetIdRepl& InPlayerId, const FPD3PlayerLoadout& InLoadout, const FSoftObjectPath InSelectedCharacter, const ESBZFirstPartyPlatform FirstPartyPlatform, const ESBZPlatform InPlatform, const int32 InInfamyLevel, const FString& AccelByteUserName, const FString& AccelByteDisplayName, bool bCrossPlayEnabled);
    
    UFUNCTION(Client, Reliable)
    void ClientRestartPreTravelTimer(float PreTravelTimeLimit);
    
    UFUNCTION(Client, Reliable)
    void ClientRestartPreMatchTimer(float PreMatchReadyTimeLimit);
    
protected:
    UFUNCTION(Client, Reliable)
    void ClientReserveSlotAck(bool bWasSuccessful, const FSBZMissionInfo& InMissionInfo);
    
public:
    UFUNCTION(Client, Reliable)
    void ClientPreplanningAssetRemoved(const FUniqueNetIdRepl& InPlayerId);
    
    UFUNCTION(Client, Reliable)
    void ClientPreplanningAssetRejected();
    
    UFUNCTION(Client, Reliable)
    void ClientPreplanningAssetAdded(const FUniqueNetIdRepl& InPlayerId, const FString& AccelByteItemSku);
    
    UFUNCTION(Client, Reliable)
    void ClientPreMatchLobbyStatusUpdated(ESBZPreMatchLobbyStatus InStatus);
    
    UFUNCTION(Client, Reliable)
    void ClientPlayerToReadyAck();
    
    UFUNCTION(Client, Reliable)
    void ClientPlayerReadyAck(bool bIsReady);
    
    UFUNCTION(Client, Reliable)
    void ClientJoinPartyByCode(const FString& PartyCode);
    
    UFUNCTION(Client, Reliable)
    void ClientInitializeTravel();
    
    UFUNCTION(Client, Reliable)
    void ClientForceReadyButtonByServer();
    
};

