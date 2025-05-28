#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AccelByteModelsMatchmakingResult.h"
#include "DErrorHandlerDelegate.h"
#include "DHandlerDelegate.h"
#include "DMatchmakingResultDelegateDelegate.h"
#include "ABServerMatchmaking.generated.h"

UCLASS(Blueprintable)
class UABServerMatchmaking : public UObject {
    GENERATED_BODY()
public:
    UABServerMatchmaking();

    UFUNCTION(BlueprintCallable)
    void RemoveUserFromSession(const FString& ChannelName, const FString& MatchId, const FString& UserId, const FAccelByteModelsMatchmakingResult& OptionalBody, FDHandler OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void RebalanceMatchmakingBasedOnMMR(const FString& MatchId, FDMatchmakingResultDelegate OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void QuerySessionStatus(const FString& MatchId, FDMatchmakingResultDelegate OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void EnqueueJoinableSession(const FAccelByteModelsMatchmakingResult& MatchmakingResult, FDHandler OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void DequeueJoinableSession(const FString& MatchId, FDHandler OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void DeactivateStatusPolling();
    
    UFUNCTION(BlueprintCallable)
    void AddUserToSession(const FString& ChannelName, const FString& MatchId, const FString& UserId, const FString& OptionalPartyId, FDHandler OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void ActivateSessionStatusPolling(const FString& MatchId, int32 IntervalSec, FDMatchmakingResultDelegate OnSuccess, FDErrorHandler OnError);
    
};

