#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "SBZInteractReqData.h"
#include "SBZCheckInteractableScreenOutputData.generated.h"

class USBZBaseInteractableComponent;

USTRUCT(BlueprintType)
struct FSBZCheckInteractableScreenOutputData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZBaseInteractableComponent* Interactable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHitResult HitResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZInteractReqData ReqData;
    
    STARBREEZE_API FSBZCheckInteractableScreenOutputData();
};

