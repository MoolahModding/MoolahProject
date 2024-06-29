#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SBZWindManager.generated.h"

class UObject;
class USBZWindEmitterComponent;
class USBZWindManager;
class USBZWindReceiverComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZWindManager : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZWindEmitterComponent*> Emitters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZWindReceiverComponent*> Receivers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, USBZWindReceiverComponent*> ReceiversPerID;
    
public:
    USBZWindManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZWindManager* Get(UObject* WorldContextObject);
    
};

