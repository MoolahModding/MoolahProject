#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "SBZSabotageAnimationData.h"
#include "SBZBTTask_SabotageAnimation.generated.h"

class UAnimMontage;
class UBehaviorTreeComponent;

UCLASS(Blueprintable)
class USBZBTTask_SabotageAnimation : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZSabotageAnimationData> SabotageAnimations;
    
public:
    USBZBTTask_SabotageAnimation();

private:
    UFUNCTION(BlueprintCallable)
    void OnMontageEnded(UAnimMontage* Montage, bool bIsInterrupted, UBehaviorTreeComponent* OwnerComp);
    
};

