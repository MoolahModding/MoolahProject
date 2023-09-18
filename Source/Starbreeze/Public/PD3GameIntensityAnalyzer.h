#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "EPD3HeistState.h"
#include "PD3GameIntensityAnalyzer.generated.h"

class UAkStateValue;
class UAkSwitchValue;
class UClass;
class UPD3GameIntensityAnalyzer;
class USBZDialogDataAsset;

UCLASS(Blueprintable, DefaultToInstanced)
class UPD3GameIntensityAnalyzer : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkStateValue* SystemStates[9];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkSwitchValue* MusicSwitches[9];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<UAkSwitchValue*> SuspenseSwitches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZDialogDataAsset* AnticipationDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZDialogDataAsset* AssaultDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZDialogDataAsset* ControlDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZDialogDataAsset* PointOfNoReturnDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZDialogDataAsset* PointOfNoReturnReminderDialog;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval PointOfNoReturnReminderDelaySeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, USBZDialogDataAsset*> ThreatDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UClass*, USBZDialogDataAsset*> SquadDialog;
    
public:
    UPD3GameIntensityAnalyzer();

protected:
    UFUNCTION(BlueprintCallable)
    void HandleSuspenseValueChanged(uint8 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void HandleProgressionIndexChanged();
    
    UFUNCTION(BlueprintCallable)
    void HandleGameStateChanged(EPD3HeistState OldState, EPD3HeistState NewState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPD3GameIntensityAnalyzer* GetGameIntensityAnalyzer(UObject* WorldContextObject);
    
};

