#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "SBZBTService_DozerCharge.generated.h"

class ASBZAIController;
class UAnimMontage;
class USBZVoiceCommentDataAsset;

UCLASS(Blueprintable)
class USBZBTService_DozerCharge : public UBTService {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtraChargeDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CheckForHitTickRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZVoiceCommentDataAsset* ChargeComment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HurtReactionWeightOnAI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZAIController* AIController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* CurrentMontage;
    
public:
    USBZBTService_DozerCharge();

private:
    UFUNCTION(BlueprintCallable)
    void TickChargeMeleeCheck();
    
    UFUNCTION(BlueprintCallable)
    void OnMontageEnded(UAnimMontage* Montage, bool bIsInterrupted);
    
};

