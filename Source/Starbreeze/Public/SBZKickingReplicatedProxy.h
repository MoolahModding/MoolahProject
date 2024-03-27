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
    ASBZKickingReplicatedProxy();
    UFUNCTION(Reliable, Server, WithValidation)
    void VoteToKick(FUniqueNetIdRepl PlayerIdToKick, FUniqueNetIdRepl PlayerProposingKick, ESBZKickingMode ModeKick);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSendKickingInfo(FSBZKickingInfo NewKickingInfo);
    
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void OnKicked(FSBZKickingInfo NewKickingInfo);
    
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void MulticastReceiveKickingInfo(const FSBZKickingInfo& NewKickingInfo);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void KickPlayerFinal(FUniqueNetIdRepl PlayerIdToKick, ESBZKickingMode ModeKick);
    
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void KickFailed(FUniqueNetIdRepl PlayerProposed, ESBZKickingError ErrorCode);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void InitiateKicking(FUniqueNetIdRepl PlayerIdToKick, FUniqueNetIdRepl PlayerProposingKick, ESBZKickingMode ModeKick);
    
};

