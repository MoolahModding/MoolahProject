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
    UFUNCTION(BlueprintCallable)
    void OnStackStateChanged(FSBZUIStackChangedEvent UIStackStateChangedEvent);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRemovedFromStack();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLostStackFocused();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGainedStackFocused(const FName& PreviousValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAddedToStack();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetStackValue() const;
    
};

