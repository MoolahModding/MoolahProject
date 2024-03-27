#pragma once
#include "CoreMinimal.h"
#include "Perception/AIPerceptionTypes.h"
#include "Components/ActorComponent.h"
#include "Curves/CurveFloat.h"
#include "GameplayTagContainer.h"
#include "EPD3HeistState.h"
#include "SBZVisualDetectionValues.h"
#include "SBZAIVisualDetectionComponent.generated.h"

class AActor;
class APawn;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZAIVisualDetectionComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VisionDegradeSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VisionDegradeDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve SightDetectionCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMarkAsCriminalOnSearch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldDisplayDetectionBuildup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IllegalActionGracePeriod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxLagCompensation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer IgnoreDisplayTagContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyDetectMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldPauseDetectionOnCriminal;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZVisualDetectionValues> EnemyDetectionValue;
    
public:
    USBZAIVisualDetectionComponent();
private:
    UFUNCTION()
    void OnTargetIllegalAction(AActor* Target);
    
    UFUNCTION()
    void OnPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus);
    
    UFUNCTION()
    void OnLifetimeChanged(APawn* TargetPawn);
    
    UFUNCTION()
    void OnHostageStateChanged(uint8 HostageState);
    
    UFUNCTION()
    void OnGameStateChanged(EPD3HeistState OldState, EPD3HeistState NewState);
    
    UFUNCTION()
    void HandleOnNewPawn(APawn* Pawn);
    
};

