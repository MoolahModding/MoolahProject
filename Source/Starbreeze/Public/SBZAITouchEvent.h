#pragma once
#include "CoreMinimal.h"
#include "SBZAITouchEvent.generated.h"

class AAIController;
class AActor;

USTRUCT(BlueprintType)
struct FSBZAITouchEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAIController* TouchReceiver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* OtherActor;
    
    STARBREEZE_API FSBZAITouchEvent();
};

