#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_BlackboardBase.h"
#include "SBZBTDecorator_CheckCoverSafeness.generated.h"

UCLASS(Blueprintable)
class USBZBTDecorator_CheckCoverSafeness : public UBTDecorator_BlackboardBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 MinSafenessScore;
    
public:
    USBZBTDecorator_CheckCoverSafeness();

};

