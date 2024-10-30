#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "DownloadGridlyNativeCultureDelegateDelegate.h"
#include "SBZGridlyTask_DownloadGridlyNativeCulture.generated.h"

class UObject;
class USBZGridlyTask_DownloadGridlyNativeCulture;

UCLASS(Blueprintable)
class GRIDLY_API USBZGridlyTask_DownloadGridlyNativeCulture : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDownloadGridlyNativeCultureDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDownloadGridlyNativeCultureDelegate OnProgress;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDownloadGridlyNativeCultureDelegate OnFail;
    
    USBZGridlyTask_DownloadGridlyNativeCulture();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USBZGridlyTask_DownloadGridlyNativeCulture* DownloadLocalizedTexts(const UObject* WorldContextObject);
    
};

