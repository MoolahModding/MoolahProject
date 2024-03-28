#pragma once
#include "CoreMinimal.h"
#include "SBZAIActionData.h"
#include "SBZAIActionData_Patrol.generated.h"

class ASBZPatrolPoint;

UCLASS(Blueprintable, EditInlineNew)
class USBZAIActionData_Patrol : public USBZAIActionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZPatrolPoint* PatrolPoint;
    
    USBZAIActionData_Patrol();
};

