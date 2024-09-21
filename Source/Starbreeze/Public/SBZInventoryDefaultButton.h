#pragma once
#include "CoreMinimal.h"
#include "SBZMenuButton.h"
#include "SBZInventoryDefaultButton.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZInventoryDefaultButton : public USBZMenuButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEquipped;
    
public:
    USBZInventoryDefaultButton();

    UFUNCTION(BlueprintCallable)
    void NativeDefaultEquipped(bool bEquipped);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DefaultEquipped(bool bEquipped);
    
};

