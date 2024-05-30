#pragma once
#include "CoreMinimal.h"
#include "SBZAIActionData.h"
#include "SBZAIActionData_SetHostile.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class USBZAIActionData_SetHostile : public USBZAIActionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Hostile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldCheckSightPerception;
    
    USBZAIActionData_SetHostile();

};

