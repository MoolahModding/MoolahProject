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
    UFUNCTION(BlueprintCallable)
    void SetInternetConnected(ESBZServiceStatus ServiceStatus);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetErrorText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetErrorHeader() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZMenuButton* GetButton_ReturnToMainMenu() const;
    
};

