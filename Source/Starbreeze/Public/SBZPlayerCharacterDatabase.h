#pragma once
#include "CoreMinimal.h"
#include "SBZItemDatabase.h"
#include "SBZPlayerCharacterDatabase.generated.h"

class USBZPlayerCharacterData;

UCLASS(Blueprintable)
class USBZPlayerCharacterDatabase : public USBZItemDatabase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZPlayerCharacterData*> PlayerCharacterArray;
    
    USBZPlayerCharacterDatabase();
};

