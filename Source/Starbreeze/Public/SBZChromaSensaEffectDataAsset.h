#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBZChromaSensaEffectDataAsset.generated.h"

UCLASS(Blueprintable, Const)
class USBZChromaSensaEffectDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ChromaDeviceBitmask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLoop: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> ChromaSDKAnimationIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString HapticsEventName;
    
    USBZChromaSensaEffectDataAsset();

};

