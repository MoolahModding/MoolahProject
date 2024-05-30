#include "SBZAIFBIVan.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"
#include "SBZCharacterVoiceComponent.h"
#include "SBZOutlineComponent.h"
#include "SBZPropDamageComponent.h"

ASBZAIFBIVan::ASBZAIFBIVan(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->PropDamageComponent = CreateDefaultSubobject<USBZPropDamageComponent>(TEXT("Prop Damage Component"));
    this->AntennaHitMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Antenna Hit Mesh"));
    this->AntennaDestroyedEffect = NULL;
    this->AntennaDestroyedMesh = NULL;
    this->AntennaDestroyedOnEvent = NULL;
    this->VoiceComponent = CreateDefaultSubobject<USBZCharacterVoiceComponent>(TEXT("SBZCharacterVoiceComponent"));
    this->FBIArrivedVO = NULL;
    this->AntennaDestroyedVO = NULL;
    this->AssaultBarkVO = NULL;
    this->EscapeArrivingVO = NULL;
    this->PlayerInEscapeZoneVO = NULL;
    this->AllPlayersInEscapeZoneVO = NULL;
    this->FirstPlayerInCustodyVO = NULL;
    this->AnotherPlayerInCustodyVO = NULL;
    this->ShadeFBIOnTheWayVO = NULL;
    this->ShadeFBIHasArrivedVO = NULL;
    this->ShadeFBIReminderVO = NULL;
    this->AssaultCommentIntervalSeconds = 20.00f;
    this->AssaultCommentRandomChance = 0.50f;
    this->EscapeVOCooldown = 20.00f;
    this->ShadeReminderVOChance = 0.30f;
    this->ShadeReminderVOCooldown = 60.00f;
    this->bIsFBIActive = false;
    this->ECMOutlineComponent = CreateDefaultSubobject<USBZOutlineComponent>(TEXT("SBZOutlineComponent"));
    this->ECMOutlineAsset = NULL;
    this->AntennaHitMeshComponent->SetupAttachment(RootComponent);
}

void ASBZAIFBIVan::OnVanArrived(ASBZWheeledVehicle* Vehicle, ASBZSpline* Spline) {
}

void ASBZAIFBIVan::OnTakeDamage(const FSBZDamageEvent& DamageEventData) {
}

void ASBZAIFBIVan::OnRep_IsFBIActive() {
}

void ASBZAIFBIVan::OnPropDamaged(UActorComponent* PoolComponent, float Health, bool bDoCosmetics, const FSBZPropDamageContext& DamageContext) {
}

void ASBZAIFBIVan::OnPlayersInEscapeChanged(const FSBZPlayerInEscapeChangedEvent& PlayerInEscapeChangedEventData) {
}

void ASBZAIFBIVan::OnPlayerDefeated(ASBZPlayerState* InPlayerState, EPD3DefeatState OldDefeatState, EPD3DefeatState NewDefeatState) {
}

void ASBZAIFBIVan::OnHeistStateChanged(EPD3HeistState OldState, EPD3HeistState NewState) {
}

void ASBZAIFBIVan::OnECMCountChanged(int32 NewCount, int32 OldCount, float AddedTime, bool bInIsSignalScanActive) {
}

void ASBZAIFBIVan::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZAIFBIVan, bIsFBIActive);
}


