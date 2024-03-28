#pragma once
#include "CoreMinimal.h"
#include "SBZMenuButton.h"
#include "SBZBlackMarketVendorButton.generated.h"

class USBZVendorData;

UCLASS(Blueprintable, EditInlineNew)
class USBZBlackMarketVendorButton : public USBZMenuButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZVendorData* VendorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsActiveVendor;
    
public:
    USBZBlackMarketVendorButton();
    UFUNCTION(BlueprintCallable)
    void SetActiveVendor(bool bInIsActiveVendor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnVendorDataInitialized(const USBZVendorData* InVendorData);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnActiveVendorSet(bool bInIsActiveVendor);
    
    UFUNCTION(BlueprintCallable)
    void InitializeVendorData(const USBZVendorData* InVendorData);
    
    UFUNCTION(BlueprintPure)
    USBZVendorData* GetVendorData() const;
    
};

