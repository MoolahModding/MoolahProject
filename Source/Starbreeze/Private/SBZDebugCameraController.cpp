#include "SBZDebugCameraController.h"
#include "SBZCheatManager.h"

ASBZDebugCameraController::ASBZDebugCameraController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CheatClass = USBZCheatManager::StaticClass();
    this->ClickEventKeys.AddDefaulted(1);
}


