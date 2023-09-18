#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZAIScorer.generated.h"

class ASBZAIController;
class UCurveFloat;
class USBZAIScorer;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class USBZAIScorer : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USBZAIScorer*> SubScorers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* OutputCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInversed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZAIController* AIController;
    
public:
    USBZAIScorer();

};

