#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZAIOrder.h"
#include "SBZAIOrder_MoveTo.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZAIOrder_MoveTo : public USBZAIOrder {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MoveToLocation;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardKey;
    
public:
    USBZAIOrder_MoveTo();

    UFUNCTION(BlueprintCallable)
    void SetMoveToLocation(const FVector& Location);
    
};

