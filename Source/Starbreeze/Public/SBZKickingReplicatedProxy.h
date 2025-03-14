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
    void VoteToKick(const FUniqueNetIdRepl& PlayerIdToKick, const FUniqueNetIdRepl& PlayerProposingKick, ESBZKickingMode ModeKick);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSendKickingInfo(FSBZKickingInfo NewKickingInfo);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, WithValidation)
    void OnKicked(FSBZKickingInfo NewKickingInfo);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, WithValidation)
    void MulticastReceiveKickingInfo(const FSBZKickingInfo& NewKickingInfo);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void KickPlayerFinal(const FUniqueNetIdRepl& PlayerIdToKick, ESBZKickingMode ModeKick);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, WithValidation)
    void KickFailed(const FUniqueNetIdRepl& PlayerProposed, ESBZKickingError ErrorCode);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void InitiateKicking(const FUniqueNetIdRepl& PlayerIdToKick, const FUniqueNetIdRepl& PlayerProposingKick, ESBZKickingMode ModeKick);
    
};

