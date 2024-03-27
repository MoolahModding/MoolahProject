#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "SBZOnWindChangedDelegateDelegate.h"
#include "SBZWindReceiverComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZWindReceiverComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnWindChangedDelegate OnWindChanged;
    
public:
    USBZWindReceiverComponent();
};

