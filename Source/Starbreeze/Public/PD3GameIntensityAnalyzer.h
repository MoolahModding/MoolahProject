#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "EPD3HeistState.h"
#include "SBZBagHandle.h"
#include "Templates/SubclassOf.h"
#include "PD3GameIntensityAnalyzer.generated.h"

class AActor;
class UAkStateValue;
class UAkSwitchValue;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UPD3GameIntensityAnalyzer;
class URetainerBox;
class USBZAIOrder;
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
    TMap<TSubclassOf<USBZAIOrder>, USBZDialogDataAsset*> SquadDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZDialogDataAsset*> SecuredBagDialogArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZDialogDataAsset*> SecuredBagLeftDialogArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* HUDGlitchMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GlitchTickInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GlitchStrengthModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GlitchMinimumDotModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GlitchStrengthParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GlitchTextureParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GlitchActiveParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<AActor*, float> GlitchEffectSourceMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<URetainerBox*> GlitchRetainerBoxArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* HUDGlitchDynamicMaterialInstance;
    
public:
    UPD3GameIntensityAnalyzer();

    UFUNCTION(BlueprintCallable)
    void RemoveGlitchEffectSourceActor(AActor* Actor);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnExitedActionPhase();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleSuspenseValueChanged(uint8 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void HandleProgressionIndexChanged();
    
    UFUNCTION(BlueprintCallable)
    void HandleGameStateChanged(EPD3HeistState OldState, EPD3HeistState NewState);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleBagSecured(const FSBZBagHandle& BagHandle, int32 SecuredCount, int32 TotalLeftToSecure);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPD3GameIntensityAnalyzer* GetGameIntensityAnalyzer(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void AddGlitchRetainerBox(URetainerBox* RetainerBox);
    
    UFUNCTION(BlueprintCallable)
    void AddGlitchEffectSourceActor(AActor* Actor, float Range);
    
};

