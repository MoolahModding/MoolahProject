#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AccelByteCustomizationSettings.generated.h"

UCLASS(Blueprintable, Config=Engine)
class ACCELBYTECUSTOMIZATION_API UAccelByteCustomizationSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FString ChallengeServerUrl;
    
    UAccelByteCustomizationSettings();

};

