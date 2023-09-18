#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZAIOrder.h"
#include "SBZAIOrder_ReleaseHostage.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZAIOrder_ReleaseHostage : public USBZAIOrder {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DespawnTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasTraded;
    
public:
    USBZAIOrder_ReleaseHostage();

};

