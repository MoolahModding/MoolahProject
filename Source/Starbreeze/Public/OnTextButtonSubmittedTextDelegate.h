#pragma once
#include "CoreMinimal.h"
#include "OnTextButtonSubmittedTextDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTextButtonSubmittedText, FText, Text);

