#pragma once
#include "CoreMinimal.h"
#include "SBZItemProvidedBySkill.generated.h"

class USBZInventoryBaseData;
class USBZSkillLine;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZItemProvidedBySkill {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAvailable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZSkillLine* SkillLineToUnlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZInventoryBaseData* InventoryBaseData;
    
    FSBZItemProvidedBySkill();
};

