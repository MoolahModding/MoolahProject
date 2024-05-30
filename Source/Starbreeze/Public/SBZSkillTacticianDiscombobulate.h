#pragma once
#include "CoreMinimal.h"
#include "SBZSkillData.h"
#include "Templates/SubclassOf.h"
#include "SBZSkillTacticianDiscombobulate.generated.h"

class USBZTacticianDiscombobulateEffect;

UCLASS(Blueprintable)
class USBZSkillTacticianDiscombobulate : public USBZSkillData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZTacticianDiscombobulateEffect> PostSmokeFlashEffect;
    
    USBZSkillTacticianDiscombobulate();

};

