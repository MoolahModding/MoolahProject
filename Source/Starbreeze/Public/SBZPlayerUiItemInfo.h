#pragma once
#include "CoreMinimal.h"
#include "ESBZItemProgressionSource.h"
#include "SBZPlayerUiItemInfo.generated.h"

class USBZInventoryBaseData;
class USBZSkillLineData;

USTRUCT(BlueprintType)
struct FSBZPlayerUiItemInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsAvailable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 InfamyLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZItemProgressionSource ItemProgressionSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZSkillLineData* SkillLineToUnlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZInventoryBaseData* InventoryBaseData;
    
    STARBREEZE_API FSBZPlayerUiItemInfo();
};

