#pragma once
#include "CoreMinimal.h"
#include "SBZMenuStackWidget.h"
#include "SBZMenuStackScreenWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZMenuStackScreenWidget : public USBZMenuStackWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldListenForUIBackEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPopStackOnBackPressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BackActionName;
    
public:
    USBZMenuStackScreenWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBackPressed();
    
    UFUNCTION(BlueprintCallable)
    void NativeOnBackPressed();
    
};

