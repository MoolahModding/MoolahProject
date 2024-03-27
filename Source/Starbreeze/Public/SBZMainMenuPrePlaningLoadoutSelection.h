#pragma once
#include "CoreMinimal.h"
#include "OnPlayerLoadoutConfigChangedDelegate.h"
#include "SBZMenuButton.h"
#include "SBZPlayerLoadoutConfig.h"
#include "SBZMainMenuPrePlaningLoadoutSelection.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuPrePlaningLoadoutSelection : public USBZMenuButton {
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
    UFUNCTION()
    void OnLocalLoadoutUpdated(const FSBZPlayerLoadoutConfig& InPlayerLoadout, int32 ModifiedPlayerLoadoutIndex);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnLoadoutIncrement();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnLoadoutDecrement();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInputTypeChangedToGamepad(bool bIsGamepad);
    
private:
    UFUNCTION()
    void NativeOnFocusedPlayerLoadoutConfigChanged(const FSBZPlayerLoadoutConfig& NewPlayerLoadout);
    
    UFUNCTION()
    void NativeOnActiveLoadoutChanged(int32 NewActiveLoadoutIndex);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsFocusedPlayerLoadoutValid() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetFocusedPlayerLoadoutIndex() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void FocusedPlayerLoadoutConfigChanged(const FSBZPlayerLoadoutConfig& NewPlayerLoadout);
    
public:
    UFUNCTION(BlueprintCallable)
    void BindGamepadActions();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ActiveLoadoutChanged(int32 NewActiveLoadoutIndex);
    
};

