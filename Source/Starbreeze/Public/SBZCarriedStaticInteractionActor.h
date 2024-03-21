#pragma once
#include "CoreMinimal.h"
#include "SBZDynamicInteractionActor.h"
#include "SBZCarriedStaticInteractionActor.generated.h"

class ASBZAICharacter;

UCLASS(Blueprintable)
class ASBZCarriedStaticInteractionActor : public ASBZDynamicInteractionActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZAICharacter* AttachedAIParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSingleUse;
    
public:
    ASBZCarriedStaticInteractionActor();
};

