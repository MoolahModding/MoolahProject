#include "SBZEventLibrary.h"
#include "SBZGameInstance.h"

USBZEventLibrary::USBZEventLibrary() {
}

USBZGameEventBroker* USBZEventLibrary::GetGameEventBroker(const UObject* WorldContextObject) {
  return Cast<USBZGameInstance>(GEngine->GetWorldFromContextObject(WorldContextObject)->GetGameInstance())->GameEventBroker;
}


