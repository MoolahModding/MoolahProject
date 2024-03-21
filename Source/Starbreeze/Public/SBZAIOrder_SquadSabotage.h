#pragma once
#include "CoreMinimal.h"
#include "SBZAIOrder_TacticalMoveTo.h"
#include "SBZAIOrder_SquadSabotage.generated.h"

class APawn;

UCLASS(Blueprintable, EditInlineNew)
class USBZAIOrder_SquadSabotage : public USBZAIOrder_TacticalMoveTo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APawn> SabotagingMember;
    
public:
    USBZAIOrder_SquadSabotage();
};

