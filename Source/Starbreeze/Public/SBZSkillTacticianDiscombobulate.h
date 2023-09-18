#pragma once
#include "CoreMinimal.h"
#include "SBZSkillData.h"
#include "SBZSkillTacticianDiscombobulate.generated.h"

class UClass;

UCLASS(Blueprintable)
class USBZSkillTacticianDiscombobulate : public USBZSkillData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* PostSmokeFlashEffect;
    
    USBZSkillTacticianDiscombobulate();

};

