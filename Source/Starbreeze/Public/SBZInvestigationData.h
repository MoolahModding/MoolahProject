#pragma once
#include "CoreMinimal.h"
#include "SBZInvestigationData.generated.h"

class AActor;
class APawn;
class USBZAIOrder_Investigate;
class USBZActionNotificationAsset;

USTRUCT(BlueprintType)
struct FSBZInvestigationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* Instigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APawn* Investigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZAIOrder_Investigate* OrderInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZActionNotificationAsset* Escalation;
    
    STARBREEZE_API FSBZInvestigationData();
};

