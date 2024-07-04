#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SBZRecoilComponent.generated.h"

class ASBZPlayerCharacter;
class ASBZRangedWeapon;
class USBZRecoilData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZRecoilComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerCharacter* PlayerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZRangedWeapon* CurrentWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZRecoilData* CurrentRecoilData;
    
public:
    USBZRecoilComponent(const FObjectInitializer& ObjectInitializer);

};

