#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilitySpec.h"
#include "GameplayTagContainer.h"
#include "SBZPlayerStateWidgetBase.h"
#include "SBZAbilityInputActionWidget.generated.h"

class AActor;
class ASBZCharacter;
class USBZGameplayAbility;

UCLASS(Blueprintable, EditInlineNew)
class USBZAbilityInputActionWidget : public USBZPlayerStateWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GameplayAbilityTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCanActivate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZGameplayAbility* GameplayAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayAbilitySpecHandle GameplayAbilityHandle;
    
public:
    USBZAbilityInputActionWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerStateDestroyed(AActor* DestroyedActor);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActivateAbilityStateChanged(bool bInCanActivate);
    
};

