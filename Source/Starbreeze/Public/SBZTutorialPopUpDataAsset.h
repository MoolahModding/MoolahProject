#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBZTutorialPopUpDataAsset.generated.h"

class UPaperSprite;

UCLASS(Blueprintable)
class STARBREEZE_API USBZTutorialPopUpDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PopUpHeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TutorialDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperSprite* TutorialIcon;
    
    USBZTutorialPopUpDataAsset();

};

