#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESBZOnlineCode.h"
#include "SBZOnlineEventDelegateDelegate.h"
#include "SBZOnlineSessionParams.h"
#include "SBZPartyData.h"
#include "SBZParty.generated.h"

class USBZPartyClient;
class USBZPartyHost;

UCLASS(Blueprintable, Config=Engine, DefaultConfig, NotPlaceable, Transient, Config=Starbreeze)
class STARBREEZE_API USBZParty : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnlineEventDelegate EventPartyHostEnteredMatchmaking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnlineEventDelegate EventPartyHostEnteredLobby;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnlineEventDelegate EventPartyHostEnteredMainMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZPartyClient* PartyClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZPartyHost* PartyHost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPartyData State;
    
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultPort;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PartyRestoreTimeout;
    
public:
    USBZParty();
    UFUNCTION()
    void UpdatePartyState(const FSBZPartyData& InPartyState);
    
private:
    UFUNCTION()
    void JoinPartyComplete(const ESBZOnlineCode& Result);
    
public:
    UFUNCTION()
    void HostPartySession(const FSBZOnlineSessionParams& Params);
    
private:
    UFUNCTION()
    void HostPartyComplete(const ESBZOnlineCode& Result);
    
public:
    UFUNCTION()
    void HandleLostConnectionToPartyHost();
    
    UFUNCTION()
    void HandleGameStateLeft(FName StateName);
    
    UFUNCTION()
    void HandleGameStateEnter(FName StateName);
    
    UFUNCTION()
    FSBZPartyData GetPartyData() const;
    
private:
    UFUNCTION()
    void CancelPartyRestore();
    
};

