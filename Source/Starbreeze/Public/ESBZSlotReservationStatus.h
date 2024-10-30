#pragma once
#include "CoreMinimal.h"
#include "ESBZSlotReservationStatus.generated.h"

UENUM(BlueprintType)
enum class ESBZSlotReservationStatus : uint8 {
    Failure,
    Success,
    SlotAlreadyReserved,
    NoFreeSlots,
    InvalidPlayerIdReceived,
    ServerInWrongState,
    SlotsNumberMismatch,
};

