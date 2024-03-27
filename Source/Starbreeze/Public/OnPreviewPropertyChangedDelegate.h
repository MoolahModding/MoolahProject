#pragma once
#include "CoreMinimal.h"
#include "OnPreviewPropertyChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPreviewPropertyChanged, const FString&, ChangedProperty);

