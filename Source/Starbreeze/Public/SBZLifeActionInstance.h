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
    USBZLifeActionInstance(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopDialog(bool bReset);
    
    UFUNCTION(BlueprintCallable)
    void StartDialog();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSlotFree(const FGameplayTag& InTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESBZLifeActionState GetState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZLifeActionSlot* GetSlotWithTag(const FGameplayTag& InTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZLifeActionSlot* GetReservedSlot(const ASBZCharacter* Character) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ContainsSlot(const USBZLifeActionSlot* InSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreAllNeededSlotsReady() const;
    
};

