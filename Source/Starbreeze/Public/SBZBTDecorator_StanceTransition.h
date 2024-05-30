#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "SBZBTDecorator_StanceTransition.generated.h"

UCLASS(Blueprintable)
class USBZBTDecorator_StanceTransition : public UBTDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableStanceTransition;
    
public:
    USBZBTDecorator_StanceTransition();

};

