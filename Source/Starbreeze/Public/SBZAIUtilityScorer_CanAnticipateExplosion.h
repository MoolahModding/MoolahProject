#pragma once
#include "CoreMinimal.h"
#include "SBZAIUtilityScorer.h"
#include "SBZAIUtilityScorer_CanAnticipateExplosion.generated.h"

class USBZGrenadeDetectionSettings;

UCLASS(Blueprintable, EditInlineNew)
class USBZAIUtilityScorer_CanAnticipateExplosion : public USBZAIUtilityScorer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TriggerChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZGrenadeDetectionSettings* DetectionSettings;
    
public:
    USBZAIUtilityScorer_CanAnticipateExplosion();

};

