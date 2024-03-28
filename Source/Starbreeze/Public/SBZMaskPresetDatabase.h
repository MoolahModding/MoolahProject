#pragma once
#include "CoreMinimal.h"
#include "SBZItemDatabase.h"
#include "SBZMaskPresetDatabase.generated.h"

class USBZMaskData;

UCLASS(Blueprintable)
class USBZMaskPresetDatabase : public USBZItemDatabase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZMaskData*> MaskPresetArray;
    
    USBZMaskPresetDatabase();
};

