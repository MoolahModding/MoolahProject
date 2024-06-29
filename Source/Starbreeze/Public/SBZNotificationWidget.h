#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SBZNotificationWidget.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class USBZNotificationWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* BodyText;
    
public:
    USBZNotificationWidget();

    UFUNCTION(BlueprintCallable)
    void SetupWidget(UTextBlock* InTextBlock);
    
    UFUNCTION(BlueprintCallable)
    void SetNotificationText(const FText& InTextToDisplay);
    
};

