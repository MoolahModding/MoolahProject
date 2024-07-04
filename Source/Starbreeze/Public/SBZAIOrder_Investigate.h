#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZAIOrder.h"
#include "SBZInvestigateData.h"
#include "SBZAIOrder_Investigate.generated.h"

class UBehaviorTree;
class USBZAIOrder_Escalate;
class USBZActionNotificationAsset;

UCLASS(Blueprintable, EditInlineNew)
class USBZAIOrder_Investigate : public USBZAIOrder {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag InjectTag;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* StateBehaviors[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZAIOrder_Escalate* EscalateActionOrder;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZInvestigateData CurrentInvestigation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZInvestigateData> InvestigateStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZActionNotificationAsset* EscalationReason;
    
public:
    USBZAIOrder_Investigate();

};

