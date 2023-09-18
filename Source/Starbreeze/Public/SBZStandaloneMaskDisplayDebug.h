#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "SBZMaskPartConfigGroup.h"
#include "SBZStandaloneMaskDisplayDebug.generated.h"

class ASBZMask;
class USBZMaskPreconfigData;
class USBZModularPartSlotBase;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZStandaloneMaskDisplayDebug : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZMaskPreconfigData* UserMaskData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<USBZModularPartSlotBase*, FSBZMaskPartConfigGroup> ModDataMap;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform SpawnTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZMask* SpawnedMask;
    
public:
    ASBZStandaloneMaskDisplayDebug(const FObjectInitializer& ObjectInitializer);

};

