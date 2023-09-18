#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBZBagRespawnPoint.generated.h"

UCLASS(Blueprintable)
class ASBZBagRespawnPoint : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartEnabled;
    
public:
    ASBZBagRespawnPoint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void EnableBagRespawnPoint();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DisableBagRespawnPoint();
    
};

