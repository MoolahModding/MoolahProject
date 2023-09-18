#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBZVantagePoint.generated.h"

class APawn;

UCLASS(Abstract, Blueprintable)
class STARBREEZE_API ASBZVantagePoint : public AActor {
    GENERATED_BODY()
public:
    ASBZVantagePoint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnOccupantKilled(APawn* Pawn);
    
};

