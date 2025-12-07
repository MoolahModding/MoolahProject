#pragma once
#include "CoreMinimal.h"
#include "SBZHUDWidgetBase.h"
#include "SBZHUDLootSecureNotification.generated.h"

class USBZBagType;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZHUDLootSecureNotification : public USBZHUDWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZBagType*> QueuedSecuredLoot;
    
public:
    USBZHUDLootSecureNotification();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZBagType* PeekNextBag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBagSecured(const USBZBagType* InBagSecured);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasBagsInQueue() const;
    
    UFUNCTION(BlueprintCallable)
    USBZBagType* GetNextBagInQueue();
    
    UFUNCTION(BlueprintCallable)
    int32 GetLootBagDisplayValue(const USBZBagType* InBagSecured);
    
    UFUNCTION(BlueprintCallable)
    FText GetLootBagDisplayName(const USBZBagType* InBagSecured);
    
};

