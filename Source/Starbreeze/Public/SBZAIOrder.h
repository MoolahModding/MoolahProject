#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "ESBZAIBehaviorCategory.h"
#include "ESBZAIOrderMode.h"
#include "SBZAIOrder.generated.h"

class AActor;
class APawn;
class UBehaviorTree;

UCLASS(Blueprintable, EditInlineNew)
class USBZAIOrder : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer OrderTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer OverrideTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ApplicablePawnTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldRemoveTagsOnStopped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZAIOrderMode Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInstanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPersistent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultSelectionScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultUtilityScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* Behavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZAIBehaviorCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* OrderOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCompleteOnStop;
    
public:
    USBZAIOrder();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStoppedBP(APawn* Pawn, TEnumAsByte<EBTNodeResult::Type>& NodeResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartedBP(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSelectedBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeselectedBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCompletedBP(APawn* Pawn, TEnumAsByte<EBTNodeResult::Type>& NodeResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool ExecPredicate(const UObject* Owner) const;
    
};

