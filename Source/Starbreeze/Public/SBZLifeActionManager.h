#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "ESBZLifeActionStopReason.h"
#include "SBZLifeActionRequest.h"
#include "SBZLifeActionManager.generated.h"

class ASBZCharacter;
class UAnimMontage;
class UObject;
class USBZLifeActionComponent;
class USBZLifeActionInstance;
class USBZLifeActionManager;
class USBZLifeActionSlot;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZLifeActionManager : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZLifeActionComponent*> LifeActionComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<ASBZCharacter*, USBZLifeActionComponent*> LifeActionCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UAnimMontage>> LoadingMontages;
    
public:
    USBZLifeActionManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StopActionForCharacter(ASBZCharacter* Character, USBZLifeActionSlot* Slot, ESBZLifeActionStopReason StopReason);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool SetSlotReadyForCharacter(ASBZCharacter* Character);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    USBZLifeActionSlot* ReserveAction(ASBZCharacter* Character, const FSBZLifeActionRequest& Request);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSlotReserved(ASBZCharacter* Character, USBZLifeActionInstance* ActionInstance, USBZLifeActionSlot* ActionSlot);
    
    UFUNCTION(BlueprintCallable)
    void OnSlotFreed(ASBZCharacter* Character, USBZLifeActionInstance* ActionInstance, USBZLifeActionSlot* ActionSlot, ESBZLifeActionStopReason Result);
    
    UFUNCTION(BlueprintCallable)
    void OnSlotExited(ASBZCharacter* Character, USBZLifeActionInstance* ActionInstance, USBZLifeActionSlot* ActionSlot, ESBZLifeActionStopReason Result);
    
    UFUNCTION(BlueprintCallable)
    void OnSlotEntered(ASBZCharacter* Character, USBZLifeActionInstance* ActionInstance, USBZLifeActionSlot* ActionSlot);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool IsCharacterPlayingAction(const ASBZCharacter* Character) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool IsCharacterPendingAction(const ASBZCharacter* Character) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    USBZLifeActionComponent* GetLifeActionComponentForCharacter(const ASBZCharacter* Character) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    USBZLifeActionSlot* GetClosestLifeActionMatchingTagAny(const FVector Location, const FGameplayTag& LifeActionSlotTag) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    ASBZCharacter* GetCharacterForActionSlot(const USBZLifeActionComponent* LifeActionComponent, const FGameplayTag& LifeActionSlotTag, const USBZLifeActionInstance* LifeActionInstance) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    FTransform GetActionSlotTransformForCharacter(const ASBZCharacter* Character) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    USBZLifeActionSlot* GetActionSlotForCharacter(const ASBZCharacter* Character) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZLifeActionManager* Get(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool EnterActionForCharacter(ASBZCharacter* Character);
    
};

