#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "DelegateTimerExecDelegate.h"
#include "DelegateTimer.generated.h"

class UDelegateTimer;
class UObject;

UCLASS(Blueprintable)
class TIMEENHANCEMENTS_API UDelegateTimer : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegateTimerExec TickExec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime TimeStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime TimeFirstExecution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime TimeLastExecution;
    
    UDelegateTimer();

    UFUNCTION(BlueprintCallable)
    static void DestroyDelegateTimer(UDelegateTimer* Object);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UDelegateTimer* CreateDelegateTimer(UObject* WorldContextObject, float Period, float DelayToFirstExecution);
    
};

