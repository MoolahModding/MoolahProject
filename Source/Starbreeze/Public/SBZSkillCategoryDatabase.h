#pragma once
#include "CoreMinimal.h"
#include "SBZItemDatabase.h"
#include "SBZSkillCategoryDatabase.generated.h"

class USBZSkillCategoryData;

UCLASS(Blueprintable)
class USBZSkillCategoryDatabase : public USBZItemDatabase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZSkillCategoryData*> SkillCategoryArray;
    
    USBZSkillCategoryDatabase();

};

