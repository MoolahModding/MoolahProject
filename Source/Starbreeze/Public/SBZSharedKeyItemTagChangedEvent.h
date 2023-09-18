#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZGameEventStructBase.h"
#include "SBZSharedKeyItemTagChangedEvent.generated.h"

class USBZKeyItemData;

USTRUCT(BlueprintType)
struct FSBZSharedKeyItemTagChangedEvent : public FSBZGameEventStructBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZKeyItemData* KeyItem;
    
    STARBREEZE_API FSBZSharedKeyItemTagChangedEvent();
};

