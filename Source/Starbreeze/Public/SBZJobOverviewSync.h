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
    ASBZJobOverviewSync(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void UpdateReadyClientStatusReceived(const FSBZPlayersReadyStatusStateArray& PlayersReadyStatus);
    
    UFUNCTION(BlueprintCallable)
    void UpdateReadyClientStatus();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetPlayerJobOverviewReady(const FUniqueNetIdRepl& InPlayerId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerPlayerReadyToEnterActionPhaseReceived(const FUniqueNetIdRepl& PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void SendServerPlayerReadyToEnterActionPhase(const FUniqueNetIdRepl& PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void SendPlayerJobOverviewReady(const FUniqueNetIdRepl& InPlayerId);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NotifyClientProceedToActionPhase();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NotifyClientMissionEnd();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NotifyClientCurrentReadyTimeoutTimeSinglePlayerReceived(const FUniqueNetIdRepl& PlayerId, int32 ReadyTimeoutTime);
    
    UFUNCTION(BlueprintCallable)
    void NotifyClientCurrentReadyTimeoutTimeSinglePlayer(const FUniqueNetIdRepl& PlayerId, int32 ReadyTimeoutTime);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NotifyClientCurrentReadyTimeoutTimeReceived(int32 ReadyTimeoutTime);
    
    UFUNCTION(BlueprintCallable)
    void NotifyClientCurrentReadyTimeoutTime(int32 ReadyTimeoutTime);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NotifyActionPhaseReady();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ClientWaitsForReadyReceived(const FUniqueNetIdRepl& PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void ClientWaitsForReady();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ClientMoveToBlackScreenSinglePlayerReceived(const FUniqueNetIdRepl& PlayerId, EBlackScreenTransitionType BlackScreenTransitionType);
    
    UFUNCTION(BlueprintCallable)
    void ClientMoveToBlackScreenSinglePlayer(const FUniqueNetIdRepl& PlayerId, EBlackScreenTransitionType BlackScreenTransitionType);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ClientMoveToBlackScreenReceived(EBlackScreenTransitionType BlackScreenTransitionType);
    
    UFUNCTION(BlueprintCallable)
    void ClientMoveToBlackScreen(EBlackScreenTransitionType BlackScreenTransitionType);
    
};

