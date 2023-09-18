#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ESBZCharacterStance.h"
#include "SBZTagStanceMapping.generated.h"

USTRUCT(BlueprintType)
struct FSBZTagStanceMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZCharacterStance Stance;
    
    STARBREEZE_API FSBZTagStanceMapping();
};

