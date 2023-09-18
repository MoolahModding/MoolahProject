#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnLobbySlotCharacterChangeEventDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLobbySlotCharacterChangeEventDelegate, int32, SlotIndex, const FSoftObjectPath, SelectedCharacter);

