#pragma once
#include "CoreMinimal.h"
#include "SBZAIOrderTargetArea.h"
#include "SBZAIProtectPoint.generated.h"

class USBZAISquad;

UCLASS(Abstract, Blueprintable)
class ASBZAIProtectPoint : public ASBZAIOrderTargetArea {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZAISquad* AssignedSquad;
    
public:
    ASBZAIProtectPoint();
};

