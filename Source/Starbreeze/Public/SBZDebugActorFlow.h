#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBZDebugActorFlow.generated.h"

class USBZDebugActorComponentFlow;
class USBZDebugObjectFlow;

UCLASS(Blueprintable)
class ASBZDebugActorFlow : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIs;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDuplicateTransient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Float;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZDebugActorComponentFlow* Component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZDebugActorComponentFlow* InstanceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZDebugActorComponentFlow* DynamicComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZDebugObjectFlow* Object;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZDebugObjectFlow* InstanceObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZDebugObjectFlow* DynamicObject;
    
public:
    ASBZDebugActorFlow(const FObjectInitializer& ObjectInitializer);

};

