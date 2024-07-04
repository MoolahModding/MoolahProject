#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "SBZBTService_UpdateSuspect.generated.h"

UCLASS(Blueprintable)
class USBZBTService_UpdateSuspect : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector CurrentSuspectBBKey;
    
public:
    USBZBTService_UpdateSuspect();

};

