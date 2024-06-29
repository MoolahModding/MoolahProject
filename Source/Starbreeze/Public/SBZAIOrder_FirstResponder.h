#pragma once
#include "CoreMinimal.h"
#include "Perception/AIPerceptionTypes.h"
#include "GameplayTagContainer.h"
#include "EPD3HeistState.h"
#include "SBZAIOrder.h"
#include "SBZAIOrder_FirstResponder.generated.h"

class AActor;
class ASBZCoverPoint;

UCLASS(Blueprintable, EditInlineNew)
class USBZAIOrder_FirstResponder : public USBZAIOrder {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ASBZCoverPoint> CoverPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SoundTags;
    
public:
    USBZAIOrder_FirstResponder();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus);
    
    UFUNCTION(BlueprintCallable)
    void OnHeistStateChanged(EPD3HeistState OldState, EPD3HeistState NewState);
    
};

