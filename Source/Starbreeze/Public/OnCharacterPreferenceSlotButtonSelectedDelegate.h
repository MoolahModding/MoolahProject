#pragma once
#include "CoreMinimal.h"
#include "OnCharacterPreferenceSlotButtonSelectedDelegate.generated.h"

class USBZCharacterPreferenceCharacterSlotButton;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCharacterPreferenceSlotButtonSelected, USBZCharacterPreferenceCharacterSlotButton*, Button);

