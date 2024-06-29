#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DeveloperSettings.h"
#include "SBZHeistDataLevelPair.h"
#include "SBZHeistDeveloperSettings.generated.h"

class UPD3HeistDataAsset;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class USBZHeistDeveloperSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZHeistDataLevelPair> HeistLevelPairArray;
    
public:
    USBZHeistDeveloperSettings();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UPD3HeistDataAsset* GetHeistDataFromLevelShortName(const FString& ShortName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UPD3HeistDataAsset* GetHeistDataFromLevelPath(FSoftObjectPath LevelPath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FSBZHeistDataLevelPair> GetAllHeistData();
    
};

