#include "SBZWorldRuntime.h"
#include "SBZActorContainer.h"
#include "SBZActorRingBuffer.h"
#include "SBZImpactManager.h"
#include "SBZObjectContainer.h"
#include "SBZObservableActorContainer.h"
#include "SBZSignificanceManager.h"

USBZWorldRuntime* USBZWorldRuntime::Get(const UObject* WorldContextObject) {
    return NULL;
}

USBZWorldRuntime::USBZWorldRuntime() {
    this->AllPawns = CreateDefaultSubobject<USBZActorContainer>(TEXT("AllPawns"));
    this->AllPlayerCharacters = CreateDefaultSubobject<USBZObservableActorContainer>(TEXT("AllPlayerCharacters"));
    this->AllAlivePlayerCharacters = CreateDefaultSubobject<USBZObservableActorContainer>(TEXT("AllAlivePlayerCharacters"));
    this->AllAliveAICrewCharacters = CreateDefaultSubobject<USBZObservableActorContainer>(TEXT("AllAliveAICrewCharacters"));
    this->AllAliveAICharacters = CreateDefaultSubobject<USBZActorContainer>(TEXT("AllAliveAICharacters"));
    this->AllAliveAIGuards = CreateDefaultSubobject<USBZActorContainer>(TEXT("AllAliveAIGuards"));
    this->AllAliveAIDrones = CreateDefaultSubobject<USBZActorContainer>(TEXT("AllAliveAIDrones"));
    this->AllRagdollCarryCharacters = CreateDefaultSubobject<USBZActorContainer>(TEXT("AllRagdollCarryCharacters"));
    this->AllLevelScriptActors = CreateDefaultSubobject<USBZActorContainer>(TEXT("AllLevelScriptActors"));
    this->AllBagDropPoints = CreateDefaultSubobject<USBZActorContainer>(TEXT("AllDropPoints"));
    this->AllSecurityRooms = CreateDefaultSubobject<USBZActorContainer>(TEXT("AllSecurityRooms"));
    this->AllSecurityCameras = CreateDefaultSubobject<USBZActorContainer>(TEXT("AllSecurityCameras"));
    this->AllDespawnVolumes = CreateDefaultSubobject<USBZActorContainer>(TEXT("AllDespawnVolumes"));
    this->AllArmedGrenades = CreateDefaultSubobject<USBZActorContainer>(TEXT("AllArmedGrenades"));
    this->AllRoomVolumes = CreateDefaultSubobject<USBZActorContainer>(TEXT("AllRoomVolumes"));
    this->AllProtectPoints = CreateDefaultSubobject<USBZActorContainer>(TEXT("AllProtectPoints"));
    this->AllDefensePoints = CreateDefaultSubobject<USBZActorContainer>(TEXT("AllDefensePoints"));
    this->AllVantagePoints = CreateDefaultSubobject<USBZActorContainer>(TEXT("AllVantagePoints"));
    this->AllActiveObjectives = CreateDefaultSubobject<USBZObservableActorContainer>(TEXT("AllActiveObjectives"));
    this->AllEscortPoints = CreateDefaultSubobject<USBZActorContainer>(TEXT("AllEscortPoints"));
    this->AllSabotageTargets = CreateDefaultSubobject<USBZActorContainer>(TEXT("AllSabotageTargets"));
    this->AllTaserMines = CreateDefaultSubobject<USBZActorContainer>(TEXT("AllTaserMines"));
    this->AllPlacebleCharges = CreateDefaultSubobject<USBZActorContainer>(TEXT("AllPlacebleCharges"));
    this->AllAliveHostages = CreateDefaultSubobject<USBZActorContainer>(TEXT("AllAliveHostages"));
    this->AllAliveAutoAimActors = CreateDefaultSubobject<USBZActorContainer>(TEXT("AllAliveAutoAimActors"));
    this->PendingVisibilityDeleteActors = CreateDefaultSubobject<USBZObjectContainer>(TEXT("PendingVisibilityDelete"));
    this->RagdollActorsBuffer = CreateDefaultSubobject<USBZActorRingBuffer>(TEXT("ActiveRagdolls"));
    this->DebrisActorsBuffer = CreateDefaultSubobject<USBZActorRingBuffer>(TEXT("ActiveDebris"));
    this->AllAIAttractors = CreateDefaultSubobject<USBZObjectContainer>(TEXT("AllAIAttractors"));
    this->AllAIObjectives = CreateDefaultSubobject<USBZObjectContainer>(TEXT("AllAIObjectives"));
    this->ImpactManager = CreateDefaultSubobject<USBZImpactManager>(TEXT("ImpactManager"));
    this->DebugDrawingManager = NULL;
    this->SignificanceManager = CreateDefaultSubobject<USBZSignificanceManager>(TEXT("SBZSignificanceManager"));
    this->AllHackableActors = CreateDefaultSubobject<USBZActorContainer>(TEXT("AllHackableActors"));
    this->AllActiveBagRespawnPoints = CreateDefaultSubobject<USBZActorContainer>(TEXT("AllActiveBagRespawnPoints"));
    this->AllSensorToolBlueActors = CreateDefaultSubobject<USBZActorContainer>(TEXT("AllSensorToolBlueActors"));
    this->AllSensorToolOrangeActors = CreateDefaultSubobject<USBZActorContainer>(TEXT("AllSensorToolOrangeActors"));
    this->AllScreenInteractComponents = CreateDefaultSubobject<USBZObjectContainer>(TEXT("AllScreenInteractComponents"));
    this->AllCrewAILifeActionComponents = CreateDefaultSubobject<USBZObjectContainer>(TEXT("AllCrewAILifeActionComponents"));
    this->AllAITowerHideLifeActionObjects = CreateDefaultSubobject<USBZObjectContainer>(TEXT("AllAITowerHideLifeActionComponents"));
}

