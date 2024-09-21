#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_BlackboardBase.h"
#include "SBZBTDecorator_Crew_CheckCoverSafeness.generated.h"

UCLASS(Blueprintable)
class USBZBTDecorator_Crew_CheckCoverSafeness : public UBTDecorator_BlackboardBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 MinSafenessScore;
    
public:
    USBZBTDecorator_Crew_CheckCoverSafeness();

};

