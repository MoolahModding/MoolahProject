#include "SBZLocalPlayer.h"
#include "SBZPlayerController.h"

USBZLocalPlayer::USBZLocalPlayer() {
    this->PendingLevelPlayerControllerClass = ASBZPlayerController::StaticClass();
}


