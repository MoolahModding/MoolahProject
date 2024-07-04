#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "SBZOnSanitizeDisplayNamesCompleteDelegate.h"
#include "SBZSanitizeDisplayNames.generated.h"

class ASBZPlayerState;
class UObject;
class USBZSanitizeDisplayNames;

UCLASS(Blueprintable)
class STARBREEZE_API USBZSanitizeDisplayNames : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnSanitizeDisplayNamesComplete OnSanitizeDisplayNamesSucceeded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnSanitizeDisplayNamesComplete OnSanitizeDisplayNamesFailed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> SanitizedDisplayNames;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZPlayerState* PlayerState;
    
public:
    USBZSanitizeDisplayNames();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USBZSanitizeDisplayNames* SanitizeDisplayNames(UObject* NewWorldContextObject, const ASBZPlayerState* NewPlayerState, const TArray<FString>& DisplayNames);
    
};

