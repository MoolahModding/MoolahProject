#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "SBZDropPlaceableEquippableNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class USBZDropPlaceableEquippableNotify : public UAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInstant;
    
public:
    USBZDropPlaceableEquippableNotify();

};

