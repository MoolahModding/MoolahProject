#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "SBZDamageInstigatorInterface.h"
#include "SBZFactionIdHelper.h"
#include "SBZAIDroneController.generated.h"

UCLASS(Blueprintable)
class ASBZAIDroneController : public AAIController, public ISBZDamageInstigatorInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZFactionIdHelper Faction;
    
public:
    ASBZAIDroneController(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

