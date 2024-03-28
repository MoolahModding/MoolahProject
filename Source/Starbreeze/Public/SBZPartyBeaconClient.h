#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "SBZOnlineBeaconClient.h"
#include "SBZPartyData.h"
#include "SBZPartyMemberInfo.h"
#include "SBZPartyBeaconClient.generated.h"

UCLASS(Blueprintable, NonTransient)
class ASBZPartyBeaconClient : public ASBZOnlineBeaconClient {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PartyState, meta=(AllowPrivateAccess=true))
    FSBZPartyData PartyState;
    
public:
    ASBZPartyBeaconClient();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerNotifyLeftLobby(const FUniqueNetIdRepl& ClientId);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerNotifyJoinedLobby(const FUniqueNetIdRepl& ClientId);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerNotifyFailedToJoinLobby(const FUniqueNetIdRepl& ClientId);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerLogin(const FSBZPartyMemberInfo& Client);
    
    UFUNCTION()
    void OnRep_PartyState();
    
public:
    UFUNCTION(Client, Reliable)
    void LeaveLobby();
    
    UFUNCTION(Client, Reliable)
    void ConnectToLobby(const FString& InLobbyNetId);
    
    UFUNCTION(Client, Reliable)
    void ClientLoginAck(const FUniqueNetIdRepl& InNetId, bool bWasSuccessful);
    
};

