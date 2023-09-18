#pragma once
#include "CoreMinimal.h"
#include "TOPWorkResultObject.h"
#include "TOPWorkResult.generated.h"

USTRUCT(BlueprintType)
struct HOUDINIENGINERUNTIME_API FTOPWorkResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonTransactional, meta=(AllowPrivateAccess=true))
    int32 WorkItemIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 WorkItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonTransactional, meta=(AllowPrivateAccess=true))
    TArray<FTOPWorkResultObject> ResultObjects;
    
    FTOPWorkResult();
};

