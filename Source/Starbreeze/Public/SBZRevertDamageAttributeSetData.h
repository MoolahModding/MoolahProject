#pragma once
#include "CoreMinimal.h"
#include "SBZRevertDamageAttributeSetData.generated.h"

class APawn;

USTRUCT(BlueprintType)
struct FSBZRevertDamageAttributeSetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APawn* Pawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<uint8> ByteArray;
    
    STARBREEZE_API FSBZRevertDamageAttributeSetData();
};

