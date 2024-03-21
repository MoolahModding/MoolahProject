#pragma once
#include "CoreMinimal.h"
#include "SBZCharacterEffectRuntime.h"
#include "SBZPlayerStatePawnWidgetBase.h"
#include "Templates/SubclassOf.h"
#include "SBZCharacterEffectContainer.generated.h"

class UPanelWidget;
class USBZCharacterEffectWidget;

UCLASS(Blueprintable, EditInlineNew)
class USBZCharacterEffectContainer : public USBZPlayerStatePawnWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_CharacterEffectsContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZCharacterEffectWidget> CharacterEffectWidgetClass;
    
private:
    UPROPERTY(EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<uint32, USBZCharacterEffectWidget*> ActiveEffectWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZCharacterEffectWidget*> EmptyCharacterEffectsPool;
    
public:
    USBZCharacterEffectContainer();
protected:
    UFUNCTION(BlueprintCallable)
    void OnCharacterEffectRemoved(FSBZCharacterEffectRuntime& CharacterRuntime);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterEffectAdded(FSBZCharacterEffectRuntime& CharacterRuntime);
    
    UFUNCTION(BlueprintCallable)
    void OnCharactedEffectValueUpdated(FSBZCharacterEffectRuntime& CharacterRuntime);
    
    UFUNCTION(BlueprintCallable)
    void OnCharactedEffectCooldownProgressUpdated(FSBZCharacterEffectRuntime& CharacterRuntime);
    
};

