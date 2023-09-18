#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "EPD3DefeatState.h"
#include "EPD3HeistState.h"
#include "ESBZDifficulty.h"
#include "ESBZSecurityCompany.h"
#include "SBZBagHandle.h"
#include "SBZLevelScriptActorBase.h"
#include "SBZLevelScriptActor.generated.h"

class ASBZInstantLoot;
class ASBZPlayerCharacter;
class ASBZPlayerState;
class ULevelStreamingDynamic;
class UObject;
class USBZStatisticCriteriaData;
class UWorld;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZLevelScriptActor : public ASBZLevelScriptActorBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Seed;
    
public:
    ASBZLevelScriptActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULevelStreamingDynamic* SBZPlaceRandomSublevelBySoftObjectPtr(UObject* WorldContextObject, const TSoftObjectPtr<UWorld> Level, const FTransform& RoomTransform, bool& bOutSuccess);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULevelStreamingDynamic* SBZPlaceRandomSublevel(UObject* WorldContextObject, const FString& LevelName, const FVector Location, const FRotator Rotation, bool& bOutSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RandomPlacementStarted(const FRandomStream& RandomStream);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OutroSequenceStarted(const int32 OutroVariation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRandomSublevelPlaced();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRandomPlacementStarted();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRandomizedRoomShown();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreplanningAssetsTagsApplied(const TArray<FGameplayTag>& PreplanningAssetsTags);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerPickedUpBag(FSBZBagHandle BagHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerInstantLootTaken(ASBZInstantLoot* InstantLoot, ASBZPlayerCharacter* TakenByPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerDefeatStateChanged(ASBZPlayerState* PlayerState, EPD3DefeatState OldDefeatState, EPD3DefeatState DefeatState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOverkillWeaponRequested();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void OnOptionalObjectiveComplete(const int32 ObjectiveNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLevelModifiersApplied(ESBZDifficulty InDifficulty, const TArray<ESBZSecurityCompany>& InCompanies);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDifficultyModifierApplied(ESBZDifficulty InDifficulty);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAllRandomizedRoomsPlaced();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void IntroSequenceStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HeistStateChanged(EPD3HeistState OldHeistState, EPD3HeistState CurrentHeistState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleOutroSequenceStarted(const int32 OutroVariation);
    
    UFUNCTION(BlueprintCallable)
    void HandleIntroSequenceStarted();
    
    UFUNCTION(BlueprintCallable)
    void HandleBlackScreenStarted();
    
    UFUNCTION(BlueprintCallable)
    void HandleActionPhaseStarted();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRandomIntegerFromStreamMixed(int32 Max, int32 MixedSeed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRandomIntegerFromLevelStream(int32 Max);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetRandomBoolWithWeightFromStreamMixed(float Weight, int32 MixedSeed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetRandomBoolWithWeightFromLevelStream(float Weight);
    
    UFUNCTION(BlueprintCallable)
    void EndOutroSequence();
    
    UFUNCTION(BlueprintCallable)
    void EndIntroSequence();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void CriteriaObjectiveComplete(const USBZStatisticCriteriaData* StatisticData);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void CallPlaced();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlackScreenStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ActionPhaseStarted();
    
};

