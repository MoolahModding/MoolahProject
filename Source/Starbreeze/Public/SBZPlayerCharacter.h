#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Curves/CurveFloat.h"
#include "Engine/NetSerialization.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EPD3DefeatState.h"
#include "EPD3MiniGameState.h"
#include "SBZAIVisualDetectionGeneratorInterface.h"
#include "SBZCharacter.h"
#include "SBZControlsReference.h"
#include "SBZDetectionData.h"
#include "SBZEjectableByVehicleInterface.h"
#include "SBZEmoteInterface.h"
#include "SBZEquippableConfig.h"
#include "SBZEquippableInspectInterface.h"
#include "SBZLastAttackerData.h"
#include "SBZLocalPlayerFeedbackParameters.h"
#include "SBZLockCameraData.h"
#include "SBZPlayerInEscapeChangedEvent.h"
#include "Templates/SubclassOf.h"
#include "SBZPlayerCharacter.generated.h"

class AActor;
class ASBZAICharacter;
class ASBZCuttingTool;
class ASBZPlayerState;
class ASBZTool;
class ASBZZiplineMotor;
class UCameraModifier;
class UNiagaraComponent;
class UObject;
class USBZAIVisualDetectionComponent;
class USBZAimAssistComponent;
class USBZBaseInteractableComponent;
class USBZBaseWeaponData;
class USBZCharacterComponent;
class USBZCustomizableSuitMeshComponent;
class USBZDialogDataAsset;
class USBZEmoteData;
class USBZFirstPersonCameraAttachment;
class USBZFloorHeightCameraSmoother;
class USBZHeightTransitionCameraModifier;
class USBZInteractorComponent;
class USBZLocalPlayerFeedback;
class USBZMarkerDataAsset;
class USBZMiniGameComponent;
class USBZOutlineAsset;
class USBZPitchLookCameraModifier;
class USBZPlayerAbilitySystemComponent;
class USBZPlayerAnimationCollectionFPP;
class USBZPlayerAttributeSet;
class USBZPlayerInteractorComponent;
class USBZRecoilComponent;
class USBZShoutoutComponent;
class USBZTasedData;
class USBZTiltCameraModifier;
class USBZToolData;
class USBZVoiceCommentDataAsset;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZPlayerCharacter : public ASBZCharacter, public ISBZAIVisualDetectionGeneratorInterface, public ISBZEquippableInspectInterface, public ISBZEmoteInterface, public ISBZEjectableByVehicleInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve VisualDetectionMultiplierSlide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VisualDetectionMultiplierSprinting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VisualDetectionMultiplierCrouched;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VisualDetectionMultiplierStanding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve AlertnessMultiplierSlide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AlertnessMultiplierSprinting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AlertnessMultiplierCrouched;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AlertnessMultiplierStanding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZShoutoutComponent* ShoutoutComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZVoiceCommentDataAsset* CallComment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZVoiceCommentDataAsset* HelpComment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZVoiceCommentDataAsset* DownedComment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZVoiceCommentDataAsset* GetDownComment;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShoutDownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShoutDownRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IntimidationRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverkillWeaponVODelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverkillWeaponVORate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZFirstPersonCameraAttachment* FPCameraAttachment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZRecoilComponent* RecoilComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZAimAssistComponent* AimAssistComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZCharacterComponent* CharacterComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh1PBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZCustomizableSuitMeshComponent* Mesh1PSuit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh1PGloves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZPlayerInteractorComponent* Interactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZPlayerAnimationCollectionFPP* DefaultAnimationCollectionFPP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZPlayerAnimationCollectionFPP* AnimationCollectionFPP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CasingEyeHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SubduedEyeHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DownedEyeHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BleedoutEyeHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlideEyeHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CarryTiltSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CarryTiltDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CarryAdditionalTiltDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> WhizzbyActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* WhizzbyActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZLocalPlayerFeedback> LandedFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZLocalPlayerFeedback> JumpedFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZLocalPlayerFeedback> ArmorDepletedFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZLocalPlayerFeedback> ArmorReplenishedFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZLocalPlayerFeedback> ArmorDamageFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZLocalPlayerFeedback> DodgeDepletedFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZLocalPlayerFeedback> DodgeReplenishedFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZLocalPlayerFeedback> DodgeDamageFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZLocalPlayerFeedback> HealthDamageFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZLocalPlayerFeedback> SubduedDamageFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZLocalPlayerFeedback> DefeatFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZLocalPlayerFeedback> SlideFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZLocalPlayerFeedback> HumanShieldReachSlotFeedBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZLocalPlayerFeedback> TraverseFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZLocalPlayerFeedback> RunFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZLocalPlayerFeedback> OverHealDamageFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZLocalPlayerFeedback> OverHealGainedFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZLocalPlayerFeedback> OverHealRestoredFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZLocalPlayerFeedback> ShieldFlashFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize DesiredAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UCameraModifier>> CameraModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZVoiceCommentDataAsset* RevivedComment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZVoiceCommentDataAsset* UncuffedComment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZVoiceCommentDataAsset* StealthMaskOnComment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZVoiceCommentDataAsset* LoudMaskOnComment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZVoiceCommentDataAsset* LowHealthComment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LowHealthLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZDialogDataAsset* DownedDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZDialogDataAsset* InCustodyDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZDialogDataAsset* BackFromCustodyDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZDialogDataAsset* CuffedDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZDialogDataAsset* TasedDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZDialogDataAsset* SubduedDialog;
    
    UPROPERTY(EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint32 CurrentCarryNetID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZLockCameraData HumanShieldInstigatorLockCameraData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NormalTargetingHumanShieldMagnification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OnTopTargetingHumanShieldMagnification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* EscortCircleEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZBaseWeaponData* UnequippedWeaponData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASBZZiplineMotor> FPZiplineMotorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZEmoteData* EmoteData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZPlayerAbilitySystemComponent* PlayerAbilitySystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer CancelOnDamageTagContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer IgnoreMovementTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ForbidLandSlideTagContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OnTopBaseFOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZAIVisualDetectionComponent*> VisualDetectors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZDetectionData> VisualDetectionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPD3DefeatState DefeatState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPD3DefeatState OldDefeatState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DefeatTime, meta=(AllowPrivateAccess=true))
    float DefeatTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZMarkerDataAsset* ReviveMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZMarkerDataAsset* TasedMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZMarkerDataAsset* CuffedMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZMarkerDataAsset* SubduedMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReviveInvulnerableDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RemoveReviveInvulnerableTagContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZMarkerDataAsset* PlayerMarkerAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PlayerMarkerOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlayerMarkerSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZOutlineAsset* DownedOutline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerState* SBZPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerState* OldSBZPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZPlayerAttributeSet* PlayerAttributeSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZTiltCameraModifier* TiltCameraModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZPitchLookCameraModifier* PitchLookCameraModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZHeightTransitionCameraModifier* HeightTransitionCameraModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZFloorHeightCameraSmoother* FloorHeightCameraModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SubduedTiltSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SubduedTiltDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DownedTiltSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DownedTiltDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BleedOutTiltSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BleedOutTiltDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SubduedPitchLookSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SubduedPitchDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BleedOutPitchLookSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BleedOutPitchDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReviveTiltSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RequestOverkillWeaponAnimationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FirstAidKitOverHealAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve FallDamageCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve MagnificationInputCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float FallingStartHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasTriggeredCoupDeGraceSkill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> CurrentFollowersArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MiniGameDetectionMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CuttingToolDetectionMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GadgetDetectionMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsGadgetPlacingIllegal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsCurrentNavLocationValid;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NavLocationSaveInterval;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NavigationZAxisLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZToolData*> ModifiedToolDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZTool* PrimaryTool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZCuttingTool* CuttingTool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZTool* CurrentReplicatedPlaceableTool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SlideFeedbackID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 RunFeedbackID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZLastAttackerData LastAttackerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZTasedData* TasedData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PlayerMicroCameraOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlayerMicroCameraSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZMiniGameComponent* MiniGameComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZMiniGameComponent* CurrentMiniGameComponent;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<ASBZAICharacter>> IntimidateCiviliansWithinRangeArray;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval IntimidateCiviliansInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsLocalKillingHumanShield;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float HumanShieldStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZControlsReference DefeatControlsReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 DefeatControlsReferenceID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinLandingSlideWalkToRunLerp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* LastCuttableActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* LastHackedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SpawnAnimationTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHitResult ClientUpdateLandHitResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve PostProcessFadeInBlendCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve PostProcessFadeOutBlendCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReflectorShieldMaxBlindedDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReflectorShieldCooldownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZEquippableConfig> StoredConsumableConfigArray;
    
