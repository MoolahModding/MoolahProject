#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ESBZAgilityType.h"
#include "ESBZEvadeType.h"
#include "SBZAIUtilityControlled.h"
#include "SBZAgentSettings.h"
#include "SBZAgilityTrajectoryPoint.h"
#include "SBZCharacter.h"
#include "SBZGateNavAgentInterface.h"
#include "SBZRappellingRopeInterface.h"
#include "SBZSensorInterface.h"
#include "SBZAIBaseCharacter.generated.h"

class AActor;
class ASBZAIBaseCharacter;
class ASBZRappellingRope;
class ASBZWheeledVehicle;
class UAnimMontage;
class UClass;
class USBZAICharacterAttributeSet;
class USBZAICharacterMovementComponent;
class USBZAIInteractorComponent;
class USBZAIStimuliReactionComponent;
class USBZAIUtilityData;
class USBZAbilitySystemComponent;
class USBZAgentManager;
class USBZAgilityQueryParams;
class USBZNavLinkAgilityComponent;
class USBZPathFocusSettings;
class USBZStanceTransitionDataAsset;
class USBZVoiceCommentDataAsset;

UCLASS(Abstract, Blueprintable)
class STARBREEZE_API ASBZAIBaseCharacter : public ASBZCharacter, public ISBZAIUtilityControlled, public ISBZGateNavAgentInterface, public ISBZSensorInterface, public ISBZRappellingRopeInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZAIUtilityData* CombatUtilityData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer InvalidTargetTags;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* NavFilters[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZAbilitySystemComponent* AbilitySystemComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* AttributeSetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZAICharacterAttributeSet* AttributeSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 RemoteDesiredViewYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 RemoteDesiredHeadYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZAIUtilityData* UtilityData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TypeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AActor* CurrentTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZAgilityQueryParams* AgilityQueryParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZNavLinkAgilityComponent* CurrentNavLinkAgilityComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZAIStimuliReactionComponent* StimuliReactionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentReference ComesticPropRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanEverDoIdleBreaker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZAIInteractorComponent* AIInteractorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZVoiceCommentDataAsset* PlacementComment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZRappellingRope* CurrentRappellingRope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* LastWarpedRootMotionMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZWheeledVehicle* CurVehicleObstacle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZWheeledVehicle* CurVehicleHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZStanceTransitionDataAsset* AllowedStanceTransitionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZAgentManager* AgentManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeadlyFallHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZPathFocusSettings* PathFocusSettings;
    
private:
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_AgentId, meta=(AllowPrivateAccess=true))
    uint32 AgentId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAgentSettings AgentSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZAICharacterMovementComponent* AgentCharacterMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NeighbourDetectionRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASBZAIBaseCharacter*> Neighbours;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange AvoidanceRandomWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* PlayingAgilityMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanDoEvadeDuringPathing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanDoEvades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* MarkedGameplayEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdditiveBaseEyeHeightTickRate;
    
public:
    ASBZAIBaseCharacter(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_AgentId();
    
    UFUNCTION(BlueprintCallable)
    void OnMontageStarted(UAnimMontage* Montage);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_Unmark(float InMarkedDuration);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_StopWarpedRootMotionMontage(UAnimMontage* Montage, bool bCanPlayExit);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_StopEvade();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_StopAgilityMontage(UAnimMontage* Montage);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetCurrentTarget(AActor* NewTarget);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_PlayWarpedRootMotionMontage(UAnimMontage* Montage, const TArray<FTransform>& WarpingTransforms);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_PlayAgilityMontage(UAnimMontage* Montage, const TArray<FTransform>& WarpingTransforms, ESBZAgilityType AgilityType, const TArray<FSBZAgilityTrajectoryPoint>& TrajectoryPoints);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_PlaceObjectCosmetics(UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_Evade(ESBZEvadeType EvadeType, UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeSinceLastAgility() const;
    

    // Fix for true pure virtual functions not being implemented

    virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override
    {
        return AbilitySystem;
    }
};

