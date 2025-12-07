#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerVolume.h"
#include "GameplayTagContainer.h"
#include "SBZBagAndItemTriggerDelegateDelegate.h"
#include "SBZBagAndItemTriggerVolume.generated.h"

class USBZBagType;

UCLASS(Blueprintable)
class ASBZBagAndItemTriggerVolume : public ATriggerVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZBagAndItemTriggerDelegate OnBagAndItemTriggered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsVolumeEnabledInitially;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsVolumeEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDisabledWhenTriggered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZBagType*> BagTypeFilterArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ItemTagFilter;
    
public:
    ASBZBagAndItemTriggerVolume(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetVolumeEnabled(bool bIsEnabled);
    
};

