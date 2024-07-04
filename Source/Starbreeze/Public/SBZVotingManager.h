#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZVotingManager.generated.h"

class ASBZVotingReplicatedProxy;
class USBZVote;
class USBZVoteFactory;
class UWorld;

UCLASS(Blueprintable, Config=Starbreeze)
class STARBREEZE_API USBZVotingManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZVotingReplicatedProxy* ReplicatedProxy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZVoteFactory* VoteFactory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZVote* CurrentVote;
    
public:
    USBZVotingManager();

protected:
    UFUNCTION(BlueprintCallable)
    void HandlePlayableLevelInitialized(UWorld* World);
    
};

