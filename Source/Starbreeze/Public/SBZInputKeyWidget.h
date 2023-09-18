#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "SBZWidgetBase.h"
#include "SBZInputKeyWidget.generated.h"

class UPaperSprite;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZInputKeyWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInverted;
    
public:
    USBZInputKeyWidget();

    UFUNCTION(BlueprintCallable)
    void SetKey(FKey InKey);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetInverted(bool bInInverted);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnKeyNameChanged(const FString& NewActionKeyName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnKeyIconChanged(UPaperSprite* NewActionKeyIcon);
    
};

