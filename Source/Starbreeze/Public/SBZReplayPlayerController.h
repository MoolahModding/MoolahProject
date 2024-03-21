#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerController.h"
#include "SBZReplayPlayerController.generated.h"

class USBZReplayBaseWidget;
class USBZReplayManager;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZReplayPlayerController : public ASBZPlayerController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZReplayManager* ReplayManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZReplayBaseWidget* ReplayWidget;
    
public:
    ASBZReplayPlayerController();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZReplayManager* GetReplayManager() const;
    
};

