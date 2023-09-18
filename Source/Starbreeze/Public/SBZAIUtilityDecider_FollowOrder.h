#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZAIUtilityDecider.h"
#include "SBZAIUtilityDecider_FollowOrder.generated.h"

class USBZAIOrder;

UCLASS(Blueprintable, EditInlineNew)
class USBZAIUtilityDecider_FollowOrder : public USBZAIUtilityDecider {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZAIOrder* CurrentOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZAIOrder* NewOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTag InjectionTag;
    
public:
    USBZAIUtilityDecider_FollowOrder();

};

