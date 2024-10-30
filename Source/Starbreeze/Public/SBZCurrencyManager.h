#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESBZCurrencyCode.h"
#include "SBZPlayerCurrencyBalanceData.h"
#include "SBZCurrencyManager.generated.h"

class ASBZPlayerState;
class USBZCurrencyManager;
class USBZGetCurrencyRequestQueue;

UCLASS(Blueprintable)
class USBZCurrencyManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZPlayerCurrencyBalanceData PlayerCurrencyBalance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZGetCurrencyRequestQueue* GetCurrencyRequestQueue;
    
public:
    USBZCurrencyManager();

    UFUNCTION(BlueprintCallable)
    void SubtractCurrency(ASBZPlayerState* SBZPlayerState, ESBZCurrencyCode Type, int64 Amount);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrency(ESBZCurrencyCode Type, int64 Cost);
    
    UFUNCTION(BlueprintPure)
    int64 GetCurrentAmount(ESBZCurrencyCode Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZCurrencyManager* GetCurrencyManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    bool CanAfford(ESBZCurrencyCode Type, int64 Cost) const;
    
    UFUNCTION(BlueprintCallable)
    void AddCurrency(ASBZPlayerState* SBZPlayerState, ESBZCurrencyCode Type, int64 Amount);
    
};

