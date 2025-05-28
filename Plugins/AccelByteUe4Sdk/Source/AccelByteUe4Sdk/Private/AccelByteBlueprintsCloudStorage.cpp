#include "AccelByteBlueprintsCloudStorage.h"

UAccelByteBlueprintsCloudStorage::UAccelByteBlueprintsCloudStorage() {
}

void UAccelByteBlueprintsCloudStorage::UpdateSlotMetadata(const FString& SlotId, const FString& FileName, const TArray<FString>& Tags, const FString& Label, const FString& CustomAttribute, const UAccelByteBlueprintsCloudStorage::FUpdateSlotMetadataSuccess& OnSuccess, const UAccelByteBlueprintsCloudStorage::FBlueprintErrorHandler& OnError) {
}

void UAccelByteBlueprintsCloudStorage::UpdateSlot(const FString& SlotId, const FString& FileName, const TArray<uint8>& Data, const TArray<FString>& Tags, const FString& Label, const FString& CustomAttribute, const UAccelByteBlueprintsCloudStorage::FUpdateSlotSuccess& OnSuccess, const UAccelByteBlueprintsCloudStorage::FBlueprintErrorHandler& OnError) {
}

void UAccelByteBlueprintsCloudStorage::GetSlot(const FString& SlotId, const UAccelByteBlueprintsCloudStorage::FGetSlotSuccess& OnSuccess, const UAccelByteBlueprintsCloudStorage::FBlueprintErrorHandler& OnError) {
}

void UAccelByteBlueprintsCloudStorage::GetAllSlots(const UAccelByteBlueprintsCloudStorage::FGetAllSlotsSuccess& OnSuccess, const UAccelByteBlueprintsCloudStorage::FBlueprintErrorHandler& OnError) {
}

void UAccelByteBlueprintsCloudStorage::DeleteSlot(const FString& SlotId, const UAccelByteBlueprintsCloudStorage::FDeleteSlotSuccees& OnSuccess, const UAccelByteBlueprintsCloudStorage::FBlueprintErrorHandler& OnError) {
}

void UAccelByteBlueprintsCloudStorage::CreateSlot(const TArray<uint8>& Data, const FString& FileName, const TArray<FString>& Tags, const FString& Label, const FString& CustomAttribute, const UAccelByteBlueprintsCloudStorage::FCreateSlotsSuccess& OnSuccess, const UAccelByteBlueprintsCloudStorage::FBlueprintErrorHandler& OnError) {
}


