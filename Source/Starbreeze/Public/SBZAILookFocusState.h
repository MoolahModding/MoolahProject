#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "SBZAILookFocusState.generated.h"

class USBZLookFocusData;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class STARBREEZE_API USBZAILookFocusState : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZLookFocusData* LookFocusData;
    
public:
    USBZAILookFocusState();

};

