#pragma once
#include "CoreMinimal.h"
#include "SBZInteractReqData.generated.h"

USTRUCT(BlueprintType)
struct FSBZInteractReqData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> FailTextArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> SuccessTextOverrideArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> IsHiddenFailArray;
    
    STARBREEZE_API FSBZInteractReqData();
};

