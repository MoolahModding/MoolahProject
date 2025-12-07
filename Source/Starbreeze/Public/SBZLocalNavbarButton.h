#pragma once
#include "CoreMinimal.h"
#include "SBZMenuButton.h"
#include "SBZLocalNavbarButton.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZLocalNavbarButton : public USBZMenuButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 NavBarIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MinWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsSecondLayer;
    
    USBZLocalNavbarButton();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetActive(bool bIsActive);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializeButton(const FText& ButtonText);
    
};

