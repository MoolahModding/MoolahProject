#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "SBZBTService_UpdateCriminal.generated.h"

UCLASS(Blueprintable)
class USBZBTService_UpdateCriminal : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector CurrentCriminalBBKey;
    
public:
    USBZBTService_UpdateCriminal();

};

