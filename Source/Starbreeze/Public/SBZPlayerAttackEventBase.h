#pragma once
#include "CoreMinimal.h"
#include "SBZWorldEventBase.h"
#include "SBZPlayerAttackEventBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZPlayerAttackEventBase : public USBZWorldEventBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTimeSinceAttack;
    
public:
    USBZPlayerAttackEventBase();
};

