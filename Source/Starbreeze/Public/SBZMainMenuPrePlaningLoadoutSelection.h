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
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerLoadoutConfigChanged OnFocusedPlayerLoadoutConfigChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 FocusedPlayerLoadoutIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsValidLoadout;
    
public:
    USBZMainMenuPrePlaningLoadoutSelection();

    UFUNCTION(BlueprintCallable)
    void SetFocusedPlayerLoadoutIndex(int32 NewFocusedPlayerLoadoutIndex);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLocalLoadoutUpdated(const FSBZPlayerLoadoutConfig& InPlayerLoadout, int32 ModifiedPlayerLoadoutIndex);
    
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
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ActiveLoadoutChanged(int32 NewActiveLoadoutIndex);
    
};

