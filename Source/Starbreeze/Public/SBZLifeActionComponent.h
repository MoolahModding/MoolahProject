#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "ESBZLifeActionStopReason.h"
#include "SBZLifeActionEventDelegateDelegate.h"
#include "SBZLifeActionStopEventDelegateDelegate.h"
#include "SBZLifeActionComponent.generated.h"

class ASBZCharacter;
class ASkeletalMeshActor;
class USBZLifeActionInstance;
class USBZLifeActionSlot;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZLifeActionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZLifeActionEventDelegate OnCharacterSlotReserved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZLifeActionEventDelegate OnCharacterSlotEntered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZLifeActionEventDelegate OnCharacterSlotReady;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZLifeActionEventDelegate OnCharacterSlotStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZLifeActionStopEventDelegate OnCharacterSlotExited;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZLifeActionStopEventDelegate OnCharacterSlotFreed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZLifeActionInstance*> ActionInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASkeletalMeshActor*> PreviewSkeletals;
    
public:
    USBZLifeActionComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnSlotStart(ASBZCharacter* Character, USBZLifeActionInstance* ActionInstance, USBZLifeActionSlot* ActionSlot);
    
    UFUNCTION(BlueprintCallable)
    void OnSlotReserved(ASBZCharacter* Character, USBZLifeActionInstance* ActionInstance, USBZLifeActionSlot* ActionSlot);
    
    UFUNCTION(BlueprintCallable)
    void OnSlotReady(ASBZCharacter* Character, USBZLifeActionInstance* ActionInstance, USBZLifeActionSlot* ActionSlot);
    
    UFUNCTION(BlueprintCallable)
    void OnSlotFreed(ASBZCharacter* Character, USBZLifeActionInstance* ActionInstance, USBZLifeActionSlot* ActionSlot, ESBZLifeActionStopReason Result);
    
    UFUNCTION(BlueprintCallable)
    void OnSlotExited(ASBZCharacter* Character, USBZLifeActionInstance* ActionInstance, USBZLifeActionSlot* ActionSlot, ESBZLifeActionStopReason Result);
    
    UFUNCTION(BlueprintCallable)
    void OnSlotEntered(ASBZCharacter* Character, USBZLifeActionInstance* ActionInstance, USBZLifeActionSlot* ActionSlot);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharacterPlayingAction(const ASBZCharacter* Character) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharacterPendingAction(const ASBZCharacter* Character) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetSlotTransformForCharacter(const ASBZCharacter* Character) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZLifeActionSlot* GetReservedSlotForCharacter(const ASBZCharacter* Character) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    ASBZCharacter* GetCharacterInActionSlot(const FGameplayTag& LifeActionSlotTag, const USBZLifeActionInstance* LifeActionInstance) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    ASBZCharacter* GetCharacterInAction(const FGameplayTag& LifeActionTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZLifeActionInstance* GetActionWithReservedSlotForCharacter(const ASBZCharacter* Character) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZLifeActionInstance* GetActionForSlot(const USBZLifeActionSlot* Slot);
    
};

