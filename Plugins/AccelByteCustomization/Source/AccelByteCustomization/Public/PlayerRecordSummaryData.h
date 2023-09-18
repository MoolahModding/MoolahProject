#pragma once
#include "CoreMinimal.h"
#include "PlayerRecordProgressSummary.h"
#include "PlayerRecordSummaryData.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTECUSTOMIZATION_API FPlayerRecordSummaryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Namespace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Total;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlayerRecordProgressSummary> ProgressSummary;
    
    FPlayerRecordSummaryData();
};

