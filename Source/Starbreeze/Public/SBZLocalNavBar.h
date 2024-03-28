#pragma once
#include "CoreMinimal.h"
#include "OnIndexChangedDelegate.h"
#include "SBZWidgetBase.h"
#include "SBZLocalNavBar.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZLocalNavBar : public USBZWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> NavigationButtonNames;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnIndexChanged OnIndexChanged;
    
    USBZLocalNavBar();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RebuildNavbar();
    
};

