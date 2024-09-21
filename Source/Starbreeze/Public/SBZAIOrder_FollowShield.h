#pragma once
#include "CoreMinimal.h"
#include "SBZAIOrder.h"
#include "SBZAIOrder_FollowShield.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZAIOrder_FollowShield : public USBZAIOrder {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AvoidanceOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrictionOverride;
    
public:
    USBZAIOrder_FollowShield();

};

