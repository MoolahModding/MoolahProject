#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "ESBZAIBehaviorCategory.h"
#include "SBZAIUtilityDecider.generated.h"

class ASBZAIController;
class UBehaviorTree;
class USBZAIUtilityScorer;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class USBZAIUtilityDecider : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USBZAIUtilityScorer*> Scorers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USBZAIUtilityScorer*> AlternativeScorers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USBZAIUtilityScorer*> Bonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USBZAIUtilityScorer*> Modifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* Behavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZAIBehaviorCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZAIController* AIController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TagsToAddOnActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxUtility;
    
public:
    USBZAIUtilityDecider();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSelectedBP();
    
    UFUNCTION(BlueprintCallable)
    void OnSelected();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReselectedBP();
    
    UFUNCTION(BlueprintCallable)
    void OnReselected();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeselectedBP();
    
    UFUNCTION(BlueprintCallable)
    void OnDeselected();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeactivatedBP(TEnumAsByte<EBTNodeResult::Type>& NodeResult);
    
    UFUNCTION(BlueprintCallable)
    void OnDeactivated(TEnumAsByte<EBTNodeResult::Type>& NodeResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActivatedBP();
    
    UFUNCTION(BlueprintCallable)
    void OnActivated();
    
};

