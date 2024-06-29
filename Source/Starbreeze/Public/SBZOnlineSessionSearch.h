#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZOnlineSearchResult.h"
#include "SBZOnlineSessionParams.h"
#include "SBZOnlineSessionSearch.generated.h"

class USBZOnlineSessionRequestHandler;
class USBZOnlineSessionUtils;

UCLASS(Blueprintable, Config=Game)
class STARBREEZE_API USBZOnlineSessionSearch : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZOnlineSessionParams SearchSessionParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZOnlineSessionParams DelayedSearchSessionParams;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GameSearchKeyword;
    
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHostPartyByDefault;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZOnlineSessionUtils* SBZOnlineSessionUtils;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZOnlineSessionRequestHandler* SBZOnlineSessionRequestHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZOnlineSearchResult> SearchResults;
    
public:
    USBZOnlineSessionSearch();

};

