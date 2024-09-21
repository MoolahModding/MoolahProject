#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ESBZDifficulty.h"
#include "ESBZSecurityCompany.h"
#include "SBZUIData.generated.h"

class UPD3SecurityCompanyDataAsset;

UCLASS(Blueprintable)
class STARBREEZE_API USBZUIData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZSecurityCompany, TSoftObjectPtr<UPD3SecurityCompanyDataAsset>> SecurityCompanyDataAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZDifficulty, FText> DifficultyText;
    
public:
    USBZUIData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UPD3SecurityCompanyDataAsset> GetSecurityCompanyData(ESBZSecurityCompany InSecurityCompany) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetDifficultyText(ESBZDifficulty InDifficulty, FText& OutDifficultyText, bool& bHasText) const;
    
};

