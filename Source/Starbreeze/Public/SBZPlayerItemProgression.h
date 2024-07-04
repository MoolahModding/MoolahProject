#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZPlayerItemInfo.h"
#include "SBZPlayerItemProgression.generated.h"

UCLASS(Blueprintable)
class USBZPlayerItemProgression : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZPlayerItemInfo> OverkillWeaponInventoryItemArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZPlayerItemInfo> PlaceableInventoryItemArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZPlayerItemInfo> ToolInventoryItemArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZPlayerItemInfo> ArmorInventoryItemArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZPlayerItemInfo> ThrowableInventoryItemArray;
    
    USBZPlayerItemProgression();

};

