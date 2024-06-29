#pragma once
#include "CoreMinimal.h"
#include "AITypes.h"
#include "Navigation/PathFollowingComponent.h"
#include "GameFramework/Character.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ESBZHoldOutModeDifficulty.h"
#include "ESBZHoldOutObjectiveResult.h"
#include "SBZAIConfigDPSData.h"
#include "SBZGameplayTagCounterArray.h"
#include "SBZGameplayTagCounterArrayOwnerInterface.h"
#include "SBZHoldOutAreaCompleteDelegate.h"
#include "SBZHoldOutDroneFogSettings.h"
#include "SBZHoldOutDroneReactionArray.h"
#include "SBZHoldOutDroneTagReactionConfigArray.h"
#include "SBZHoldOutObjectiveProgressChangedDelegate.h"
#include "SBZHoldOutObjectiveResultDelegate.h"
#include "SBZHoldOutObjectiveStartedDelegate.h"
#include "Templates/SubclassOf.h"
#include "SBZHoldOutAIDrone.generated.h"

class ASBZHoldOutArea;
class ASBZObjective;
class UAkComponent;
class UGameplayEffect;
class USBZAbilitySystemComponent;
class USBZHoldOutFogApplierComponent;
class USBZHoldOutObjectiveBase;

UCLASS(Blueprintable)
class ASBZHoldOutAIDrone : public ACharacter, public ISBZGameplayTagCounterArrayOwnerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZHoldOutObjectiveStarted OnObjectiveStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZHoldOutObjectiveResult OnObjectiveResultChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZHoldOutObjectiveProgressChanged OnObjectiveProgressChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZHoldOutAreaComplete OnAreaCompleted;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASBZHoldOutArea*> HoldOutAreas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FSBZGameplayTagCounterArray GameplayTagCounterArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FSBZHoldOutDroneTagReactionConfigArray> TagReactionSpawnConfigs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FSBZHoldOutDroneReactionArray> TagDroneReactions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> TagsForCurrentObjectives;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAIConfigDPSData AIDPS[6];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZObjective* FollowDroneObjective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZAbilitySystemComponent* AbilitySystemComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZHoldOutFogApplierComponent* FogApplierComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AKComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZHoldOutModeDifficulty CurrentDifficulty;
    
public:
    ASBZHoldOutAIDrone(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void StopOverrideFogSettings();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetGameplayTag(const FGameplayTag& Tag, int32 Count);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void OverrideFogSettings(const FSBZHoldOutDroneFogSettings& FogSettings, float OverrideDuration);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnObjectiveStartedCallBack(USBZHoldOutObjectiveBase* Objective, const FGameplayTagContainer& GrantedTags, const FGameplayTagContainer& RemovedTags);
    
    UFUNCTION(BlueprintCallable)
    void OnObjectiveResultChangedCallBack(const ESBZHoldOutObjectiveResult Result, USBZHoldOutObjectiveBase* Objective, const FGameplayTagContainer& GrantedTags, const FGameplayTagContainer& RemovedTags);
    
    UFUNCTION(BlueprintCallable)
    void OnObjectiveProgressChangedCallBack(USBZHoldOutObjectiveBase* Objective, int32 OldProgressCount, int32 NewProgressCount, const FGameplayTagContainer& GrantedTags, const FGameplayTagContainer& RemovedTags);
    
    UFUNCTION(BlueprintCallable)
    void OnMoveCompleted(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    
    UFUNCTION(BlueprintCallable)
    void OnAreaCompletedCallBack(bool bSuccess, ASBZHoldOutArea* HoldOutArea);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ApplyGamePlayEffectOnEnemies(TSubclassOf<UGameplayEffect> GameplayEffectClass);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void MoveToNextHoldOutArea();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGameplayTagCount(const FGameplayTag& Tag) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ClearTagsForCurrentObjectives();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ApplyGamePlayEffectOnEnemies(TSubclassOf<UGameplayEffect> GameplayEffectClass);
    

    // Fix for true pure virtual functions not being implemented
};

