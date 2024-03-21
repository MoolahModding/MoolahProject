#pragma once
#include "CoreMinimal.h"
#include "SBZAIUtilityDecider_AIObjectiveBase.h"
#include "SBZAIUtilityDecider_AIObjective.generated.h"

class USBZAIObjectiveComponent;

UCLASS(Blueprintable, EditInlineNew)
class USBZAIUtilityDecider_AIObjective : public USBZAIUtilityDecider_AIObjectiveBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USBZAIObjectiveComponent> CurrentObjective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetObjectiveBBKey;
    
public:
    USBZAIUtilityDecider_AIObjective();
protected:
    UFUNCTION(BlueprintCallable)
    void OnCancelationTimer();
    
};

