#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ESBZLifeActionAlignmentMode.h"
#include "SBZBTTask_AlignWithLifeAction.generated.h"

UCLASS(Blueprintable)
class USBZBTTask_AlignWithLifeAction : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAlignmentDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitDurationFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZLifeActionAlignmentMode AlignmentMode;
    
public:
    USBZBTTask_AlignWithLifeAction();

};

