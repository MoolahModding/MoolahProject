#pragma once
#include "CoreMinimal.h"
#include "LinkHeadlessAccountRequest.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FLinkHeadlessAccountRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ChosenNamespaces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OneTimeLinkCode;
    
    FLinkHeadlessAccountRequest();
};

