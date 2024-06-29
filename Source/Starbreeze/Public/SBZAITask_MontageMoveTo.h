#pragma once
#include "CoreMinimal.h"
#include "Tasks/AITask.h"
#include "GameplayTask.h"
#include "MontageMoveTaskCompletedSignatureDelegate.h"
#include "SBZAIMontageMoveRequest.h"
#include "SBZAITask_MontageMoveTo.generated.h"

class UAnimMontage;

UCLASS(Blueprintable)
class USBZAITask_MontageMoveTo : public UAITask {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameplayTask::FGenericGameplayTaskDelegate OnRequestFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMontageMoveTaskCompletedSignature OnMoveFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAIMontageMoveRequest MontageMoveRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* DesiredMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* EndMontagePtr;
    
public:
    USBZAITask_MontageMoveTo();

};

