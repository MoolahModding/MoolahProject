#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "OnlineBeaconClient.h"
#include "ESBZKickingError.h"
#include "ESBZKickingMode.h"
#include "SBZChatMessage.h"
#include "SBZKickingInfo.h"
#include "SBZOnlineBeaconClient.generated.h"

UCLASS(Blueprintable, NonTransient)
class STARBREEZE_API ASBZOnlineBeaconClient : public AOnlineBeaconClient {
    GENERATED_BODY()
public:
    ASBZOnlineBeaconClient(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void VoteToKick(FUniqueNetIdRepl PlayerIdToKick, FUniqueNetIdRepl PlayerProposingKick, ESBZKickingMode ModeKick);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void SendChatMessage(const FSBZChatMessage& Message);
    
    UFUNCTION(BlueprintCallable, Client, Reliable, WithValidation)
    void ReceiveChatMessage(const FSBZChatMessage& Message);
    
    UFUNCTION(BlueprintCallable, Client, Reliable, WithValidation)
    void KickingInProgress(FSBZKickingInfo NewKickingInfo);
    
    UFUNCTION(BlueprintCallable, Client, Reliable, WithValidation)
    void KickFailed(ESBZKickingError KickingError);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void InitiateKickRequest(FUniqueNetIdRepl PlayerIdToKick, FUniqueNetIdRepl PlayerProposingKick, ESBZKickingMode ModeKick);
    
    UFUNCTION(BlueprintCallable, Client, Reliable, WithValidation)
    void HandleKicked();
    
};

