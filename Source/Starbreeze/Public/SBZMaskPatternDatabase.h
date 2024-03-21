#pragma once
#include "CoreMinimal.h"
#include "SBZItemDatabase.h"
#include "SBZMaskPatternDatabase.generated.h"

class USBZMaskPatternData;

UCLASS(Blueprintable)
class USBZMaskPatternDatabase : public USBZItemDatabase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZMaskPatternData*> MaskPatternArray;
    
    USBZMaskPatternDatabase();
};

