#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerVolume.h"
#include "SBZFilterActorDynamicDelegateDelegate.h"
#include "SBZFilterAllDesiredCountsDynamicDelegateDelegate.h"
#include "SBZFilterDesiredCountDynamicDelegateDelegate.h"
#include "SBZFilteredTriggerVolume.generated.h"

class AActor;
class USBZActorFilterComponent;

UCLASS(Blueprintable, MinimalAPI)
class ASBZFilteredTriggerVolume : public ATriggerVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZActorFilterComponent* ActorFilterComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldStartEnabled: 1;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZFilterActorDynamicDelegate FilteredActorBeginOverlapping;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZFilterActorDynamicDelegate FilteredActorEndOverlapping;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZFilterDesiredCountDynamicDelegate FilterHasDesiredCountChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZFilterAllDesiredCountsDynamicDelegate FiltersAllHaveDesiredCountsChanged;
    
    ASBZFilteredTriggerVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetVolumeEnabled(bool bEnabled);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnFiltersAllHaveDesiredCountsChanged(bool bState);
    
    UFUNCTION(BlueprintCallable)
    void OnFilterHasDesiredCountChanged(FName Identifer, bool bState);
    
    UFUNCTION(BlueprintCallable)
    void OnFilteredActorEndOverlapping(FName Identifier, AActor* Actor, int32 CurrentTotalActors);
    
    UFUNCTION(BlueprintCallable)
    void OnFilteredActorBeginOverlapping(FName Identifier, AActor* Actor, int32 CurrentTotalActors);
    
};

