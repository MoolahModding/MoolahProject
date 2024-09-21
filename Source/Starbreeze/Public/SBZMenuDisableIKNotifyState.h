#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "ESBZMenuDisableHandIkType.h"
#include "SBZMenuDisableIKNotifyState.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class USBZMenuDisableIKNotifyState : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZMenuDisableHandIkType DisableHandIkType;
    
public:
    USBZMenuDisableIKNotifyState();

};

