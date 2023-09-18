#pragma once
#include "CoreMinimal.h"
#include "ESBZNegotiationTradeType.h"
#include "PD3NegotiationTradeTypeChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPD3NegotiationTradeTypeChanged, ESBZNegotiationTradeType, OldType, ESBZNegotiationTradeType, NewType);

