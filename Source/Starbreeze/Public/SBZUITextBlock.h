#pragma once
#include "CoreMinimal.h"
#include "Components/SlateWrapperTypes.h"
#include "Components/TextBlock.h"
#include "Templates/SubclassOf.h"
#include "SBZUITextBlock.generated.h"

class USBZColorStyle;
class USBZTextStyle;
class USBZUITextScrollStyle;

UCLASS(Blueprintable, DefaultConfig, Config=StarbreezeUI)
class STARBREEZE_API USBZUITextBlock : public UTextBlock {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZColorStyle* ColorStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZTextStyle* Style;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZUITextScrollStyle> ScrollStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsScrollingEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableHideTextOnEmpty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility OnEmptyVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility OnNotEmptyVisbility;
    
public:
    USBZUITextBlock();

    UFUNCTION(BlueprintCallable)
    void SetStyle(USBZTextStyle* InStyle);
    
    UFUNCTION(BlueprintCallable)
    void SetScrollingEnabled(bool bInIsScrollingEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetColorStyle(USBZColorStyle* InStyle);
    
    UFUNCTION(BlueprintCallable)
    void ResetScrollState();
    
};

