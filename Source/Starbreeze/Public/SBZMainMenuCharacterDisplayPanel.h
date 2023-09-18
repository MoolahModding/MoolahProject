#pragma once
#include "CoreMinimal.h"
#include "SBZWidgetBase.h"
#include "SBZMainMenuCharacterDisplayPanel.generated.h"

class USBZPlayerCharacterData;

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuCharacterDisplayPanel : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZPlayerCharacterData* CharacterData;
    
public:
    USBZMainMenuCharacterDisplayPanel();

    UFUNCTION(BlueprintCallable)
    void SetEmpty();
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterToDisplay(const USBZPlayerCharacterData* InCharacterData);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEmptySet();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCharacterDataChanged(const USBZPlayerCharacterData* InCharacterData);
    
};

