#pragma once
#include "CoreMinimal.h"
#include "SBZObjectiveData.generated.h"

USTRUCT(BlueprintType)
struct FSBZObjectiveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString ObjectiveId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCompleted;
    
    STARBREEZE_API FSBZObjectiveData();
};

