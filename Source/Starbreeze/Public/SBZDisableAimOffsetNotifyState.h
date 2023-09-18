#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "ESBZDisabledAimOffsetType.h"
#include "SBZDisableAimOffsetNotifyState.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class STARBREEZE_API USBZDisableAimOffsetNotifyState : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZDisabledAimOffsetType DisableAimOffsetType;
    
public:
    USBZDisableAimOffsetNotifyState();

};

