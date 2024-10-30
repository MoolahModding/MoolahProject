#pragma once
#include "CoreMinimal.h"
#include "AkAcousticPortal.h"
#include "SBZAkAcousticPortal.generated.h"

class AActor;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZAkAcousticPortal : public AAkAcousticPortal {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> AffectedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebugScreenTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StateOpenDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StateCloseDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowStateChange;
    
    ASBZAkAcousticPortal(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void OnDebugLogging();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void OnActivateTick(bool bTick);
    
};

