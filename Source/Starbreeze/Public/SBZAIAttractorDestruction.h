#pragma once
#include "CoreMinimal.h"
#include "Perception/AISightTargetInterface.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "SBZAIAttractorInterface.h"
#include "SBZAgilityObstacleInterface.h"
#include "SBZAIAttractorDestruction.generated.h"

class APawn;
class ASBZAIBaseCharacter;
class USBZAIAttractorComponent;
class USBZPropDamageComponent;

UCLASS(Blueprintable)
class ASBZAIAttractorDestruction : public AActor, public ISBZAIAttractorInterface, public IAISightTargetInterface, public ISBZAgilityObstacleInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZPropDamageComponent* PropDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DestroyedSoundTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SoundRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZAIAttractorComponent* AttractorComponent;
    
public:
    ASBZAIAttractorDestruction();
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_HandleAgilityTagEvent(const FGameplayTag& TagEvent, ASBZAIBaseCharacter* AICharacterInstigator);
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool SetEnabled(bool bEnabled) override PURE_VIRTUAL(SetEnabled, return false;);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetAttractorInstigator(APawn* NewInstigator) override PURE_VIRTUAL(SetAttractorInstigator,);
    
};

