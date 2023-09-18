#pragma once
#include "CoreMinimal.h"
#include "SBZArmorVariationInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBZArmorVariationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Bit;
    
    STARBREEZE_API FSBZArmorVariationInfo();
};

