#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PD3PlayerLoadout.h"
#include "SBZPlayerLoadoutAsset.generated.h"

UCLASS(Blueprintable)
class USBZPlayerLoadoutAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPD3PlayerLoadout Loadout;
    
    USBZPlayerLoadoutAsset();

};

