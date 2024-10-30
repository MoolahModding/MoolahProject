#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "SBZDisableAgentBrainNotifyState.generated.h"

class UAISense;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class USBZDisableAgentBrainNotifyState : public UAnimNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldDisablePerception;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UAISense>> DisabledSenses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TagFilter;
    
public:
    USBZDisableAgentBrainNotifyState();

};

