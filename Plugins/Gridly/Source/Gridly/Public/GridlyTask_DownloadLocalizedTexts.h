#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "DownloadLocalizedTextsDelegateDelegate.h"
#include "GridlyTask_DownloadLocalizedTexts.generated.h"

class UGridlyTask_DownloadLocalizedTexts;
class UObject;

UCLASS(Blueprintable)
class GRIDLY_API UGridlyTask_DownloadLocalizedTexts : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDownloadLocalizedTextsDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDownloadLocalizedTextsDelegate OnProgress;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDownloadLocalizedTextsDelegate OnFail;
    
    UGridlyTask_DownloadLocalizedTexts();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UGridlyTask_DownloadLocalizedTexts* DownloadLocalizedTexts(const UObject* WorldContextObject);
    
};

