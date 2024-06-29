#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "ESBZCharacterStance.h"
#include "SBZSetCharacterStanceNofity.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class USBZSetCharacterStanceNofity : public UAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZCharacterStance Stance;
    
public:
    USBZSetCharacterStanceNofity();

};

