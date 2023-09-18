#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "SBZBTDecorator_Evade.h"
#include "SBZBTDecorator_ShieldCoverEvade.generated.h"

UCLASS(Blueprintable)
class USBZBTDecorator_ShieldCoverEvade : public USBZBTDecorator_Evade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector ShieldCoverBBKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldGoBack;
    
public:
    USBZBTDecorator_ShieldCoverEvade();

};

