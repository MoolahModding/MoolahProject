#pragma once
#include "CoreMinimal.h"
#include "AISubsystem.h"
#include "SBZAirPathFinder.generated.h"

class ASBZAirNavigation;

UCLASS(Blueprintable)
class USBZAirPathFinder : public UAISubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZAirNavigation* NavigationData;
    
public:
    USBZAirPathFinder();

};

