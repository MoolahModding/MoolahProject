#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZAIOrder.h"
#include "Templates/SubclassOf.h"
#include "SBZAIOrder_FreeHostage.generated.h"

class ASBZAICharacter;
class USBZAIOrder_ReleaseHostage;

UCLASS(Blueprintable, EditInlineNew)
class USBZAIOrder_FreeHostage : public USBZAIOrder {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZAIOrder_ReleaseHostage> ReleaseHostageOrder;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZAICharacter* TiedHostage;
    
public:
    USBZAIOrder_FreeHostage();

protected:
    UFUNCTION(BlueprintCallable)
    void OnCharacterAnimEventActive(const FGameplayTag& EventTag, bool bActive);
    
};

