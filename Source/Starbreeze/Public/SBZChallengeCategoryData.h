#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBZChallengeCategoryData.generated.h"

class UPaperSprite;

UCLASS(Blueprintable)
class USBZChallengeCategoryData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CategoryTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CategoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperSprite* DisplayIcon;
    
    USBZChallengeCategoryData();

};

