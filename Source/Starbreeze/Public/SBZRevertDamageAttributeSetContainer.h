#pragma once
#include "CoreMinimal.h"
#include "SBZRevertDamageAttributeSetData.h"
#include "SBZRevertDamageAttributeSetContainer.generated.h"

USTRUCT(BlueprintType)
struct FSBZRevertDamageAttributeSetContainer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZRevertDamageAttributeSetData> AttributeSetDataArray;
    
public:
    STARBREEZE_API FSBZRevertDamageAttributeSetContainer();
};

