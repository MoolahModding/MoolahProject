#pragma once
#include "CoreMinimal.h"
#include "ESBZSecurityCompany.h"
#include "SBZWidgetBase.h"
#include "SBZSecurityCompanyVisualsWidget.generated.h"

class UPD3SecurityCompanyDataAsset;

UCLASS(Blueprintable, EditInlineNew)
class USBZSecurityCompanyVisualsWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZSecurityCompany SecurityCompanyEnum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPD3SecurityCompanyDataAsset* SecurityCompanyAsset;
    
public:
    USBZSecurityCompanyVisualsWidget();
    UFUNCTION(BlueprintCallable)
    void SetEmpty();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSecurityCompanyAssetStartedLoad();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSecurityCompanyAssetLoaded();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEmptySet();
    
private:
    UFUNCTION()
    void NativeOnAssetLoaded();
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializeSecurityCompany(const ESBZSecurityCompany InSecurityCompany);
    
    UFUNCTION(BlueprintPure)
    ESBZSecurityCompany GetSecurityCompanyEnum() const;
    
    UFUNCTION(BlueprintPure)
    UPD3SecurityCompanyDataAsset* GetSecurityCompany() const;
    
};

