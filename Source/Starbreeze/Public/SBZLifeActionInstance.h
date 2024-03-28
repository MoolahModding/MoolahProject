#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "GameplayTagContainer.h"
#include "ESBZLifeActionState.h"
#include "SBZLifeActionInstance.generated.h"

class ASBZCharacter;
class USBZLifeActionComponent;
class USBZLifeActionDialogPlayer;
class USBZLifeActionSlot;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZLifeActionInstance : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZLifeActionDialogPlayer* DialogPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZLifeActionComponent* OwningLifeActionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZLifeActionSlot*> Slots;
    
public:
    USBZLifeActionInstance();
    UFUNCTION(BlueprintCallable)
    void StopDialog(bool bReset);
    
    UFUNCTION(BlueprintCallable)
    void StartDialog();
    
    UFUNCTION(BlueprintPure)
    bool IsSlotFree(const FGameplayTag& InTag) const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTag GetTag() const;
    
    UFUNCTION(BlueprintPure)
    ESBZLifeActionState GetState() const;
    
    UFUNCTION(BlueprintPure)
    USBZLifeActionSlot* GetSlotWithTag(const FGameplayTag& InTag) const;
    
    UFUNCTION(BlueprintPure)
    USBZLifeActionSlot* GetReservedSlot(const ASBZCharacter* Character) const;
    
    UFUNCTION(BlueprintPure)
    bool ContainsSlot(const USBZLifeActionSlot* InSlot) const;
    
    UFUNCTION(BlueprintPure)
    bool AreAllNeededSlotsReady() const;
    
};

