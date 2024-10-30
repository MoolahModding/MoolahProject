#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "SBZAICrewDefeatStateChangedData.h"
#include "SBZDamageEvent.h"
#include "SBZHoldOutBagTrackerData.h"
#include "SBZHoldOutDamageEventData.h"
#include "SBZHoldOutTrackedBagEventData.h"
#include "SBZPlayerDefeatStateChangedData.h"
#include "SBZHoldOutEventReactorComponent.generated.h"

class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZHoldOutEventReactorComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZHoldOutDamageEventData> DamageEventDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FGameplayTagContainer> BackFromCustodyEventsPerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer BackFromCustodyEventsDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZHoldOutTrackedBagEventData> DroppedBagEventDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZHoldOutBagTrackerData> BagTrackers;
    
public:
    USBZHoldOutEventReactorComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetBagTrackingEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayersAliveCountChanged(const TArray<UObject*>& Players);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerDefeatStateChanged(const FSBZPlayerDefeatStateChangedData& InData);
    
    UFUNCTION(BlueprintCallable)
    void OnDamageTakenEvent(const FSBZDamageEvent& DamageEventData);
    
    UFUNCTION(BlueprintCallable)
    void OnAICrewDefeatStateChanged(const FSBZAICrewDefeatStateChangedData& InData);
    
};

