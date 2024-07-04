#pragma once
#include "CoreMinimal.h"
#include "SBZMenuButton.h"
#include "SBZOnSelectorOptionChangedDelegate.h"
#include "SBZSelectorWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZSelectorWidget : public USBZMenuButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnSelectorOptionChanged SelectionOptionChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectionCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentIndex;
    
public:
    USBZSelectorWidget();

    UFUNCTION(BlueprintCallable)
    void SetSelectionCount(int32 NewSelectionCount);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentIndex(int32 DesiredIndex);
    
    UFUNCTION(BlueprintCallable)
    void SelectRight();
    
    UFUNCTION(BlueprintCallable)
    void SelectLeft();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSelectionOptionChanged(int32 InCurrentIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSelectedRight();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSelectedLeft();
    
};

