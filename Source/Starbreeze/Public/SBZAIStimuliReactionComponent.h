#pragma once
#include "CoreMinimal.h"
#include "Perception/AIPerceptionTypes.h"
#include "Components/ActorComponent.h"
#include "SBZStimuliReaction.h"
#include "SBZAIStimuliReactionComponent.generated.h"

class AActor;
class ASBZCharacter;
class USBZAIOrder_Escalate;
class USBZActionNotificationAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZAIStimuliReactionComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZStimuliReaction> Reactions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZAIOrder_Escalate* EscalationOrder;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZActionNotificationAsset* ReasonAssets[16];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASBZCharacter*> DetectedCharacters;
    
public:
    USBZAIStimuliReactionComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void HandleStimuli(AActor* Actor, FAIStimulus Stimulus);
    
};

