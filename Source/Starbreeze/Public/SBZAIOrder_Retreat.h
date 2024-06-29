#pragma once
#include "CoreMinimal.h"
#include "SBZAISquadOrder.h"
#include "SBZAIOrder_Retreat.generated.h"

class USBZVoiceCommentDataAsset;

UCLASS(Blueprintable, EditInlineNew)
class USBZAIOrder_Retreat : public USBZAISquadOrder {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZVoiceCommentDataAsset* RetreatComment;
    
public:
    USBZAIOrder_Retreat();

};

