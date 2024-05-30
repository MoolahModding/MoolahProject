#pragma once
#include "CoreMinimal.h"
#include "OnCurrentPageIndexChangedDelegate.generated.h"

class USBZCarouselWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCurrentPageIndexChanged, USBZCarouselWidget*, CarouselWidget, int32, CurrentPageIndex);

