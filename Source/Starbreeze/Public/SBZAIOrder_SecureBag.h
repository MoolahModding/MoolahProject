#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZAIOrder.h"
#include "SBZAIOrder_SecureBag.generated.h"

class AActor;
class USBZAIOrder_DropOfBag;

UCLASS(Blueprintable, EditInlineNew)
class USBZAIOrder_SecureBag : public USBZAIOrder {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZAIOrder_DropOfBag* DropOfBagActionOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* BagActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardKey;
    
public:
    USBZAIOrder_SecureBag();

protected:
    UFUNCTION(BlueprintCallable)
    void OnCharacterAnimEventActive(const FGameplayTag& EventTag, bool bActive);
    
};

