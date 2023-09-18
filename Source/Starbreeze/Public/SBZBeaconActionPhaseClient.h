#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/OnlineReplStructs.h"
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
    
    ASBZBeaconActionPhaseClient(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerVoteStayAsParty();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetSlotStatus(const FUniqueNetIdRepl& InPlayerId, ESBZSlotStatus Status);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetPlayerLoadout(const FUniqueNetIdRepl& InPlayerId, const FPD3PlayerLoadout& InLoadout, const ESBZPlatform InPlatform, const int32 InInfamyLevel, const FString& AccelByteUserName, const FString& AccelByteDisplayName, bool bCrossPlayEnabled);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetPlayerLoadingComplete(const FUniqueNetIdRepl& InPlayerId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetPlayerInfo(const FSBZLobbyCharacterInfo& PlayerInfo);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetPlayerData(const FSBZSlotData& InSlotData);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetPlayerCharactersArray(const FUniqueNetIdRepl& InPlayerId, const TArray<FSoftObjectPath>& InPreferredPlayerCharacters, const TArray<FSoftObjectPath>& InInventoryPlayerCharacters);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerReserveSlot(const TArray<FSBZPlayerSlotInfo>& InPlayers);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerRemovePreplanningAsset(const FUniqueNetIdRepl& InPlayerId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerPlayerToReadyReceive(const FUniqueNetIdRepl& InPlayerId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ServerPlayerToReadyAck();
    
    UFUNCTION(BlueprintCallable)
    void ServerPlayerToReady();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerNotifyStartTravel(const FUniqueNetIdRepl& InPlayerIdStartTravel);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerAddPreplanningAsset(const FUniqueNetIdRepl& InPlayerId, const FString& AccelByteItemSku);
    
    UFUNCTION(BlueprintCallable)
    void SendPreplanningAssets();
    
    UFUNCTION(BlueprintCallable)
    void SendActiveLoadout(const FUniqueNetIdRepl& InPlayerId);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CharactersInfo();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnActiveLoadoutChanged(int32 NewActiveLoadoutIndex);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyMissionEnd();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientUpdateStayAsPartyList(const TArray<FString>& BackendPlayerIds);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientUpdateSlotsData(const TArray<FSBZSlotData>& InSlotsData);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ClientTravelConnectionTimeout();
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientStartWaitingPlayersLoadingComplete();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientStartTravelAck(const ESBZOnlineCode& Result);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetPlayerLoadout(const FUniqueNetIdRepl& InPlayerId, const FPD3PlayerLoadout& InLoadout, const FSoftObjectPath InSelectedCharacter, const ESBZPlatform InPlatform, const int32 InInfamyLevel, const FString& AccelByteUserName, const FString& AccelByteDisplayName, bool bCrossPlayEnabled);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientRestartPreTravelTimer(float PreTravelTimeLimit);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientRestartPreMatchTimer(float PreMatchReadyTimeLimit);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReserveSlotAck(bool bWasSuccessful, const FSBZMissionInfo& InMissionInfo);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientPreplanningAssetRemoved(const FUniqueNetIdRepl& InPlayerId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientPreplanningAssetRejected();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientPreplanningAssetAdded(const FUniqueNetIdRepl& InPlayerId, const FString& AccelByteItemSku);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientPreMatchLobbyStatusUpdated(ESBZPreMatchLobbyStatus InStatus);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientPlayerToReadyAck();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientJoinPartyByCode(const FString& PartyCode);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientInitializeTravel();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientForceReadyButtonByServer();
    
};

