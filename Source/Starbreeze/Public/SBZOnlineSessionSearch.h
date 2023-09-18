#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZOnlineSearchResult.h"
#include "SBZOnlineSessionSearch.generated.h"

UCLASS(Blueprintable, Config=Game)
class STARBREEZE_API USBZOnlineSessionSearch : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GameSearchKeyword;
    
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHostPartyByDefault;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZOnlineSearchResult> SearchResults;
    
public:
    USBZOnlineSessionSearch();

};

