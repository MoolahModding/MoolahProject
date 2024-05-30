#pragma once
#include "CoreMinimal.h"
#include "SBZControlsReference.h"
#include "SBZPlayerStatePawnWidgetBase.h"
#include "PD3HUDPlayerCarryWidget.generated.h"

class USBZCarryType;

UCLASS(Blueprintable, EditInlineNew)
class UPD3HUDPlayerCarryWidget : public USBZPlayerStatePawnWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZControlsReference DefaultControlsReference;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZCarryType*> CurrentCarryTypeArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentControlsReferenceID;
    
public:
    UPD3HUDPlayerCarryWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnCarryTypePickedUp(const USBZCarryType* PickedUpCarryType);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnCarryTypeDropped(const USBZCarryType* DroppedCarryType);
    
};

