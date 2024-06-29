#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "GameFramework/OnlineReplStructs.h"
#include "ESBZKickingError.h"
#include "ESBZKickingMode.h"
#include "SBZKickingInfo.h"
#include "SBZKickingReplicatedProxy.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API ASBZKickingReplicatedProxy : public AInfo {
    GENERATED_BODY()
public:
    ASBZKickingReplicatedProxy(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void VoteToKick(FUniqueNetIdRepl PlayerIdToKick, FUniqueNetIdRepl PlayerProposingKick, ESBZKickingMode ModeKick);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSendKickingInfo(FSBZKickingInfo NewKickingInfo);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, WithValidation)
    void OnKicked(FSBZKickingInfo NewKickingInfo);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, WithValidation)
    void MulticastReceiveKickingInfo(const FSBZKickingInfo& NewKickingInfo);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void KickPlayerFinal(FUniqueNetIdRepl PlayerIdToKick, ESBZKickingMode ModeKick);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, WithValidation)
    void KickFailed(FUniqueNetIdRepl PlayerProposed, ESBZKickingError ErrorCode);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void InitiateKicking(FUniqueNetIdRepl PlayerIdToKick, FUniqueNetIdRepl PlayerProposingKick, ESBZKickingMode ModeKick);
    
};

