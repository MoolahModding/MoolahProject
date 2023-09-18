#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_BlackboardBase.h"
#include "GameplayTagContainer.h"
#include "SBZBTDecorator_AddTags.generated.h"

UCLASS(Blueprintable)
class USBZBTDecorator_AddTags : public UBTDecorator_BlackboardBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TagsToAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> RemoveOnPauseReasons;
    
public:
    USBZBTDecorator_AddTags();

};

