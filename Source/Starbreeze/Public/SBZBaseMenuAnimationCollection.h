#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBZBaseMenuAnimationCollection.generated.h"

class ASBZPlayerCharacter;
class USBZBaseMenuAnimationCollection;

UCLASS(Abstract, Blueprintable)
class STARBREEZE_API USBZBaseMenuAnimationCollection : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ASBZPlayerCharacter> DefaultCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<ASBZPlayerCharacter>> SupportedCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZBaseMenuAnimationCollection> Template;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateCollection;
    
    USBZBaseMenuAnimationCollection();

};

