#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Templates/SubclassOf.h"
#include "SBZWhizzby.generated.h"

class USBZLocalPlayerFeedback;
class USBZPlayerCameraFeedbackComponent;

UCLASS(Blueprintable)
class ASBZWhizzby : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZLocalPlayerFeedback> PlayerFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZPlayerCameraFeedbackComponent* PlayerCameraFeedbackComponent;
    
public:
    ASBZWhizzby(const FObjectInitializer& ObjectInitializer);

};

