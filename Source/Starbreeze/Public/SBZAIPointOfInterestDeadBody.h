#pragma once
#include "CoreMinimal.h"
#include "SBZAIPointOfInterest.h"
#include "SBZAIPointOfInterestDeadBody.generated.h"

class USBZLifeActionComponent;
class USBZLifeActionInstance;
class USBZLifeActionSlot;

UCLASS(Abstract, Blueprintable)
class ASBZAIPointOfInterestDeadBody : public ASBZAIPointOfInterest {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZLifeActionComponent* LifeActionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZLifeActionInstance* LifeActionInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZLifeActionSlot* LifeActionSlot;
    
public:
    ASBZAIPointOfInterestDeadBody();
};

