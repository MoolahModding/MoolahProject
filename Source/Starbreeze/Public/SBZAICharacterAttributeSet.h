#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "SBZCharacterAttributeSet.h"
#include "SBZAICharacterAttributeSet.generated.h"

UCLASS(Blueprintable)
class USBZAICharacterAttributeSet : public USBZCharacterAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData AccuracyPenalty;
    
    USBZAICharacterAttributeSet();

};

