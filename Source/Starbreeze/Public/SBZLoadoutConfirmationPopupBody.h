#pragma once
#include "CoreMinimal.h"
#include "SBZWeaponPartProgressionCurrent.h"
#include "SBZWidgetBase.h"
#include "SBZLoadoutConfirmationPopupBody.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZLoadoutConfirmationPopupBody : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZWeaponPartProgressionCurrent ProgressionItemUIData;
    
public:
    USBZLoadoutConfirmationPopupBody();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemDataInitialized();
    
};

