#pragma once
#include "CoreMinimal.h"
#include "SBZAIUtilityScorer.h"
#include "SBZAIUtilityScorer_CanEquipAtIndex.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZAIUtilityScorer_CanEquipAtIndex : public USBZAIUtilityScorer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
public:
    USBZAIUtilityScorer_CanEquipAtIndex();
};

