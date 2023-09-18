#include "SBZAIFBIVan.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"
#include "SBZCharacterVoiceComponent.h"
#include "SBZPropDamageComponent.h"
#include "SBZWheeledVehicleSkeletalMeshComponent.h"

ASBZAIFBIVan::ASBZAIFBIVan(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PropDamageComponent = CreateDefaultSubobject<USBZPropDamageComponent>(TEXT("Prop Damage Component"));
    this->AntennaHitMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Antenna Hit Mesh"));
    FProperty* p_Mesh_Parent = GetClass()->FindPropertyByName("Mesh");
    this->AntennaHitMeshComponent->SetupAttachment(*p_Mesh_Parent->ContainerPtrToValuePtr<USBZWheeledVehicleSkeletalMeshComponent*>(this));
    this->AntennaDestroyedEffect = NULL;
    this->AntennaDestroyedMesh = NULL;
    this->AntennaDestroyedOnEvent = NULL;
    this->VoiceComponent = CreateDefaultSubobject<USBZCharacterVoiceComponent>(TEXT("SBZCharacterVoiceComponent"));
    this->VoiceComponent->SetupAttachment(*p_Mesh_Parent->ContainerPtrToValuePtr<USBZWheeledVehicleSkeletalMeshComponent*>(this));
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

void ASBZAIFBIVan::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZAIFBIVan, bIsFBIActive);
}


