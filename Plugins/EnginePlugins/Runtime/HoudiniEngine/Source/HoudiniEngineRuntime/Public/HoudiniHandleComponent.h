#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "EHoudiniHandleType.h"
#include "HoudiniHandleComponent.generated.h"

class UHoudiniHandleParameter;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HOUDINIENGINERUNTIME_API UHoudiniHandleComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UHoudiniHandleParameter*> XformParms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHoudiniHandleParameter* RSTParm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHoudiniHandleParameter* RotOrderParm;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHoudiniHandleType HandleType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString HandleName;
    
public:
    UHoudiniHandleComponent(const FObjectInitializer& ObjectInitializer);

};

