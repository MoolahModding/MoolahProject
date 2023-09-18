#pragma once
#include "CoreMinimal.h"
#include "SBZMenuACSlots.h"
#include "SBZMenuACPerCharacterSlot.generated.h"

class UClass;

USTRUCT(BlueprintType)
struct FSBZMenuACPerCharacterSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<UClass>, FSBZMenuACSlots> Slots;
    
    STARBREEZE_API FSBZMenuACPerCharacterSlot();
};

