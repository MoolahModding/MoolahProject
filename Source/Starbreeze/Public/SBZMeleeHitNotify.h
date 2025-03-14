#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "ESBZMeleeHitType.h"
#include "SBZMeleeHitNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class USBZMeleeHitNotify : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZMeleeHitType HitType;
    
public:
    USBZMeleeHitNotify();

};

