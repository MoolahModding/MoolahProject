#pragma once
#include "CoreMinimal.h"
#include "SBZModularPartSlotConfiguration.generated.h"

class USBZModularPartDataAsset;
class USBZSharedPartList;

USTRUCT(BlueprintType)
struct FSBZModularPartSlotConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZModularPartDataAsset* DefaultPart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZModularPartDataAsset*> UniqueModParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZSharedPartList*> SharedParts;
    
    STARBREEZE_API FSBZModularPartSlotConfiguration();
};

