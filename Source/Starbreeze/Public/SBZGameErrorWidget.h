#pragma once
#include "CoreMinimal.h"
#include "ESBZServiceStatus.h"
#include "SBZInternetStatusWidget.h"
#include "SBZGameErrorWidget.generated.h"

class USBZMenuButton;

UCLASS(Blueprintable, EditInlineNew)
class USBZGameErrorWidget : public USBZInternetStatusWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZMenuButton* Button_ReturnToMainMenu;
    
public:
    USBZGameErrorWidget();
private:
    UFUNCTION()
    void SetInternetConnected(ESBZServiceStatus ServiceStatus);
    
public:
    UFUNCTION(BlueprintPure)
    FText GetErrorText() const;
    
    UFUNCTION(BlueprintPure)
    FText GetErrorHeader() const;
    
    UFUNCTION(BlueprintPure)
    USBZMenuButton* GetButton_ReturnToMainMenu() const;
    
};

