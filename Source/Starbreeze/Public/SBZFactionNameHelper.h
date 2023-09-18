#pragma once
#include "CoreMinimal.h"
#include "SBZFactionNameHelper.generated.h"

USTRUCT(BlueprintType)
struct FSBZFactionNameHelper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FactionName;
    
    STARBREEZE_API FSBZFactionNameHelper();
};

