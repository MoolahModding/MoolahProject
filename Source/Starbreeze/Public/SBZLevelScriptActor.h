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
    ASBZLevelScriptActor();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULevelStreamingDynamic* SBZPlaceRandomSublevelBySoftObjectPtr(UObject* WorldContextObject, const TSoftObjectPtr<UWorld> Level, const FTransform& RoomTransform, bool& bOutSuccess);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULevelStreamingDynamic* SBZPlaceRandomSublevel(UObject* WorldContextObject, const FString& LevelName, const FVector Location, const FRotator Rotation, bool& bOutSuccess);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RandomPlacementStarted(const FRandomStream& RandomStream);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OutroSequenceStarted(const int32 OutroVariation);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnRandomSublevelPlaced();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnRandomPlacementStarted();
    
protected:
    UFUNCTION()
    void OnRandomizedRoomShown();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnPreplanningAssetsTagsApplied(const TArray<FGameplayTag>& PreplanningAssetsTags);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayerPickedUpBag(FSBZBagHandle BagHandle);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayerInstantLootTaken(ASBZInstantLoot* InstantLoot, ASBZPlayerCharacter* TakenByPlayer);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayerDefeatStateChanged(ASBZPlayerState* PlayerState, EPD3DefeatState OldDefeatState, EPD3DefeatState DefeatState);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnOverkillWeaponRequested();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void OnOptionalObjectiveComplete(const int32 ObjectiveNumber);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnLevelModifiersApplied(ESBZDifficulty InDifficulty, const TArray<ESBZSecurityCompany>& InCompanies);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDifficultyModifierApplied(ESBZDifficulty InDifficulty);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAllRandomizedRoomsPlaced();
    
    UFUNCTION(BlueprintImplementableEvent)
    void IntroSequenceStarted();
    
    UFUNCTION(BlueprintImplementableEvent)
    void HeistStateChanged(EPD3HeistState OldHeistState, EPD3HeistState CurrentHeistState);
    
protected:
    UFUNCTION()
    void HandleOutroSequenceStarted(const int32 OutroVariation);
    
    UFUNCTION()
    void HandleIntroSequenceStarted();
    
    UFUNCTION()
    void HandleBlackScreenStarted();
    
    UFUNCTION()
    void HandleActionPhaseStarted();
    
public:
    UFUNCTION(BlueprintPure)
    int32 GetRandomIntegerFromStreamMixed(int32 Max, int32 MixedSeed);
    
    UFUNCTION(BlueprintPure)
    int32 GetRandomIntegerFromLevelStream(int32 Max);
    
    UFUNCTION(BlueprintPure)
    bool GetRandomBoolWithWeightFromStreamMixed(float Weight, int32 MixedSeed);
    
    UFUNCTION(BlueprintPure)
    bool GetRandomBoolWithWeightFromLevelStream(float Weight);
    
    UFUNCTION(BlueprintCallable)
    void EndOutroSequence();
    
    UFUNCTION(BlueprintCallable)
    void EndIntroSequence();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void CriteriaObjectiveComplete(const USBZStatisticCriteriaData* StatisticData);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent)
    void CallPlaced();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BlackScreenStarted();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ActionPhaseStarted();
    
};

