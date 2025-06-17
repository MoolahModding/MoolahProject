#include "SBZRandomRoomDynData.h"

FSBZRandomRoomDynData::FSBZRandomRoomDynData() {
}

FArchive& operator<<(FArchive& Ar, FSBZRandomRoomDynData& RoomDynData) {
  return Ar;
}
