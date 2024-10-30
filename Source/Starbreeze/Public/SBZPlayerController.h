#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "ChallengeNotifPayload.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/OnlineReplStructs.h"
#include "GameplayTagContainer.h"
#include "EPD3DefeatState.h"
#include "SBZDamageInstigatorInterface.h"
#include "SBZFactionIdHelper.h"
#include "SBZLocalPlayerFeedbackParameters.h"
#include "SBZLockCameraData.h"
#include "SBZPlayerControllerBase.h"
#include "Templates/SubclassOf.h"
#include "SBZPlayerController.generated.h"

class AActor;
class ISBZViewTargetCollectionInterface;
class USBZViewTargetCollectionInterface;
class UAnimMontage;
class UObject;
class USBZLocalPlayerFeedback;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZPlayerController : public ASBZPlayerControllerBase, public IGenericTeamAgentInterface, public ISBZDamageInstigatorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZFactionIdHelper Faction;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZLocalPlayerFeedback> DefeatCameraFeedbackClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDefeatCameraFeedbackIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZLocalPlayerFeedback> TasedCameraFeedbackClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZLocalPlayerFeedback> SubduedCameraFeedbackClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZLocalPlayerFeedback> HealthDamageCameraFeedbackClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthDamageCameraFeedbackThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, TSubclassOf<USBZLocalPlayerFeedback>> TagFeedbackClassMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> TagFeedbackIDMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> FadedOutTagFeedbackIDMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZLocalPlayerFeedback> ViewTargetCameraFeedbackClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZLocalPlayerFeedback> DestroyedViewTargetCameraFeedbackClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZLocalPlayerFeedback> ChangedViewTargetCameraFeedbackClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TScriptInterface<ISBZViewTargetCollectionInterface> ViewTargetCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentSpectateTargetPlayerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZLockCameraData InteractionLockCameraData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPD3DefeatState AppliedDefeatState;
    
public:
    ASBZPlayerController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetViewTargetCollection(const TScriptInterface<ISBZViewTargetCollectionInterface>& InViewTargetCollection, int32 Offset);
    
    UFUNCTION(BlueprintCallable)
    bool SetCameraFeedbackIntensity(int32 CameraFeedbackID, float Intensity);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_UnsetViewTargetCollection();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetViewTargetCollection(UObject* InViewTargetCollectionObject, int32 InViewTargetIndex);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetPartyCode(const FString& PartyCode);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetCurrentViewTargetIndex(int32 InViewTargetIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetCurrentSpectateTargetPlayerID(int32 InID);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_RestartRequested(FUniqueNetIdRepl PlayerID);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RestartLevel();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RequestMergeParty(bool bIsSelected, const TArray<FString>& PartyMemberPlayerIdArray);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_HostRestartRequested(FUniqueNetIdRepl PlayerID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_DebugTeleportTo(const FVector& Location, const float Yaw);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_DebugPlayMontage(AActor* Actor, UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_CheckIfPartyLeader(const bool bMergePartySelected, const bool bIsPartyLeader, const int32 NumberOfPartyMembers);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveCameraFeedback(int32 CameraFeedbackID);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerCameraManagerEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TScriptInterface<ISBZViewTargetCollectionInterface> GetViewTargetCollection() const;
    
    UFUNCTION(BlueprintCallable)
    bool FadeOutCameraFeedback(int32 CameraFeedbackID, bool bIsAutoRemoved);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReceiveReward(const FChallengeNotifPayload& ChallengeReward);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_UnsetViewTargetCollection();
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SkipCreateMergeParty();
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetViewTargetCollection(UObject* InViewTargetCollectionObject, int32 InViewTargetIndex);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_RestartTimeExpired();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_RestartInitiate(float SecondsRemaining);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_RestartAccepted(const FUniqueNetIdRepl& PlayerID);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_CheckIfPartyLeaderResponse(bool bIsPartyLeader, const FString& PartyCode);
    
    UFUNCTION(BlueprintCallable)
    int32 ApplyCameraFeedback(UPARAM(Ref) FSBZLocalPlayerFeedbackParameters& Parameters);
    

    // Fix for true pure virtual functions not being implemented
};

