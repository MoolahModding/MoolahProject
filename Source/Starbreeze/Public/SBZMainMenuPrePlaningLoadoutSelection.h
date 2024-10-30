#pragma once
#include "CoreMinimal.h"
#include "OnPlayerLoadoutConfigChangedDelegate.h"
#include "SBZPlayerLoadoutConfig.h"
#include "SBZWidgetBase.h"
#include "SBZMainMenuPrePlaningLoadoutSelection.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuPrePlaningLoadoutSelection : public USBZWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldUseActionBindings;
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerLoadoutConfigChanged OnFocusedPlayerLoadoutConfigChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 FocusedPlayerLoadoutIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsValidLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MoveForwardActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MoveBackwardActionName;
    
public:
    USBZMainMenuPrePlaningLoadoutSelection();

    UFUNCTION(BlueprintCallable)
    void UnbindGamepadActions();
    
    UFUNCTION(BlueprintCallable)
    void SetFocusedPlayerLoadoutIndex(int32 NewFocusedPlayerLoadoutIndex);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLocalLoadoutUpdated(const FSBZPlayerLoadoutConfig& InPlayerLoadout, int32 ModifiedPlayerLoadoutIndex);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLoadoutIncrement();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLoadoutDecrement();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputTypeChangedToGamepad(bool bIsGamepad);
    
private:
    UFUNCTION(BlueprintCallable)
    void NativeOnFocusedPlayerLoadoutConfigChanged(const FSBZPlayerLoadoutConfig& NewPlayerLoadout);
    
    UFUNCTION(BlueprintCallable)
    void NativeOnActiveLoadoutChanged(int32 NewActiveLoadoutIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFocusedPlayerLoadoutValid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFocusedPlayerLoadoutIndex() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FocusedPlayerLoadoutConfigChanged(const FSBZPlayerLoadoutConfig& NewPlayerLoadout);
    
public:
    UFUNCTION(BlueprintCallable)
    void BindGamepadActions();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ActiveLoadoutChanged(int32 NewActiveLoadoutIndex);
    
};

