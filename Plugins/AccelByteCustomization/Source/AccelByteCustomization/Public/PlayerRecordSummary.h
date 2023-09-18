#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPaging.h"
#include "PlayerRecordSummaryData.h"
#include "PlayerRecordSummary.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTECUSTOMIZATION_API FPlayerRecordSummary {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlayerRecordSummaryData> Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccelByteModelsPaging Paging;
    
    FPlayerRecordSummary();
};

