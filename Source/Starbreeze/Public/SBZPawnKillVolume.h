#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerVolume.h"
#include "SBZPawnKillVolume.generated.h"

UCLASS(Blueprintable)
class ASBZPawnKillVolume : public ATriggerVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldStartEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldAffectDrones;
    
public:
    ASBZPawnKillVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetVolumeEnabled(bool bEnabled);
    
};

