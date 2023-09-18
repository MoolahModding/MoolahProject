#pragma once
#include "CoreMinimal.h"
#include "SBZGameEventStructBase.h"
#include "SBZPlayerInEscapeChangedEvent.generated.h"

USTRUCT(BlueprintType)
struct FSBZPlayerInEscapeChangedEvent : public FSBZGameEventStructBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Inside;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Total;
    
    STARBREEZE_API FSBZPlayerInEscapeChangedEvent();
};

