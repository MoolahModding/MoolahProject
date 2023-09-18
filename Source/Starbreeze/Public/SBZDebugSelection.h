#pragma once
#include "CoreMinimal.h"
#include "SBZDebugSelection.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FSBZDebugSelection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* Object;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 DepthStencil;
    
    STARBREEZE_API FSBZDebugSelection();
};

