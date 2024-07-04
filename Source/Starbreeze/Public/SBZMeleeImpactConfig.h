#pragma once
#include "CoreMinimal.h"
#include "ESBZMeleeImpactType.h"
#include "SBZImpactConfig.h"
#include "SBZMeleeImpactData.h"
#include "Templates/SubclassOf.h"
#include "SBZMeleeImpactConfig.generated.h"

class USBZLocalPlayerFeedback;

UCLASS(Blueprintable)
class USBZMeleeImpactConfig : public USBZImpactConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZMeleeImpactType, FSBZMeleeImpactData> MeleeWeaponTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZLocalPlayerFeedback> ImpactFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZMeleeImpactType, TSubclassOf<USBZLocalPlayerFeedback>> MeleeTypeFeedbackOverride;
    
    USBZMeleeImpactConfig();

};

