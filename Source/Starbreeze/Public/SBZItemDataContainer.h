#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESBZItemCategory.h"
#include "SBZItemDataContainer.generated.h"

class USBZInventoryBaseData;

UCLASS(Blueprintable)
class STARBREEZE_API USBZItemDataContainer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZItemCategory ItemCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZInventoryBaseData* InventoryBaseData;
    
    USBZItemDataContainer();

};

