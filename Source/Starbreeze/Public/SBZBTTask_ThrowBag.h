#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "SBZBTTask_ThrowBag.generated.h"

UCLASS(Blueprintable)
class USBZBTTask_ThrowBag : public UBTTaskNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldForceDrop;
    
public:
    USBZBTTask_ThrowBag();

};

