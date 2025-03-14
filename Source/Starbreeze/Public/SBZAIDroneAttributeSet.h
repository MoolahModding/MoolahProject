#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "SBZPawnAttributeSet.h"
#include "SBZAIDroneAttributeSet.generated.h"

UCLASS(Blueprintable)
class USBZAIDroneAttributeSet : public USBZPawnAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData AccuracyPenalty;
    
    USBZAIDroneAttributeSet();

};

