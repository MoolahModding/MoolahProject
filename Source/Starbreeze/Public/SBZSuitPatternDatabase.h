#pragma once
#include "CoreMinimal.h"
#include "SBZItemDatabase.h"
#include "SBZSuitPatternDatabase.generated.h"

class USBZSuitPatternData;

UCLASS(Blueprintable)
class USBZSuitPatternDatabase : public USBZItemDatabase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZSuitPatternData*> SuitPatternArray;
    
    USBZSuitPatternDatabase();

};

