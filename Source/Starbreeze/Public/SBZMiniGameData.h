#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBZControlsReference.h"
#include "SBZLockCameraData.h"
#include "Templates/SubclassOf.h"
#include "SBZMiniGameData.generated.h"

class USBZAnimatedInteractionData;
class USBZLocalPlayerFeedback;
class UUserWidget;

UCLASS(Blueprintable)
class USBZMiniGameData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> WidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZControlsReference ControlsReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZLockCameraData LockCameraData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZLocalPlayerFeedback> PlayerFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLockpickMiniGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZAnimatedInteractionData* AnimatedInteractionData;
    
    USBZMiniGameData();

};

