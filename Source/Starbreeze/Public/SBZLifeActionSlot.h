#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ESBZLifeActionState.h"
#include "SBZLifeActionActorTagEvent.h"
#include "SBZLifeActionRandomAnimationTagsPicker.h"
#include "SBZLifeActionRequest.h"
#include "SBZLifeActionSlot.generated.h"

class ASBZCharacter;
class UAnimMontage;
class USBZLifeActionDialogPlayer;
class USBZLifeActionInstance;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZLifeActionSlot : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GrantedTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ConsumedTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer NeededTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ExcludedByTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMustBeOccupied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeedOtherSlotsReadyToBeReserved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOpenForRandomReservation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAcceptableRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AcceptableRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAcceptableAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AcceptableAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCoolDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoolDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseRandomDuration;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval RandomDesiredDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DesiredDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZLifeActionDialogPlayer* DialogPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZLifeActionRandomAnimationTagsPicker RandomAnimationTagsPicker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseEnterAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector EnterLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSnapEnterPointToGround: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EnterAnimationTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseExitAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ExitLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSnapExitPointToGround: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ExitAnimationTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExitOnlyIfActionAnimationIsPlaying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZLifeActionActorTagEvent> ActorEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* PlayingActionMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* PlayingEnterMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* PlayingExitMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZLifeActionState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentReservationID;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int16 CurrentMontageIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZLifeActionInstance* OwningLifeActionInstance;
    
public:
    USBZLifeActionSlot();

    UFUNCTION(BlueprintCallable)
    void SwitchMontageSection(const FName& SectionName);
    
    UFUNCTION(BlueprintCallable)
    void SwitchMontageNextSection(const FName& SectionName);
    
    UFUNCTION(BlueprintCallable)
    void StopDialog(bool bReset);
    
    UFUNCTION(BlueprintCallable)
    void StartDialog();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnMontageEnded(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void OnMontageBlendOut(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void OnEnterAnimationShouldEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnDesiredDurationReached();
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterAnimEvent(const FGameplayTag& EventTag, bool bActive);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool MustBeOccupied() const;
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnSlotStart(ASBZCharacter* InCharacter);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnSlotFreed(ASBZCharacter* InCharacter);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingAnExitAnimation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingAnEnterAnimation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReservedBy(const ASBZCharacter* InCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReadyToStart() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingExitMontage(const ASBZCharacter* InCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingEnterMontage(const ASBZCharacter* InCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingActionMontage(const ASBZCharacter* InCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFree() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESBZLifeActionState GetState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimMontage* GetPlayingActionMontage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetMoveToTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetMoveToRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetMoveToLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentReservationID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimMontage* GetCurrentExitMontage(const ASBZCharacter* InCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimMontage* GetCurrentEnterMontage(const ASBZCharacter* InCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimMontage* GetCurrentActionMontage(const ASBZCharacter* InCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASBZCharacter* GetCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAcceptableRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAcceptableAngle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBeReservedBy(const ASBZCharacter* InCharacter, const FSBZLifeActionRequest& Request, bool bLogErrors) const;
    
};

