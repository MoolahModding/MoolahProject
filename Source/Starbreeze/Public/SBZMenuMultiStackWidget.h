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
    TArray<FName> GetStackValues() const;
    
    UFUNCTION(BlueprintPure)
    FName GetActiveStackValue() const;
    
};

