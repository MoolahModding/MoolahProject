#pragma once
#include "CoreMinimal.h"
#include "SBZWeaponPatternAreaPart.generated.h"

USTRUCT(BlueprintType)
struct FSBZWeaponPatternAreaPart {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 PartIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncludeFullPart;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int8> SubPartIndexes;
    
    STARBREEZE_API FSBZWeaponPatternAreaPart();
};

