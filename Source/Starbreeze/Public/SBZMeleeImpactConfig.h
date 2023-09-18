#pragma once
#include "CoreMinimal.h"
#include "ESBZMeleeImpactType.h"
#include "SBZImpactConfig.h"
#include "SBZMeleeImpactData.h"
#include "SBZMeleeImpactConfig.generated.h"

class UClass;

UCLASS(Blueprintable)
class USBZMeleeImpactConfig : public USBZImpactConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZMeleeImpactType, FSBZMeleeImpactData> MeleeWeaponTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ImpactFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZMeleeImpactType, UClass*> MeleeTypeFeedbackOverride;
    
    USBZMeleeImpactConfig();

};

