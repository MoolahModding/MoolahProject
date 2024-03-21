#pragma once
#include "CoreMinimal.h"
#include "ESBZSuitPart.h"
#include "SBZMenuStackScreenWidget.h"
#include "SBZSuitInventorySlot.h"
#include "SBZMainMenuSuitCustomization.generated.h"

class USBZCosmeticsPartSlot;
class USBZModularPartDataAsset;

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuSuitCustomization : public USBZMenuStackScreenWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SuitSlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZSuitInventorySlot SuitSlot;
    
public:
    USBZMainMenuSuitCustomization();
    UFUNCTION(BlueprintCallable)
    USBZModularPartDataAsset* GetCosmeticItemInSlot(ESBZSuitPart SuitPart, const USBZCosmeticsPartSlot* InCosmeticPartSlot);
    
};

