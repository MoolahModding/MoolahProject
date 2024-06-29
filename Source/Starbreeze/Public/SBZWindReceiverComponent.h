#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "SBZOnWindChangedDelegateDelegate.h"
#include "SBZWindReceiverComponent.generated.h"

class USBZWindApplier;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZWindReceiverComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZWindApplier* Applier;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnWindChangedDelegate OnWindChanged;
    
public:
    USBZWindReceiverComponent(const FObjectInitializer& ObjectInitializer);

};

