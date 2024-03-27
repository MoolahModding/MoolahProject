#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "GameplayTagContainer.h"
#include "ESBZLifeActionStopReason.h"
#include "SBZLifeActionEventDelegateDelegate.h"
#include "SBZLifeActionStopEventDelegateDelegate.h"
#include "SBZLifeActionTriggerVolume.generated.h"

class AActor;
class ASBZCharacter;
class USBZAIAction_Order;
class USBZActorFilterComponent;
class USBZLifeActionInstance;
class USBZLifeActionSlot;

UCLASS(Blueprintable, MinimalAPI)
class ASBZLifeActionTriggerVolume : public ATriggerBox {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer NeededTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldStartEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableOnLifeActionReserved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableOnLifeActionExiting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableOnLifeActionComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZActorFilterComponent* ActorFilterComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTriggeredByHumanShield;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZAIAction_Order* Action;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZLifeActionEventDelegate OnCharacterSlotReserved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZLifeActionEventDelegate OnCharacterSlotEntered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZLifeActionEventDelegate OnCharacterSlotReady;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZLifeActionEventDelegate OnCharacterSlotStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZLifeActionStopEventDelegate OnCharacterSlotExiting;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZLifeActionStopEventDelegate OnCharacterSlotExited;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZLifeActionStopEventDelegate OnCharacterSlotFreed;
    
public:
    ASBZLifeActionTriggerVolume();
    UFUNCTION(BlueprintCallable)
    void SetVolumeEnabled(bool bEnabled);
    
private:
    UFUNCTION()
    void OnSlotStart(ASBZCharacter* Character, USBZLifeActionInstance* ActionInstance, USBZLifeActionSlot* ActionSlot);
    
    UFUNCTION()
    void OnSlotReserved(ASBZCharacter* Character, USBZLifeActionInstance* ActionInstance, USBZLifeActionSlot* ActionSlot);
    
    UFUNCTION()
    void OnSlotReady(ASBZCharacter* Character, USBZLifeActionInstance* ActionInstance, USBZLifeActionSlot* ActionSlot);
    
    UFUNCTION()
    void OnSlotFreed(ASBZCharacter* Character, USBZLifeActionInstance* ActionInstance, USBZLifeActionSlot* ActionSlot, ESBZLifeActionStopReason Result);
    
    UFUNCTION()
    void OnSlotExiting(ASBZCharacter* Character, USBZLifeActionInstance* ActionInstance, USBZLifeActionSlot* ActionSlot, ESBZLifeActionStopReason Result);
    
    UFUNCTION()
    void OnSlotExited(ASBZCharacter* Character, USBZLifeActionInstance* ActionInstance, USBZLifeActionSlot* ActionSlot, ESBZLifeActionStopReason Result);
    
    UFUNCTION()
    void OnSlotEntered(ASBZCharacter* Character, USBZLifeActionInstance* ActionInstance, USBZLifeActionSlot* ActionSlot);
    
    UFUNCTION()
    void OnFilteredActorEndOverlapping(FName Identifier, AActor* Actor, int32 CurrentTotalActors);
    
    UFUNCTION()
    void OnFilteredActorBeginOverlapping(FName Identifier, AActor* Actor, int32 CurrentTotalActors);
    
};

