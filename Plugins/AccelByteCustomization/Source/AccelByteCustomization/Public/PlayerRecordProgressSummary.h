#pragma once
#include "CoreMinimal.h"
#include "PlayerRecordProgressSummary.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTECUSTOMIZATION_API FPlayerRecordProgressSummary {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Total;
    
    FPlayerRecordProgressSummary();
};

