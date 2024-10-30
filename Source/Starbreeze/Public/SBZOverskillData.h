#pragma once
#include "CoreMinimal.h"
#include "SBZInventoryBaseData.h"
#include "SBZOverskillData.generated.h"

class USBZSkillData;

UCLASS(Blueprintable)
class USBZOverskillData : public USBZInventoryBaseData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ProgressLevelID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZSkillData*> SkillArray;
    
    USBZOverskillData();

};

