#pragma once
#include "CoreMinimal.h"
#include "ESBZArmorChunkType.h"
#include "SBZArmorConfig.generated.h"

class USBZArmorData;

USTRUCT(BlueprintType)
struct FSBZArmorConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZArmorData* Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZArmorData* OriginalData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESBZArmorChunkType> ChunkTypeArray;
    
    STARBREEZE_API FSBZArmorConfig();
};

