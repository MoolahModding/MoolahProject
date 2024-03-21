#include "SBZGasVolumeComponent.h"
#include "Net/UnrealNetwork.h"

bool USBZGasVolumeComponent::IsSegmentOverlapping(const FVector& Start, const FVector& End, bool bQuickOverlap, bool bUseLineTrace) const {
    return false;
}

bool USBZGasVolumeComponent::IsLocationOverlapping(const FVector& Location) const {
    return false;
}

bool USBZGasVolumeComponent::IsCharacterOverlapping(const ASBZCharacter* Character) const {
    return false;
}

void USBZGasVolumeComponent::Init() {
}

void USBZGasVolumeComponent::FeedNiagaraWithParticleLocations(UNiagaraComponent* NiagaraComponent) {
}

void USBZGasVolumeComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZGasVolumeComponent, ReplicatedLocalLocations);
    DOREPLIFETIME(USBZGasVolumeComponent, ReplicatedLocalBorderLocations);
}

USBZGasVolumeComponent::USBZGasVolumeComponent() {
    this->LineBatchComponent = NULL;
    this->bInitOnBeginPlay = false;
    this->Duration = 30.00f;
    this->TimeBeforeDieToStartKillingCells = 8.00f;
    this->CellSize = 60;
    this->MaxTravelDistance = 800;
    this->HorizontalSize = 800;
    this->VerticalSize = 450;
    this->MaxComputationPerSecond = 400;
    this->MaxCellDensity = 12000;
    this->MinCellDensityToHurt = 10000;
    this->MinCellDensityToGrow = 1000;
    this->DensityToAddPerSecond = 2000;
    this->DensityToLoosePerSecond = 5000;
    this->MaxCellIndexToBoost = 32;
    this->StartupDensityBoostMultiplier = 50;
    this->GrowMode = ESBZGasCellGrowMode::GetDensityFromNeighbours;
    this->CollisionProfileName = TEXT("Pawn");
    this->NiagaraParticleArrayName = TEXT("ParticleLocations");
    this->NiagaraBorderParticleArrayName = TEXT("BorderParticleLocations");
    this->NiagaraParticleCountName = TEXT("ParticleCount");
    this->NiagaraBorderParticleCountName = TEXT("BorderParticleCount");
    this->MaxParticleCount = 40;
    this->ParticleCountMultiplier = 1.00f;
    this->UpdateParticleLocationsInterval = 0.30f;
    this->MaxUpdateLocationPerFrame = 2;
    this->OverdrawOptimisationPoolID = 2;
}

