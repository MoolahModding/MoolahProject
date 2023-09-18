#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZLifeActionActorTagEvent.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSBZLifeActionActorTagEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EventTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHandleEventStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHandleEventEnd;
    
    STARBREEZE_API FSBZLifeActionActorTagEvent();
};

