#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPD3DefeatState.h"
#include "EPD3HeistState.h"
#include "SBZDamageEvent.h"
#include "SBZDownedByTypeVO.h"
#include "SBZPlayerInEscapeChangedEvent.h"
#include "SBZPropDamageContext.h"
#include "SBZWheeledVehicle.h"
#include "SBZAIFBIVan.generated.h"

class ASBZPlayerState;
class ASBZSpline;
class UActorComponent;
class UAkAudioEvent;
class UNiagaraSystem;
class USBZCharacterVoiceComponent;
class USBZDialogDataAsset;
class USBZOutlineAsset;
class USBZOutlineComponent;
class USBZPropDamageComponent;
class USBZVoiceCommentDataAsset;
class UStaticMesh;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class ASBZAIFBIVan : public ASBZWheeledVehicle {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZPropDamageComponent* PropDamageComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* AntennaHitMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* AntennaDestroyedEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DestroyedEffectOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* AntennaDestroyedMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AntennaDestroyedOnEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZCharacterVoiceComponent* VoiceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZVoiceCommentDataAsset* FBIArrivedVO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZVoiceCommentDataAsset* AntennaDestroyedVO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZVoiceCommentDataAsset* AssaultBarkVO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZVoiceCommentDataAsset* EscapeArrivingVO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZVoiceCommentDataAsset* PlayerInEscapeZoneVO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZVoiceCommentDataAsset* AllPlayersInEscapeZoneVO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZVoiceCommentDataAsset* FirstPlayerInCustodyVO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZVoiceCommentDataAsset* AnotherPlayerInCustodyVO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZDialogDataAsset* ShadeFBIOnTheWayVO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZDialogDataAsset* ShadeFBIHasArrivedVO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZDialogDataAsset* ShadeFBIReminderVO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZDownedByTypeVO> DownedByTypeVOs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AssaultCommentIntervalSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AssaultCommentRandomChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EscapeVOCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShadeReminderVOChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShadeReminderVOCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsFBIActive, meta=(AllowPrivateAccess=true))
    bool bIsFBIActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZOutlineComponent* ECMOutlineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZOutlineAsset* ECMOutlineAsset;
    
public:
    ASBZAIFBIVan(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnVanArrived(ASBZWheeledVehicle* Vehicle, ASBZSpline* Spline);
    
    UFUNCTION(BlueprintCallable)
    void OnTakeDamage(const FSBZDamageEvent& DamageEventData);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsFBIActive();
    
    UFUNCTION(BlueprintCallable)
    void OnPropDamaged(UActorComponent* PoolComponent, float Health, bool bDoCosmetics, const FSBZPropDamageContext& DamageContext);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayersInEscapeChanged(const FSBZPlayerInEscapeChangedEvent& PlayerInEscapeChangedEventData);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerDefeated(ASBZPlayerState* InPlayerState, EPD3DefeatState OldDefeatState, EPD3DefeatState NewDefeatState);
    
    UFUNCTION(BlueprintCallable)
    void OnHeistStateChanged(EPD3HeistState OldState, EPD3HeistState NewState);
    
    UFUNCTION(BlueprintCallable)
    void OnECMCountChanged(int32 NewCount, int32 OldCount, float AddedTime, bool bInIsSignalScanActive);
    
};

