#pragma once
#include "CoreMinimal.h"
#include "SBZComponentSelector.h"
#include "SBZExplosionResult.h"
#include "SBZExplosive.h"
#include "SBZHurtReactionData.h"
#include "SBZHurtReactionDataInterface.h"
#include "SBZTool.h"
#include "Templates/SubclassOf.h"
#include "SBZHackingTool.generated.h"

class AActor;
class UAkAudioEvent;
class UAkRtpc;
class UGameplayEffect;
class UNiagaraSystem;
class UObject;

UCLASS(Blueprintable)
class ASBZHackingTool : public ASBZTool, public ISBZExplosive, public ISBZHurtReactionDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZComponentSelector WidgetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZComponentSelector MiniGameWidgetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* CurrentHackable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* LockedInHackable;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* ExplosionInstigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> HackingToolEMPEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* HackingToolEMPExplodedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* EMPDetonationEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EMPStunDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AIExplosionRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerExplosionRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExplosionAffectsAIOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EMPDetonationRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* HackingSyncStartedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* HackingSyncAbortedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* HackingSyncCompletedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* HackingSyncSucceededEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* OnHackingSyncStartedEventRtpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* OnHackingSyncAbortedEventRtpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* OnHackingSyncCompletedEventRtpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* OnHackingSyncSucceededEventRtpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZHurtReactionData HurtReactionData;
    
public:
    ASBZHackingTool();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHackingSyncSucceded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHackingSyncStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHackingSyncCompleted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHackingSyncAborted();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetCurrentHackable(AActor* InHackedDevice);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ReplicateExplosion(const FSBZExplosionResult& Result);
    
    
    // Fix for true pure virtual functions not being implemented
};

