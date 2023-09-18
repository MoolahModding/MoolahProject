#pragma once
#include "CoreMinimal.h"
#include "SBZHackableDisplayText.generated.h"

USTRUCT(BlueprintType)
struct FSBZHackableDisplayText {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Header;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ImportantInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText AdditionalText;
    
    STARBREEZE_API FSBZHackableDisplayText();
};

