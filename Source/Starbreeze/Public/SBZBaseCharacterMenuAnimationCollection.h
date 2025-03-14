#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBZBaseCharacterMenuAnimationCollection.generated.h"

class USBZBaseCharacterMenuAnimationCollection;

UCLASS(Abstract, Blueprintable)
class STARBREEZE_API USBZBaseCharacterMenuAnimationCollection : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DefaultCharacterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SupportedCharacterNameArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZBaseCharacterMenuAnimationCollection> Template;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateCollection;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RandomSeed;
    
public:
    USBZBaseCharacterMenuAnimationCollection();

};

