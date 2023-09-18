#include "SBZPlayerControllerMainMenu.h"
#include "SBZCheatManagerMainMenu.h"

ASBZPlayerControllerMainMenu::ASBZPlayerControllerMainMenu(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CheatClass = USBZCheatManagerMainMenu::StaticClass();
    this->ClickEventKeys.AddDefaulted(1);
}


