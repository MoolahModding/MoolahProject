#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "GameplayTagContainer.h"
#include "SBZBTTask_RaiseAlertness.generated.h"

UCLASS(Blueprintable)
class USBZBTTask_RaiseAlertness : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RaiseAlertnessTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TypeTags;
    
public:
    USBZBTTask_RaiseAlertness();

};