public:
    ASBZPlayerCharacter(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void StartEmote(const FText& EmoteText);
    
    UFUNCTION(BlueprintCallable)
    bool StartCurrentEquippableInspect();
    
    UFUNCTION(BlueprintCallable)
    bool SetCameraFeedbackIntensity(int32 CameraFeedbackID, float Intensity);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerStartEquipOverkillWeapon();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_StopCurrentEmoteMontage(float BlendOutTime);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetPhoneInteractionFlow(bool bInPhoneInteractionFlow);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void Server_PlayEmoteMontage(const FGameplayTag& MontageTag);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_OnMaskInputAbilityComplete();
    
    UFUNCTION(BlueprintCallable)
    bool RemoveCameraFeedback(int32 RemoveID);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateDefeatTime();
    
    UFUNCTION(BlueprintCallable)
    void OnUndoToolPlaceableAmmoChange(const int32 InPlaceableIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnUndoToolAmmoChange(const int32 InPlaceableIndex, const int32 InCost);
    
    UFUNCTION(BlueprintCallable)
    void OnUndoThrowableAmmoChange(const int32 InThrowableIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnUndoPlaceableAmmoChange(const int32 InPlaceableIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnServerStartInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* InInteractor, bool bInIsLocallyControlled);
    
    UFUNCTION(BlueprintCallable)
    void OnServerEndInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* InInteractor, bool bInIsLocallyControlled);
    
    UFUNCTION(BlueprintCallable)
    void OnServerCompleteInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* InInteractor, bool bInIsLocallyControlled);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DefeatTime();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerStateDestroyed(AActor* DestroyedActor);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayersInEscapeChanged(const FSBZPlayerInEscapeChangedEvent& PlayerInEscapeChangedEventData);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnMiniGameStateChanged(EPD3MiniGameState OldState, EPD3MiniGameState NewState, bool bInIsLocallyControlled);
    
    UFUNCTION(BlueprintCallable)
    void OnDefeatTimerDone();
    
    UFUNCTION(BlueprintCallable)
    void OnAckCompleteInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* InInteractor, bool bInIsLocallyControlled);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_StopCurrentEmoteMontage(float BlendOutTime);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetDefeatTime(float InDefeatTime);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ReviveInteractionStarted(float EndTime);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ResumeDefeatTime(float InDefeatTime);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_PlayRequestOverkillAnimation();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_PlayEmoteMontage(const FGameplayTag& MontageTag);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_PauseDefeatTime();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_AbortPhoneInteraction(bool bWasCompleted);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSeenByAI() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool GetHealthAttributes(const UObject* WorldContextObject, float& Health, float& MaxHealth);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSBZDetectionData> GetDetectionData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZMiniGameComponent* GetCurrentMiniGameComponent() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool GetArmorAttributes(const UObject* WorldContextObject, float& Armor, float& MaxArmor);
    
    UFUNCTION(BlueprintCallable)
    bool FadeOutCameraFeedback(int32 RemoveID, bool bIsAutoRemoved);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_Teleport(const FVector& Location, const float Yaw);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetObserved(bool bObserved);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetEscortCircleAttachment(AActor* EscortCircleHolder);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetEscortCircleActive(const bool bActive, AActor* EscortInstigator);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetDetector(uint8 Index, AActor* Detector);
    
    UFUNCTION(Client, Reliable)
    void Client_SetDetectionData(uint32 PackedData);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void Client_PlayOverHealRestoredEffect();
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void Client_PlayOverHealGainedEffect();
    
public:
    UFUNCTION(BlueprintCallable)
    int32 ApplyCameraFeedback(UPARAM(Ref) FSBZLocalPlayerFeedbackParameters& Parameters);
    

    // Fix for true pure virtual functions not being implemented
};

