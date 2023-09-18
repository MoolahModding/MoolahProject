#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "SBZVehicleDamageComponent.generated.h"

class AActor;
class AController;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZVehicleDamageComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVector4> DamageZones;
    
public:
    USBZVehicleDamageComponent();

    UFUNCTION(BlueprintCallable)
    void HandleTakeRadialDamage(AActor* DamagedActor, float DamageAmount, const FRadialDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void HandleTakePointDamage(AActor* DamagedActor, float DamageAmount, const FPointDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser);
    
};

