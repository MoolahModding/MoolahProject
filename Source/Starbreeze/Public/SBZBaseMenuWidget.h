#pragma once
#include "CoreMinimal.h"
#include "SBZControlsReference.h"
#include "SBZInternetStatusWidget.h"
#include "SBZBaseMenuWidget.generated.h"

class USBZControlsReferenceWidget;

UCLASS(Blueprintable, EditInlineNew)
class USBZBaseMenuWidget : public USBZInternetStatusWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZControlsReferenceWidget* Widget_ControlsReference;
    
public:
    USBZBaseMenuWidget();
private:
    UFUNCTION()
    void OnActiveControlsReferenceChanged(const FSBZControlsReference& InControlsReference);
    
    UFUNCTION()
    void HideControlsReference();
    
};

