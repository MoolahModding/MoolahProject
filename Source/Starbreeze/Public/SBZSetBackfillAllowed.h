#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "SBZOnSetBackfillAllowedDelegate.h"
#include "SBZSetBackfillAllowed.generated.h"

class UObject;
class USBZSetBackfillAllowed;

UCLASS(Blueprintable)
class STARBREEZE_API USBZSetBackfillAllowed : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnSetBackfillAllowed OnSetBackfillAllowed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowed;
    
public:
    USBZSetBackfillAllowed();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USBZSetBackfillAllowed* SetBackfillAllowed(UObject* NewWorldContextObject, bool NewBAllowed);
    
};

