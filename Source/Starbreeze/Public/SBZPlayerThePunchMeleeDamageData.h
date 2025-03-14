#pragma once
#include "CoreMinimal.h"
#include "SBZMeleeHitBoxData.h"
#include "SBZPlayerMeleeDamageData.h"
#include "Templates/SubclassOf.h"
#include "SBZPlayerThePunchMeleeDamageData.generated.h"

class USBZDamageType;
class USBZLocalPlayerFeedback;

UCLASS(Blueprintable)
class USBZPlayerThePunchMeleeDamageData : public USBZPlayerMeleeDamageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeavyHealthDamage;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZLocalPlayerFeedback> ThePunchHeavyChargeCameraFeedback[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZLocalPlayerFeedback> LightHitCameraShakeFeedbackArray[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZLocalPlayerFeedback> HeavyHitCameraShakeFeedbackArray[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZMeleeHitBoxData HeavyHitBoxData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZDamageType> HeavyDamageTypeClass;
    
    USBZPlayerThePunchMeleeDamageData();

};

