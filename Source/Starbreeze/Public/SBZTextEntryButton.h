#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "OnTextButtonSubmittedTextDelegate.h"
#include "SBZMenuButton.h"
#include "SBZTextEntryButton.generated.h"

class UEditableText;

UCLASS(Blueprintable, EditInlineNew)
class USBZTextEntryButton : public USBZMenuButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableText* EditableText_TextInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSanitizeInputText;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTextButtonSubmittedText OnTextSubmitted;
    
public:
    USBZTextEntryButton();

    UFUNCTION(BlueprintCallable)
    void SetInputText(const FText& InText);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTextCommited(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCurrentText() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EditingText(bool bInIsEditingText);
    
};

