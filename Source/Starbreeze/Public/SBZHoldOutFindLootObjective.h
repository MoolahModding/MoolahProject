#pragma once
#include "CoreMinimal.h"
#include "SBZBagHandle.h"
#include "SBZHoldOutObjectiveBase.h"
#include "SBZHoldOutFindLootObjective.generated.h"

class ASBZBagItem;
class ASBZBagTriggerVolume;
class ASBZHoldOutLootContainer;
class USBZBagType;

UCLASS(Blueprintable, EditInlineNew)
class USBZHoldOutFindLootObjective : public USBZHoldOutObjectiveBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASBZHoldOutLootContainer*> LootContainers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZBagTriggerVolume* BagTriggerVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZBagType* RequiredBagType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumLootToCollect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumActiveLootContainer;
    
public:
    USBZHoldOutFindLootObjective();

    UFUNCTION(BlueprintCallable)
    void OnBagEntered(ASBZBagTriggerVolume* Volume, ASBZBagItem* BagItem, FSBZBagHandle BagHandle);
    
};

