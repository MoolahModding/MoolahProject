#pragma once
#include "CoreMinimal.h"
#include "SBZViewTargetCollectionChangedDelegateDelegate.generated.h"

class ASBZPlayerController;
class ISBZViewTargetCollectionInterface;
class USBZViewTargetCollectionInterface;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBZViewTargetCollectionChangedDelegate, ASBZPlayerController*, PlayerController, const TScriptInterface<ISBZViewTargetCollectionInterface>&, ViewTargetCollection);

