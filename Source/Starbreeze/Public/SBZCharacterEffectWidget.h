#pragma once
#include "CoreMinimal.h"
#include "SBZCharacterEffectRuntime.h"
#include "SBZWidgetBase.h"
#include "SBZCharacterEffectWidget.generated.h"

class USBZCharacterEffectDataAsset;

UCLASS(Blueprintable, EditInlineNew)
class USBZCharacterEffectWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZCharacterEffectDataAsset* BuffDataAsset;
    
public:
    USBZCharacterEffectWidget();
    UFUNCTION(BlueprintCallable)
    void SetProgress(float InNewProgress);
    
    UFUNCTION(BlueprintCallable)
    void SetEffectValue(int32 InNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetActive(bool bIsActive);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEffectValueChanged(int32 InNewEffectValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCooldownProgressChanged(float InNewProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCharacterEffectInitialized(FSBZCharacterEffectRuntime InCharacterEffectRuntime);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializeCharacterEffect(FSBZCharacterEffectRuntime& InCharacterEffectRuntime);
    
};

