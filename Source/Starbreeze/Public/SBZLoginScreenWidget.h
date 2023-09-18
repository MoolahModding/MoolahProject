#pragma once
#include "CoreMinimal.h"
#include "SBZMenuStackWidget.h"
#include "SBZLoginScreenWidget.generated.h"

class USBZMenuButton;

UCLASS(Blueprintable, EditInlineNew)
class USBZLoginScreenWidget : public USBZMenuStackWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ProdAccountCreateURLGameSense;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DevAccountCreateURLGameSense;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ProdAccountCreateURL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DevAccountCreateURL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldHideCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowCloseButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZMenuButton* Button_CreateAccountWebBrowser;
    
public:
    USBZLoginScreenWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowLoginFailedMessage();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnWebPageClosed(const FString& InFinalWebURL);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCreateAccountWindowClosed(const FString& InLastURL);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnCreateAccountBrowserSelected(USBZMenuButton* InSelectedButton);
    
};

