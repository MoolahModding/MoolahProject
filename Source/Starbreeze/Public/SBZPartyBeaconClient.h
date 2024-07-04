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
    ASBZPartyBeaconClient(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerNotifyLeftLobby(const FUniqueNetIdRepl& ClientId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerNotifyJoinedLobby(const FUniqueNetIdRepl& ClientId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerNotifyFailedToJoinLobby(const FUniqueNetIdRepl& ClientId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerLogin(const FSBZPartyMemberInfo& Client);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PartyState();
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void LeaveLobby();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ConnectToLobby(const FString& InLobbyNetId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientLoginAck(const FUniqueNetIdRepl& InNetId, bool bWasSuccessful);
    
};

