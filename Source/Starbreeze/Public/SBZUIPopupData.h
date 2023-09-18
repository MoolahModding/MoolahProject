#pragma once
#include "CoreMinimal.h"
#include "SBZButtonControlsReference.h"
#include "SBZUIPopupData.generated.h"

class UUserWidget;

USTRUCT(BlueprintType)
struct FSBZUIPopupData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText HeaderText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DescriptionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZButtonControlsReference PopUpControlsReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* WidgetBody;
    
    STARBREEZE_API FSBZUIPopupData();
};

