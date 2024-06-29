#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBZKeyItemData.generated.h"

class UPaperSprite;

UCLASS(Blueprintable)
class USBZKeyItemData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText KeyItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperSprite* KeyItemIcon;
    
    USBZKeyItemData();

};

