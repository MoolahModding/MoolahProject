#pragma once
#include "CoreMinimal.h"
#include "SBZThrowableConfig.generated.h"

class USBZThrowableData;

USTRUCT(BlueprintType)
struct FSBZThrowableConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZThrowableData* Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZThrowableData* OriginalData;
    
    STARBREEZE_API FSBZThrowableConfig();
};

