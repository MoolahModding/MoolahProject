#pragma once
#include "CoreMinimal.h"
#include "SBZAIUtilityScorer.h"
#include "Templates/SubclassOf.h"
#include "SBZAIUtilityScorer_HasBBValue.generated.h"

class UBlackboardKeyType;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZAIUtilityScorer_HasBBValue : public USBZAIUtilityScorer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBlackboardKeyType> KeyType;
    
public:
    USBZAIUtilityScorer_HasBBValue();

};

