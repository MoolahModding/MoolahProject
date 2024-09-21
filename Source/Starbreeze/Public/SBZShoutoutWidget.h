#pragma once
#include "CoreMinimal.h"
#include "SBZWidgetBase.h"
#include "SBZShoutoutWidget.generated.h"

class USBZCircularInteractionWidget;

UCLASS(Blueprintable, EditInlineNew)
class USBZShoutoutWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ShoutoutActionName;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZCircularInteractionWidget* Widget_CallWidget;
    
public:
    USBZShoutoutWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OnShoutoutReleased();
    
    UFUNCTION(BlueprintCallable)
    void OnShoutoutPressed();
    
};

