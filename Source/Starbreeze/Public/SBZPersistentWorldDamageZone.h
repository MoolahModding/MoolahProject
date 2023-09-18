#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBZPersistentWorldDamageZone.generated.h"

class USBZPersistentWorldDamageZoneComponent;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZPersistentWorldDamageZone : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZPersistentWorldDamageZoneComponent* Zone;
    
public:
    ASBZPersistentWorldDamageZone(const FObjectInitializer& ObjectInitializer);

};

