#pragma once
#include "CoreMinimal.h"
#include "SBZAIActionData.h"
#include "SBZAIActionData_Investigate.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class USBZAIActionData_Investigate : public USBZAIActionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* InvestigateActor;
    
    USBZAIActionData_Investigate();

};

