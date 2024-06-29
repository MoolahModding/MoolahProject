#pragma once
#include "CoreMinimal.h"
#include "ESBZHackableActorState.h"
#include "SBZHackableActor.h"
#include "SBZLocationInformation.h"
#include "SBZHackableInfoActor.generated.h"

UCLASS(Blueprintable)
class ASBZHackableInfoActor : public ASBZHackableActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bHasBeenResetToGenericHack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CustomInfoProcessText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldResetOnHeistStateChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DurationSecondsAfterReset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZHackableActorState StateToResetTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldKeepCustomMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldResetToGenericHack;
    
public:
    ASBZHackableInfoActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ResetHackableActorToGenericHack(const float InDuration, bool bKeepCustomMessage, ESBZHackableActorState ResetState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnHeistGoneLoud();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ResetHackableActorToGenericHack();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetInformation(const FSBZLocationInformation& OutLocationInformation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnHackingInfoDone();
    
};

