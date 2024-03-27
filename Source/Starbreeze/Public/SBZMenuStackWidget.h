#pragma once
#include "CoreMinimal.h"
#include "SBZUIStackChangedEvent.h"
#include "SBZWidgetBase.h"
#include "SBZMenuStackWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZMenuStackWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StackValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasStackFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOnStack;
    
public:
    USBZMenuStackWidget();
private:
    UFUNCTION()
    void OnStackStateChanged(FSBZUIStackChangedEvent UIStackStateChangedEvent);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnRemovedFromStack();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnLostStackFocused();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnGainedStackFocused(const FName& PreviousValue);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAddedToStack();
    
public:
    UFUNCTION(BlueprintPure)
    FName GetStackValue() const;
    
};

