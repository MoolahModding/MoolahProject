#pragma once
#include "CoreMinimal.h"
#include "SBZRevertDamageAttributeSetData.generated.h"

class ASBZCharacter;

USTRUCT(BlueprintType)
struct FSBZRevertDamageAttributeSetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<uint8> ByteArray;
    
    STARBREEZE_API FSBZRevertDamageAttributeSetData();
};

