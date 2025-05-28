#pragma once
#include "CoreMinimal.h"
#include "SBZKilledContextData.generated.h"

class ASBZPlayerCharacter;
class USBZEquippableData;

USTRUCT(BlueprintType)
struct FSBZKilledContextData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerCharacter* PlayerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZEquippableData* EquippableData;
    
    STARBREEZE_API FSBZKilledContextData();
};

