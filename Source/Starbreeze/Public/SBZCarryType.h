#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBZControlsReference.h"
#include "SBZCarryType.generated.h"

class UPaperSprite;

UCLASS(Blueprintable)
class USBZCarryType : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CarryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperSprite* CarryIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZControlsReference ControlsReference;
    
    USBZCarryType();

};

