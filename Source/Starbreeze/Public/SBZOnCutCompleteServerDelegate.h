#pragma once
#include "CoreMinimal.h"
#include "SBZOnCutCompleteServerDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZOnCutCompleteServer, AActor*, CuttableActor);

