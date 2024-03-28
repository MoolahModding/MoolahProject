#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "GameFramework/OnlineReplStructs.h"
#include "EBlackScreenTransitionType.h"
#include "SBZPlayersReadyStatusStateArray.h"
#include "SBZJobOverviewSync.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API ASBZJobOverviewSync : public AInfo {
    GENERATED_BODY()
public:
    ASBZJobOverviewSync();
    UFUNCTION(NetMulticast, Reliable)
    void UpdateReadyClientStatusReceived(const FSBZPlayersReadyStatusStateArray& PlayersReadyStatus);
    
    UFUNCTION()
    void UpdateReadyClientStatus();
    
    UFUNCTION(Reliable, Server)
    void ServerSetPlayerJobOverviewReady(const FUniqueNetIdRepl& InPlayerId);
    
    UFUNCTION(Reliable, Server)
    void ServerPlayerReadyToEnterActionPhaseReceived(const FUniqueNetIdRepl& PlayerId);
    
    UFUNCTION()
    void SendServerPlayerReadyToEnterActionPhase(const FUniqueNetIdRepl& PlayerId);
    
    UFUNCTION()
    void SendPlayerJobOverviewReady(const FUniqueNetIdRepl& InPlayerId);
    
    UFUNCTION(NetMulticast, Reliable)
    void NotifyClientProceedToActionPhase();
    
    UFUNCTION(NetMulticast, Reliable)
    void NotifyClientMissionEnd();
    
    UFUNCTION(NetMulticast, Reliable)
    void NotifyClientCurrentReadyTimeoutTimeSinglePlayerReceived(const FUniqueNetIdRepl& PlayerId, int32 ReadyTimeoutTime);
    
    UFUNCTION()
    void NotifyClientCurrentReadyTimeoutTimeSinglePlayer(const FUniqueNetIdRepl& PlayerId, int32 ReadyTimeoutTime);
    
    UFUNCTION(NetMulticast, Reliable)
    void NotifyClientCurrentReadyTimeoutTimeReceived(int32 ReadyTimeoutTime);
    
    UFUNCTION()
    void NotifyClientCurrentReadyTimeoutTime(int32 ReadyTimeoutTime);
    
    UFUNCTION(NetMulticast, Reliable)
    void NotifyActionPhaseReady();
    
    UFUNCTION(Reliable, Server)
    void ClientWaitsForReadyReceived(const FUniqueNetIdRepl& PlayerId);
    
    UFUNCTION()
    void ClientWaitsForReady();
    
    UFUNCTION(NetMulticast, Reliable)
    void ClientMoveToBlackScreenSinglePlayerReceived(const FUniqueNetIdRepl& PlayerId, EBlackScreenTransitionType BlackScreenTransitionType);
    
    UFUNCTION()
    void ClientMoveToBlackScreenSinglePlayer(const FUniqueNetIdRepl& PlayerId, EBlackScreenTransitionType BlackScreenTransitionType);
    
    UFUNCTION(NetMulticast, Reliable)
    void ClientMoveToBlackScreenReceived(EBlackScreenTransitionType BlackScreenTransitionType);
    
    UFUNCTION()
    void ClientMoveToBlackScreen(EBlackScreenTransitionType BlackScreenTransitionType);
    
};

