#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "SBZBTTask_RaiseAlarm.generated.h"

UCLASS(Blueprintable)
class USBZBTTask_RaiseAlarm : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RaiseAlarmTime;
    
public:
    USBZBTTask_RaiseAlarm();

};

