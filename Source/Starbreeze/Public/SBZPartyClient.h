#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameFramework/OnlineReplStructs.h"
#include "SBZPartyData.h"
#include "SBZPartyMemberInfo.h"
#include "SBZPartyClient.generated.h"

UCLASS(Blueprintable, NotPlaceable, Transient)
class STARBREEZE_API USBZPartyClient : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PartyState, meta=(AllowPrivateAccess=true))
    FSBZPartyData PartyState;
    
public:
    USBZPartyClient();

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

