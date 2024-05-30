#pragma once
#include "CoreMinimal.h"
#include "SBZItemDatabase.h"
#include "SBZGloveDatabase.generated.h"

class USBZGloveData;

UCLASS(Blueprintable)
class USBZGloveDatabase : public USBZItemDatabase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZGloveData*> Gloves;
    
    USBZGloveDatabase();

};

