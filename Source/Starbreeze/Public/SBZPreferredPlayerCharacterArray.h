#pragma once
#include "CoreMinimal.h"
#include "SBZPreferredPlayerCharacterArray.generated.h"

class USBZPlayerCharacterData;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZPreferredPlayerCharacterArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZPlayerCharacterData*> PlayerPreferredCharacterArray;
    
    FSBZPreferredPlayerCharacterArray();
};

