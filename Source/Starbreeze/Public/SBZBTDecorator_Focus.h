#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_BlackboardBase.h"
#include "ESBZFocusPriority.h"
#include "SBZBTDecorator_Focus.generated.h"

UCLASS(Blueprintable)
class USBZBTDecorator_Focus : public UBTDecorator_BlackboardBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldLockFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZFocusPriority FocusPriority;
    
public:
    USBZBTDecorator_Focus();

};

