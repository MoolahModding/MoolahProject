#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "SBZBTTask_PlayMontage.generated.h"

UCLASS(Blueprintable)
class USBZBTTask_PlayMontage : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MontageName;
    
public:
    USBZBTTask_PlayMontage();

};

