#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PD3SecurityCompanyDataAsset.generated.h"

class UPaperSprite;

UCLASS(Blueprintable)
class UPD3SecurityCompanyDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SecurityCompanyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperSprite* SecurityCompanyLogo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SecurityCompanyDescription;
    
    UPD3SecurityCompanyDataAsset();

};

