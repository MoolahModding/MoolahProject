#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESBZMetaRequestResult.h"
#include "OnPlayerLoadoutConfigChangedDelegate.h"
#include "SBZOnActiveLoadoutIndexChangedDelegate.h"
#include "SBZPlayerLoadoutConfig.h"
#include "SBZLoadoutManager.generated.h"

class USBZLoadoutManager;

UCLASS(Blueprintable)
class USBZLoadoutManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnActiveLoadoutIndexChanged OnActiveLoadoutIndexChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerLoadoutConfigChanged OnLocalPlayerLoadoutChanged;
    
    USBZLoadoutManager();

    UFUNCTION(BlueprintCallable)
    void SetLoadoutAtIndex(int32 LoadoutIndex, const FSBZPlayerLoadoutConfig& InLoadoutConfig);
    
    UFUNCTION(BlueprintCallable)
    ESBZMetaRequestResult SetActiveLoadoutIndex(int32 ActiveLoadoutIndex);
    
    UFUNCTION(BlueprintCallable)
    void SendLoadoutName(const int32 LoadoutIndex, const FString& LoadoutName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSBZPlayerLoadoutConfig> GetPlayerLoadouts();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetLoadoutName(const int32 LoadoutIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZLoadoutManager* GetLoadoutManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetActiveLoadoutIndex() const;
    
};

