#pragma once
#include "CoreMinimal.h"
#include "SBZSkillTreePair.generated.h"

class USBZSkillData;

USTRUCT(BlueprintType)
struct FSBZSkillTreePair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZSkillData* Base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZSkillData* Aced;
    
    STARBREEZE_API FSBZSkillTreePair();
};

