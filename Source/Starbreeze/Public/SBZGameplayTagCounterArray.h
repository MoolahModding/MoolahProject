#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "SBZGameplayTagCounterArrayItem.h"
#include "SBZGameplayTagCounterArray.generated.h"

class ISBZGameplayTagCounterArrayOwnerInterface;
class USBZGameplayTagCounterArrayOwnerInterface;

USTRUCT(BlueprintType)
struct FSBZGameplayTagCounterArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TScriptInterface<ISBZGameplayTagCounterArrayOwnerInterface> Owner;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZGameplayTagCounterArrayItem> Items;
    
public:
    STARBREEZE_API FSBZGameplayTagCounterArray();
};

