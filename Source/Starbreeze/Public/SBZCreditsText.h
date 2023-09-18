#pragma once
#include "CoreMinimal.h"
#include "SBZCreditsText.generated.h"

USTRUCT(BlueprintType)
struct FSBZCreditsText {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString String;
    
    STARBREEZE_API FSBZCreditsText();
};

