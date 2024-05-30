#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerVolume.h"
#include "SBZBooleanStateDynamicDelegateDelegate.h"
#include "SBZPawnDynamicDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "SBZPlayerTriggerVolume.generated.h"

class APawn;

UCLASS(Blueprintable, MinimalAPI)
class ASBZPlayerTriggerVolume : public ATriggerVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APawn> PlayerPawnParentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldStartEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDisableWhenPlayerBeginsOverlapping: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDisableWhenAllPlayersAreInside: 1;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPawnDynamicDelegate PlayerPawnBeginOverlapping;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPawnDynamicDelegate PlayerPawnEndOverlapping;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZBooleanStateDynamicDelegate OverlappingAllPlayerPawnsChanged;
    
    ASBZPlayerTriggerVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetVolumeEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    int32 GetCurrentNumOverlappingPlayers() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool AreAllPlayerPawnsInside() const;
    
};

