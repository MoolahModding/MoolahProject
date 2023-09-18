#pragma once
#include "CoreMinimal.h"
#include "SBZEquippablePartConfigGroup.h"
#include "SBZEquippableConfig.generated.h"

class USBZEquippableData;
class USBZEquippablePartDataAsset;
class USBZModularPartSlotBase;

USTRUCT(BlueprintType)
struct FSBZEquippableConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZEquippableData* EquippableData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZEquippableData* OriginalEquippableData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZEquippablePartDataAsset*> ModDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    TMap<USBZModularPartSlotBase*, FSBZEquippablePartConfigGroup> ModDataMap;
    
    STARBREEZE_API FSBZEquippableConfig();
};

