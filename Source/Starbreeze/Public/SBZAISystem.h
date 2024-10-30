#pragma once
#include "CoreMinimal.h"
#include "AISystem.h"
#include "SBZAISystem.generated.h"

class USBZAirPathFinder;

UCLASS(Blueprintable)
class STARBREEZE_API USBZAISystem : public UAISystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZAirPathFinder* AirPathFinder;
    
public:
    USBZAISystem(const class FObjectInitializer& ObjectInitializer);

};

