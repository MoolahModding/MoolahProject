#pragma once
#include "CoreMinimal.h"
#include "SBZLobbyCharacterInfoUi.h"
#include "OnLobbySlotLoadoutChangeEventDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLobbySlotLoadoutChangeEventDelegate, const TArray<FSBZLobbyCharacterInfoUi>&, LobbyInfoArray);

