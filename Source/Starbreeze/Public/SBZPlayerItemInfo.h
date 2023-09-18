#pragma once
#include "CoreMinimal.h"
#include "ESBZItemProgressionSource.h"
#include "SBZPlayerItemInfo.generated.h"

class USBZInventoryBaseData;
class USBZSkillLineData;

USTRUCT(BlueprintType)
struct FSBZPlayerItemInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZItemProgressionSource ItemProgressionSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 InfamyLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZSkillLineData* SkillLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZInventoryBaseData* InventoryBaseData;
    
    STARBREEZE_API FSBZPlayerItemInfo();
};

