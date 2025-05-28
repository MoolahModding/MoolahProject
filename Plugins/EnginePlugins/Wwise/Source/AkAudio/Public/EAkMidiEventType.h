#pragma once
#include "CoreMinimal.h"
#include "EAkMidiEventType.generated.h"

UENUM(BlueprintType)
enum class EAkMidiEventType : uint8 {
    AkMidiEventTypeInvalid,
    AkMidiEventTypeNoteOff = 128,
    AkMidiEventTypeNoteOn = 144,
    AkMidiEventTypeNoteAftertouch = 160,
    AkMidiEventTypeController = 176,
    AkMidiEventTypeProgramChange = 192,
    AkMidiEventTypeChannelAftertouch = 208,
    AkMidiEventTypePitchBend = 224,
    AkMidiEventTypeSysex = 240,
    AkMidiEventTypeEscape = 247,
    AkMidiEventTypeMeta = 255,
};

