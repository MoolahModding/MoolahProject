#pragma once
#include "CoreMinimal.h"
#include "SBZUIStackChangedEvent.h"
#include "SBZWidgetBase.h"
#include "SBZMenuMultiStackWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZMenuMultiStackWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> StackValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasStackFocus;
    
public:
    USBZMenuMultiStackWidget();

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
    TArray<FName> GetStackValues() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetActiveStackValue() const;
    
};

