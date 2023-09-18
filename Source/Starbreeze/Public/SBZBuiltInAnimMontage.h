#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBZBuiltInAnimMontageBoneTrack.h"
#include "SBZBuiltInAnimMontage.generated.h"

UCLASS(Blueprintable)
class USBZBuiltInAnimMontage : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoStopWhenFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLooping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Group;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZBuiltInAnimMontageBoneTrack> BoneTracks;
    
    USBZBuiltInAnimMontage();

};

