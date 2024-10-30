#pragma once
#include "CoreMinimal.h"
#include "SBZFetchStatItemsValueQuery.generated.h"

class ISBZLazyObject;
class USBZLazyObject;

USTRUCT(BlueprintType)
struct FSBZFetchStatItemsValueQuery {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TScriptInterface<ISBZLazyObject> Object;
    
    STARBREEZE_API FSBZFetchStatItemsValueQuery();
};

