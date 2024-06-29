#pragma once
#include "CoreMinimal.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AIPerceptionTypes.h"
#include "Perception/AIPerceptionComponent.h"
#include "ESBZSenseConfig.h"
#include "SBZAIPerceptionComponent.generated.h"

class AActor;
class UAISenseConfig;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZAIPerceptionComponent : public UAIPerceptionComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAISenseConfig*> CombatSensesConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAISenseConfig*> DistractedSensesConfig;
    
public:
    USBZAIPerceptionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSenseConfig(ESBZSenseConfig ConfigID);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTransporterBrutalCarrySkillPerceptionInfoUpdated(const FActorPerceptionUpdateInfo& UpdateInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnTargetPerception(AActor* Actor, FAIStimulus Stimulus);
    
};

