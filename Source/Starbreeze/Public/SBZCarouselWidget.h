#pragma once
#include "CoreMinimal.h"
#include "Components/PanelWidget.h"
#include "OnCurrentPageIndexChangedDelegate.h"
#include "SBZCarouselWidget.generated.h"

class UWidget;

UCLASS(Blueprintable, DefaultConfig, Config=StarbreezeUI)
class STARBREEZE_API USBZCarouselWidget : public UPanelWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCurrentPageIndexChanged OnCurrentPageIndexChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActiveIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollSpeed;
    
    USBZCarouselWidget();

    UFUNCTION(BlueprintCallable)
    void StopScrolling();
    
    UFUNCTION(BlueprintCallable)
    void StartScrolling(float InScrollInterval);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveWidgetIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveWidget(UWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    void PreviousPage();
    
    UFUNCTION(BlueprintCallable)
    void NextPage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWidget* GetWidgetAtIndex(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetActiveIndex() const;
    
};

