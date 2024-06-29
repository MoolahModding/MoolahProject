#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "ESBZHumanShieldEnterType.h"
#include "SBZHumanShieldEnterTypeNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class USBZHumanShieldEnterTypeNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZHumanShieldEnterType HumanShieldEnterType;
    
    USBZHumanShieldEnterTypeNotify();

};

