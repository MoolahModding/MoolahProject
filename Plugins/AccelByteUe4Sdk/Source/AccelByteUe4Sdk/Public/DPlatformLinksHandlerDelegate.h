#pragma once
#include "CoreMinimal.h"
#include "PagedPlatformLinks.h"
#include "DPlatformLinksHandlerDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FDPlatformLinksHandler, const FPagedPlatformLinks&, PlatformLinks);

