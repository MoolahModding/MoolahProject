#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "SBZLoadingState.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API ASBZLoadingState : public AInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float LoadingProgress;
    
public:
    ASBZLoadingState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetLoadingProgress(float InLoadingProgress);
    
};

