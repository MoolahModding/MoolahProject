#pragma once
#include "CoreMinimal.h"
#include "SBZAIOrder.h"
#include "SBZAIOrder_Agility.generated.h"

class ASBZAgilityNavLink;
class ISBZAgilityTrajectoryInterface;
class USBZAgilityTrajectoryInterface;

UCLASS(Blueprintable, EditInlineNew)
class USBZAIOrder_Agility : public USBZAIOrder {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZAgilityNavLink* AgilityNavLink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<ISBZAgilityTrajectoryInterface> AgilityNavLinkInterface;
    
public:
    USBZAIOrder_Agility();
};

