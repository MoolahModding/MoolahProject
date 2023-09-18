#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBZWhizzby.generated.h"

class UClass;
class USBZPlayerCameraFeedbackComponent;

UCLASS(Blueprintable)
class ASBZWhizzby : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* PlayerFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZPlayerCameraFeedbackComponent* PlayerCameraFeedbackComponent;
    
public:
    ASBZWhizzby(const FObjectInitializer& ObjectInitializer);

};

