#pragma once
#include "CoreMinimal.h"
#include "HoudiniInputObject.h"
#include "HoudiniInputActor.generated.h"

class UHoudiniInputSceneComponent;
class UObject;

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API UHoudiniInputActor : public UHoudiniInputObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UHoudiniInputSceneComponent*> ActorComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSoftObjectPtr<UObject>> ActorSceneComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastUpdateNumComponentsAdded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastUpdateNumComponentsRemoved;
    
public:
    UHoudiniInputActor();

};

