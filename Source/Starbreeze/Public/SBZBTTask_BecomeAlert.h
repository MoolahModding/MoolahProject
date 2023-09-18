#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "EPD3DispatchCallerReason.h"
#include "SBZBTTask_BecomeAlert.generated.h"

UCLASS(Blueprintable)
class USBZBTTask_BecomeAlert : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPD3DispatchCallerReason Reason;
    
public:
    USBZBTTask_BecomeAlert();

};

