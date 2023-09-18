#pragma once
#include "CoreMinimal.h"
#include "SBZDefeatStateChangedData.h"
#include "SBZAICrewDefeatStateChangedData.generated.h"

class ASBZAICrewState;

USTRUCT(BlueprintType)
struct FSBZAICrewDefeatStateChangedData : public FSBZDefeatStateChangedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZAICrewState* AICrewState;
    
    STARBREEZE_API FSBZAICrewDefeatStateChangedData();
};

