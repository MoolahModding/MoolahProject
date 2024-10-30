#pragma once
#include "CoreMinimal.h"
#include "ESBZCurrencyCode.h"
#include "SBZWidgetBase.h"
#include "SBZCurrencyWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZCurrencyWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZCurrencyCode CurrencyType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 CurrencyValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOwnerCurrency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAffordedChecked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsAfforded;
    
public:
    USBZCurrencyWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void SetCurrencyValue(int64 InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrencyType(ESBZCurrencyCode InCurrencyType);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCurrencyValueChanged(int64 NewValue, bool bIsInitial);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCurrencyTypeChanged(ESBZCurrencyCode InCurrencyType, bool bIsInitial);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAffordedChanged(bool bInIsAfforded, bool bIsInitial);
    
};

