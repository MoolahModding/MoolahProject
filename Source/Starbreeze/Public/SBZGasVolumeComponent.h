#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "ESBZGasCellGrowMode.h"
#include "SBZGasCellHitData.h"
#include "SBZLocalGasLocations.h"
#include "SBZReplicatedGasVolumeComponentData.h"
#include "SBZGasVolumeComponent.generated.h"

class ASBZCharacter;
class ULineBatchComponent;
class UNiagaraComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZGasVolumeComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    ULineBatchComponent* LineBatchComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_GasVolumeComponentData, meta=(AllowPrivateAccess=true))
    FSBZReplicatedGasVolumeComponentData ReplicatedData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitOnBeginPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBeforeDieToStartKillingCells;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 CellSize;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 MaxTravelDistance;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 HorizontalSize;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 VerticalSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxComputationPerSecond;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 MaxCellDensity;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 MinCellDensityToHurt;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 MinCellDensityToGrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DensityToAddPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DensityToLoosePerSecond;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 MaxCellIndexToBoost;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 StartupDensityBoostMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZGasCellGrowMode GrowMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CollisionProfileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NiagaraParticleArrayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NiagaraBorderParticleArrayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NiagaraParticleCountName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NiagaraBorderParticleCountName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxParticleCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ParticleCountMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateParticleLocationsInterval;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 MaxUpdateLocationPerFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 OverdrawOptimisationPoolID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZLocalGasLocations LocalGasLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZLocalGasLocations LocalGasBorderLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZGasCellHitData> CellHitData;
    
public:
    USBZGasVolumeComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void OnRep_GasVolumeComponentData();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetRadius(float Radius);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetDuration(float InDuration);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_Init();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_AddExpansionScalar(float InScalar);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSegmentOverlapping(const FVector& Start, const FVector& End, bool bQuickOverlap, bool bUseLineTrace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocationOverlapping(const FVector& Location) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharacterOverlapping(const ASBZCharacter* Character) const;
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
    UFUNCTION(BlueprintCallable)
    void FeedNiagaraWithParticleLocations(UNiagaraComponent* NiagaraComponent);
    
};

