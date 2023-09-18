#pragma once
#include "CoreMinimal.h"
#include "SBZAIUtilityScorer.h"
#include "SBZAIUtilityScorer_HasBBValue.generated.h"

class UClass;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZAIUtilityScorer_HasBBValue : public USBZAIUtilityScorer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* KeyType;
    
public:
    USBZAIUtilityScorer_HasBBValue();

};

