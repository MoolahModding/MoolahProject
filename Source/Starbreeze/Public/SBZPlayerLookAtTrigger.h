#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZBooleanStateDynamicDelegateDelegate.h"
#include "SBZPawnDynamicDelegateDelegate.h"
#include "SBZPlayerLookAtData.h"
#include "SBZPlayerTriggerVolume.h"
#include "SBZPlayerLookAtTrigger.generated.h"

class APawn;

UCLASS(Blueprintable, MinimalAPI)
class ASBZPlayerLookAtTrigger : public ASBZPlayerTriggerVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPawnDynamicDelegate PlayerBeginLookAt;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPawnDynamicDelegate PlayerEndLookAt;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZBooleanStateDynamicDelegate AllPlayerLookAtChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsDisabledWhenPlayerLookAt: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsDisabledWhenAllPlayersLookAt: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<APawn*, FSBZPlayerLookAtData> LookAtPawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DotAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookAtTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LookAtLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLineOfSightRequired;
    
public:
    ASBZPlayerLookAtTrigger(const FObjectInitializer& ObjectInitializer);

};

