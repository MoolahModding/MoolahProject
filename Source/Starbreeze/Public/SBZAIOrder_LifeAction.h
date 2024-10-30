#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ESBZAIBehaviorCategory.h"
#include "ESBZLifeActionStopReason.h"
#include "SBZAIOrder.h"
#include "SBZComponentSelector.h"
#include "SBZLifeActionRequest.h"
#include "SBZAIOrder_LifeAction.generated.h"

class ASBZCharacter;
class USBZLifeActionComponent;
class USBZLifeActionInstance;
class USBZLifeActionSlot;

UCLASS(Blueprintable, EditInlineNew)
class USBZAIOrder_LifeAction : public USBZAIOrder {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZLifeActionRequest Request;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CompatibleStances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AllowedHeistStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CompleteOrderForResults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseRequestOnlyOnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GrantedTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldRemovePersistenceAfterLA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZComponentSelector LAComponentSelector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZComponentSelector InstanceSelector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZComponentSelector SlotSelector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWaitForEquipped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZLifeActionSlot* ReservedSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZLifeActionComponent* LifeActionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZLifeActionSlot* BlockingSlot;
    
public:
    USBZAIOrder_LifeAction();

protected:
    UFUNCTION(BlueprintCallable)
    void OnCharacterSlotFreed(ASBZCharacter* Character, USBZLifeActionInstance* ActionInstance, USBZLifeActionSlot* ActionSlot, ESBZLifeActionStopReason Result);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnBlockingSlotFreed(ASBZCharacter* Character, USBZLifeActionInstance* ActionInstance, USBZLifeActionSlot* ActionSlot, ESBZLifeActionStopReason Result);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnBehaviorCategoryChanged(ESBZAIBehaviorCategory OldCategory, ESBZAIBehaviorCategory NewCategory);
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearDelegates();
    
};

