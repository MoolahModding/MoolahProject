#pragma once
#include "CoreMinimal.h"
#include "SBZMenuStackScreenWidget.h"
#include "SBZMainMenuMaskCustomization.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZMainMenuMaskCustomization : public USBZMenuStackScreenWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MaskSlotIndex;
    
public:
    USBZMainMenuMaskCustomization();
};

