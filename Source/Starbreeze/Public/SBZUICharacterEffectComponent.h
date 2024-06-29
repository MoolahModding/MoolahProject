#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SBZCharacterEffectRuntime.h"
#include "SBZUICharacterEffectComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZUICharacterEffectComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<uint32, FSBZCharacterEffectRuntime> CharacterEffectRuntimes;
    
public:
    USBZUICharacterEffectComponent(const FObjectInitializer& ObjectInitializer);

};

