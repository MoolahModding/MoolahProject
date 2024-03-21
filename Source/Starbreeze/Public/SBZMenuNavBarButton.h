#pragma once
#include "CoreMinimal.h"
#include "SBZMenuStackWidget.h"
#include "SBZNavButtonParameters.h"
#include "SBZMenuNavBarButton.generated.h"

class USBZMenuNavBar;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class USBZMenuNavBarButton : public USBZMenuStackWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_ButtonDisplayText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZMenuNavBar* OwningNavBar;
    
public:
    USBZMenuNavBarButton();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHovered(bool bIsHovered);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnButtonInitialized(const FSBZNavButtonParameters& ButtonParams);
    
};

