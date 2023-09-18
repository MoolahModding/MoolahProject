#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerVolume.h"
#include "ESBZBagTriggerMode.h"
#include "SBZBagCountChangedDelegateDelegate.h"
#include "SBZBagEnteredDelegateDelegate.h"
#include "SBZBagFilter.h"
#include "SBZBagHandle.h"
#include "SBZBagVolumeCompleteDelegate.h"
#include "SBZBagTriggerVolume.generated.h"

class ASBZBagItem;
class ASBZBagRespawnPoint;
class USBZBagType;

UCLASS(Blueprintable, MinimalAPI)
class ASBZBagTriggerVolume : public ATriggerVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldStartEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZBagTriggerMode TriggerMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDisableOnComplete: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCountOverlappedForTarget: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCountSecuredForTarget: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZBagType*> BagTypeArray;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZBagCountChangedDelegate OnBagCountChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZBagEnteredDelegate OnBagEnteredOrSecured;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZBagVolumeComplete OnComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZBagFilter Filter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LocallySecured;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZBagRespawnPoint* BagTeleportPoint;
    
public:
    ASBZBagTriggerVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetVolumeEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool ManuallySecureBag(ASBZBagItem* BagItem, bool bFilterFirst);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    int32 GetCount();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool FilterBag(ASBZBagItem* BagItem, FSBZBagHandle BagHandle);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CheckCustomBagFilter(ASBZBagItem* BagItem, FSBZBagHandle BagHandle);
    
};

