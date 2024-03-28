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
    USBZLifeActionComponent();
protected:
    UFUNCTION()
    void OnSlotStart(ASBZCharacter* Character, USBZLifeActionInstance* ActionInstance, USBZLifeActionSlot* ActionSlot);
    
    UFUNCTION()
    void OnSlotReserved(ASBZCharacter* Character, USBZLifeActionInstance* ActionInstance, USBZLifeActionSlot* ActionSlot);
    
    UFUNCTION()
    void OnSlotReady(ASBZCharacter* Character, USBZLifeActionInstance* ActionInstance, USBZLifeActionSlot* ActionSlot);
    
    UFUNCTION()
    void OnSlotFreed(ASBZCharacter* Character, USBZLifeActionInstance* ActionInstance, USBZLifeActionSlot* ActionSlot, ESBZLifeActionStopReason Result);
    
    UFUNCTION()
    void OnSlotExited(ASBZCharacter* Character, USBZLifeActionInstance* ActionInstance, USBZLifeActionSlot* ActionSlot, ESBZLifeActionStopReason Result);
    
    UFUNCTION()
    void OnSlotEntered(ASBZCharacter* Character, USBZLifeActionInstance* ActionInstance, USBZLifeActionSlot* ActionSlot);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsCharacterPlayingAction(const ASBZCharacter* Character) const;
    
    UFUNCTION(BlueprintPure)
    bool IsCharacterPendingAction(const ASBZCharacter* Character) const;
    
    UFUNCTION(BlueprintPure)
    FTransform GetSlotTransformForCharacter(const ASBZCharacter* Character) const;
    
    UFUNCTION(BlueprintPure)
    USBZLifeActionSlot* GetReservedSlotForCharacter(const ASBZCharacter* Character) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintPure)
    ASBZCharacter* GetCharacterInActionSlot(const FGameplayTag& LifeActionSlotTag, const USBZLifeActionInstance* LifeActionInstance) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintPure)
    ASBZCharacter* GetCharacterInAction(const FGameplayTag& LifeActionTag) const;
    
    UFUNCTION(BlueprintPure)
    USBZLifeActionInstance* GetActionWithReservedSlotForCharacter(const ASBZCharacter* Character) const;
    
    UFUNCTION(BlueprintPure)
    USBZLifeActionInstance* GetActionForSlot(const USBZLifeActionSlot* Slot);
    
};

