#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "ESBZDisableHandIkType.h"
#include "SBZDisableIKNotifyState.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class USBZDisableIKNotifyState : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZDisableHandIkType DisableHandIkType;
    
public:
    USBZDisableIKNotifyState();

};

