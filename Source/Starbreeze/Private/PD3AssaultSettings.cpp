#include "PD3AssaultSettings.h"

UPD3AssaultSettings::UPD3AssaultSettings() {
    this->CheckIntervalSeconds = 2.00f;
    this->AnticipationPhaseDurationSeconds = 30.00f;
    this->BuildPhaseDurationSeconds = 35.00f;
    this->MinFadePhaseDurationSeconds = 5.00f;
    this->MinAliveAISpawnCountTimeoutSeconds = 30.00f;
    this->MinDramaAndEngagementTimeoutSeconds = 60.00f;
    this->EndFadePhaseMinDramaScale = 0.25f;
    this->RegroupPhaseDurationSeconds = 15.00f;
    this->EndFadePhaseMinAliveAISpawnCount = 50;
    this->MaxTotalAISpawnCount = 150;
    this->MaxAliveAIPlayerModifier.AddDefaulted(4);
    this->MaxSpawnGroupQueryCount = 1;
    this->PreferredSpawnDistance = 2000.00f;
    this->SpawnerTimeScoreWeight = 1.00f;
    this->SpawnerDistScoreWeight = 1.50f;
    this->MaxNumVehicleSpawnRequests = 4;
    this->VehicleSpawnChance = 0.50f;
    this->CloakerRegroupSpawnChance[0] = 0.00f;
    this->CloakerRegroupSpawnChance[1] = 0.00f;
    this->CloakerRegroupSpawnChance[2] = 0.00f;
    this->CloakerRegroupSpawnChance[3] = 0.00f;
    this->MaxNrAttackers[0] = 15;
    this->MaxNrAttackers[1] = 15;
    this->MaxNrAttackers[2] = 15;
    this->MaxNrAttackers[3] = 15;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = UPD3AssaultSettings::StaticClass();
}


