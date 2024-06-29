#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "SBZCrouchNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class USBZCrouchNotify : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCrouched;
    
public:
    USBZCrouchNotify();

};

