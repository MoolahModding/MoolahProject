#pragma once
#include "CoreMinimal.h"
#include "SBZRangedWeapon.h"
#include "SBZAITaserWeapon.generated.h"

class USBZVoiceCommentDataAsset;

UCLASS(Abstract, Blueprintable)
class ASBZAITaserWeapon : public ASBZRangedWeapon {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZVoiceCommentDataAsset* TasingComment;
    
public:
    ASBZAITaserWeapon(const FObjectInitializer& ObjectInitializer);

};

