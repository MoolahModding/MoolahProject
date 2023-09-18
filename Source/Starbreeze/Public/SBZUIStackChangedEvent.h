#pragma once
#include "CoreMinimal.h"
#include "SBZUIStackChangedEvent.generated.h"

USTRUCT(BlueprintType)
struct FSBZUIStackChangedEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NewValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OldValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasAddedEvent;
    
    STARBREEZE_API FSBZUIStackChangedEvent();
};

