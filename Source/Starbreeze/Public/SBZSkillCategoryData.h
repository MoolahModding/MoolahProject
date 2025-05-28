#pragma once
#include "CoreMinimal.h"
#include "SBZInventoryBaseData.h"
#include "SBZSkillCategoryData.generated.h"

class USBZSkillTreeData;

UCLASS(Blueprintable)
class USBZSkillCategoryData : public USBZInventoryBaseData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZSkillTreeData*> SkillTreeArray;
    
    USBZSkillCategoryData();

};

