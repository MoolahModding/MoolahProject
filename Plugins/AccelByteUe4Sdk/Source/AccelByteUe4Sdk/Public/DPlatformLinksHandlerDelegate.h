#pragma once
#include "CoreMinimal.h"
#include "PagedPlatformLinks.h"
#include "DPlatformLinksHandlerDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDPlatformLinksHandler, const FPagedPlatformLinks&, PlatformLinks);

