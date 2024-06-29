#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "SBZDisablePlayerHandRigTransform.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class USBZDisablePlayerHandRigTransform : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DisabledHandRigTransformFlags;
    
public:
    USBZDisablePlayerHandRigTransform();

};

