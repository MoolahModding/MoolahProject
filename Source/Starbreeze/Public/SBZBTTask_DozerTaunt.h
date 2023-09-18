#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "SBZBTTask_DozerTaunt.generated.h"

class UAnimMontage;
class UBehaviorTreeComponent;
class USBZVoiceCommentDataAsset;

UCLASS(Blueprintable)
class USBZBTTask_DozerTaunt : public UBTTaskNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZVoiceCommentDataAsset* TauntComment;
    
public:
    USBZBTTask_DozerTaunt();

private:
    UFUNCTION(BlueprintCallable)
    void OnMontageEnded(UAnimMontage* Montage, bool bIsInterrupted, UBehaviorTreeComponent* OwnerComp);
    
};

