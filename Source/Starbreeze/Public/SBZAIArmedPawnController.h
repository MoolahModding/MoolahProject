#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "SBZFactionIdHelper.h"
#include "SBZAIArmedPawnController.generated.h"

UCLASS(Blueprintable)
class ASBZAIArmedPawnController : public AAIController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZFactionIdHelper Faction;
    
public:
    ASBZAIArmedPawnController(const FObjectInitializer& ObjectInitializer);

};

