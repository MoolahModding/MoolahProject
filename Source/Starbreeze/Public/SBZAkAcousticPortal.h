#pragma once
#include "CoreMinimal.h"
#include "AkAcousticPortal.h"
#include "SBZAkAcousticPortal.generated.h"

class AActor;
class ASBZGate;
class ASBZSoundEnvironment;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZAkAcousticPortal : public AAkAcousticPortal {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> AffectedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZSoundEnvironment* FrontSoundEnvironment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZSoundEnvironment* BackSoundEnvironment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZGate* ConnectedGate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebugScreenTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StateOpenDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StateCloseDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowStateChange;
    
    ASBZAkAcousticPortal(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnDebugLogging();
    
    UFUNCTION(BlueprintCallable)
    void OnActivateTick(bool bTick);
    
};

