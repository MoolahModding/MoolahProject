#pragma once
#include "CoreMinimal.h"
#include "SBZLocationInformation.generated.h"

USTRUCT(BlueprintType)
struct FSBZLocationInformation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MainInformation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SecondaryInformation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText AdditionalInformation;
    
    STARBREEZE_API FSBZLocationInformation();
};

