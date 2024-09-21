#pragma once
#include "CoreMinimal.h"
#include "SBZAIUtilityScorer.h"
#include "SBZAIUtilityScorer_DistanceToGrenade.generated.h"

class USBZGrenadeDetectionSettings;

UCLASS(Blueprintable, EditInlineNew)
class USBZAIUtilityScorer_DistanceToGrenade : public USBZAIUtilityScorer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZGrenadeDetectionSettings* DetectionSettings;
    
public:
    USBZAIUtilityScorer_DistanceToGrenade();

};

