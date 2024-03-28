#pragma once
#include "CoreMinimal.h"
#include "SBZItemDatabase.h"
#include "SBZSuitDatabase.generated.h"

class USBZSuitData;

UCLASS(Blueprintable)
class USBZSuitDatabase : public USBZItemDatabase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZSuitData*> Suits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZSuitData* CustomizableSuit;
    
    USBZSuitDatabase();
};

