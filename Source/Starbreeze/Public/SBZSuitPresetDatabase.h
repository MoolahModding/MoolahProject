#pragma once
#include "CoreMinimal.h"
#include "SBZItemDatabase.h"
#include "SBZSuitPresetDatabase.generated.h"

class USBZSuitPresetData;

UCLASS(Blueprintable)
class USBZSuitPresetDatabase : public USBZItemDatabase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZSuitPresetData*> SuitPresets;
    
    USBZSuitPresetDatabase();

};

