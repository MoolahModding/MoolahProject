#pragma once
#include "CoreMinimal.h"
#include "GameFramework/WorldSettings.h"
#include "GameplayTagContainer.h"
#include "SBZAgilityNavlinkRooms.h"
#include "SBZGlobalMaterialParameters.h"
#include "SBZVehicleSpawnData.h"
#include "SBZWorldSettings.generated.h"

class AActor;
class ASBZAIDefensePoint;
class ASBZAIProtectPoint;
class ASBZAgilityNavLink;
class ASBZAkAcousticPortal;
class ASBZCoverPoint;
class ASBZDespawnVolume;
class ASBZGate;
class ASBZRoomConnectorVolume;
class ASBZRoomVolume;
class UAkAudioEvent;
class UAnimMontage;
class UPD3AssaultSettings;
class USBZAISmallTalkCollection;
class USBZCivilianManagerSettings;
class USBZKeyItemData;
class USBZLifeActionComponent;
class USBZLifeActionSettings;
class USBZMarkerDataAsset;
class USBZNegotiationSettings;
class USBZPlayerLoadoutAsset;
class USBZSurfaceTypesConfig;
class USBZTrafficSettings;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZWorldSettings : public AWorldSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZSurfaceTypesConfig* SurfaceTypesConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZSurfaceTypesConfig> OverrideSoftSurfaceTypesConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* MusicEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopMusicEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> MusicSwitches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, USBZKeyItemData*> KeyItemDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartMusicOnBeginPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSoloMusicStartOnActionPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStopMusicOnEndPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMusicMainMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipNegotiation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipFirstResponders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToNextState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartInCasing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAICrewStartInCasing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartWithAICrew;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInRandomSublevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPD3AssaultSettings* AssaultManagerSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZVehicleSpawnData> VehicleSpawnSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZNegotiationSettings* NegotiationManagerSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZCivilianManagerSettings* CivilianManagerSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZTrafficSettings* TrafficManagerSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZLifeActionSettings* LifeActionSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZAISmallTalkCollection*> SmallTalkCollections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZAISmallTalkCollection*> PhoneSmallTalkCollections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZGlobalMaterialParameters GlobalMaterialParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZPlayerLoadoutAsset* SoloPlayerLoadoutOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<USBZMarkerDataAsset*> LoadedDynamicMarkerAssetSet;
    
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<ASBZCoverPoint>, TSoftObjectPtr<ASBZRoomVolume>> CoverRoomConnection;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<ASBZRoomConnectorVolume>, TSoftObjectPtr<ASBZGate>> ConnectorGateConnection;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<ASBZDespawnVolume>, TSoftObjectPtr<ASBZRoomVolume>> DespawnRoomConnection;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<ASBZAIDefensePoint>, TSoftObjectPtr<ASBZRoomVolume>> DefenseRoomConnection;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<ASBZAIProtectPoint>, TSoftObjectPtr<ASBZRoomVolume>> ProtectRoomConnection;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<ASBZAgilityNavLink>, FSBZAgilityNavlinkRooms> AgilityNavlinkConnection;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<AActor>, FSBZAgilityNavlinkRooms> ConnectorComponentConnection;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<ASBZAkAcousticPortal>, TSoftObjectPtr<ASBZGate>> AcousticPortalConnection;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> LifeActionMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZLifeActionComponent*> LifeActionComponents;
    
public:
    ASBZWorldSettings(const FObjectInitializer& ObjectInitializer);

};

