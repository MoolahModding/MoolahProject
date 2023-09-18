#pragma once
#include "CoreMinimal.h"
#include "ArrayModelsDistributionReceiver.h"
#include "DArrayModelsDistributionReceiverResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDArrayModelsDistributionReceiverResponse, FArrayModelsDistributionReceiver, Response);

