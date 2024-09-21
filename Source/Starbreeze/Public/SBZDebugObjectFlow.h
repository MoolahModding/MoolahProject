#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZDebugObjectFlow.generated.h"

UCLASS(Blueprintable)
class USBZDebugObjectFlow : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIs;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDuplicateTransient;
    
public:
    USBZDebugObjectFlow();

};

