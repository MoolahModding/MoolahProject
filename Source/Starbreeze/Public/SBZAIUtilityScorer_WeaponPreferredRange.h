#pragma once
#include "CoreMinimal.h"
#include "SBZAIUtilityScorer.h"
#include "SBZAIUtilityScorer_WeaponPreferredRange.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZAIUtilityScorer_WeaponPreferredRange : public USBZAIUtilityScorer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdditionalRange;
    
    USBZAIUtilityScorer_WeaponPreferredRange();

};

