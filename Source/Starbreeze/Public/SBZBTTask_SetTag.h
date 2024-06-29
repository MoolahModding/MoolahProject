#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "GameplayTagContainer.h"
#include "SBZBTTask_SetTag.generated.h"

UCLASS(Blueprintable)
class USBZBTTask_SetTag : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TagsToSet;
    
public:
    USBZBTTask_SetTag();

};

