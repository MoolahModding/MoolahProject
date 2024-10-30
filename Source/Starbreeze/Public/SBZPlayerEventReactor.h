#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ESBZEventReactorState.h"
#include "ESBZReactionType.h"
#include "SBZEventReactionData.h"
#include "SBZPlayerDefeatStateChangedData.h"
#include "SBZPlayerEventReactor.generated.h"

class ASBZAudioScreen;
class ASBZPlayerState;
class UAkStateValue;

UCLASS(Blueprintable)
class ASBZPlayerEventReactor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASBZAudioScreen*> AudioScreenArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASBZPlayerState*> PlayerStateArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EventCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastPlayedTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZEventReactionData EventReactionArray[29];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkStateValue* ReactorStateArray[5];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerCommentDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentState, meta=(AllowPrivateAccess=true))
    ESBZEventReactorState CurrentState;
    
public:
    ASBZPlayerEventReactor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetState(ESBZEventReactorState NewState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentState();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerDefeatStateChanged(const FSBZPlayerDefeatStateChangedData& DefeatStateData);
    
    UFUNCTION(BlueprintCallable)
    void OnECMJammerCountChanged(int32 NewCount, int32 OldCount, float AddedTime, bool bInIsSignalScanActive);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetState(ESBZEventReactorState NewState);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_PlayAudioReaction(const int32 AudioScreenIndex, ESBZReactionType ReactionType);
    
};

