#pragma once
#include "CoreMinimal.h"
#include "PD3ModifiableLoadoutData.generated.h"

class USBZToolData;

USTRUCT(BlueprintType)
struct STARBREEZE_API FPD3ModifiableLoadoutData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZToolData* ToolData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    USBZToolData* ModifiedToolData;
    
    FPD3ModifiableLoadoutData();
};

