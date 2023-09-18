#pragma once
#include "CoreMinimal.h"
#include "SBZInternetStatusWidget.h"
#include "SBZLoadingWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZLoadingWidgetBase : public USBZInternetStatusWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldRemoveOnLevelChange;
    
public:
    USBZLoadingWidgetBase();

};

