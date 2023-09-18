#pragma once
#include "CoreMinimal.h"
#include "SBZWeaponPatternAreaPart.h"
#include "SBZWeaponPatternAreaDefinition.generated.h"

USTRUCT(BlueprintType)
struct FSBZWeaponPatternAreaDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZWeaponPatternAreaPart> PartsInArea;
    
    STARBREEZE_API FSBZWeaponPatternAreaDefinition();
};

