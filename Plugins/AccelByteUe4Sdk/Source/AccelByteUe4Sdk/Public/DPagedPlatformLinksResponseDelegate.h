#pragma once
#include "CoreMinimal.h"
#include "PagedPlatformLinks.h"
#include "DPagedPlatformLinksResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDPagedPlatformLinksResponse, FPagedPlatformLinks, Response);

