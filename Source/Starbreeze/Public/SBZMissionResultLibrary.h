#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SBZCharacterEndMissionResultData.h"
#include "SBZEndMissionResultData.h"
#include "SBZEquippableEndMissionResultData.h"
#include "SBZPlayerEndMissionResultData.h"
#include "SBZMissionResultLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class USBZMissionResultLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZMissionResultLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetTotalNumberOfSecuredBags(const FSBZEndMissionResultData& Resultdata);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSBZPlayerEndMissionResultData GetPlayerData(const FSBZEndMissionResultData& ResultData, int32 PlayerId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetPlayerCashReward(const UObject* WorldContextObject, const FSBZEndMissionResultData& ResultData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSBZEquippableEndMissionResultData GetEquippableData(const FSBZCharacterEndMissionResultData& CharacterData, int32 EquippableIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetCurrentPlayerEquippableAccuracy(const UObject* WorldContextObject, const FSBZEndMissionResultData& ResultData, int32 EquippableIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetAllPlayersHaveSpecialKilledCount(const FSBZEndMissionResultData& ResultData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetAllPlayersHaveKilledCount(const FSBZEndMissionResultData& ResultData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetAllPlayersHaveGuardKilledCount(const FSBZEndMissionResultData& ResultData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetAllPlayersHaveCivilianKilledCount(const FSBZEndMissionResultData& ResultData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetAllPlayersEquippableAccuracy(const FSBZEndMissionResultData& ResultData, int32 EquippableIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetAllPlayersBeenRevivedCount(const FSBZEndMissionResultData& ResultData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetAllPlayersBeenKilledCount(const FSBZEndMissionResultData& ResultData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetAllPlayersBeenDefeatedCount(const FSBZEndMissionResultData& ResultData);
    
};

