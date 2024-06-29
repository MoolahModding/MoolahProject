#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "SBZSendAIMessageNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class USBZSendAIMessageNotify : public UAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AIMessage;
    
public:
    USBZSendAIMessageNotify();

};

