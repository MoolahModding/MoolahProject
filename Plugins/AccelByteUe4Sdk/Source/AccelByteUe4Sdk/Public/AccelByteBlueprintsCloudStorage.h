#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AccelByteModelsSlot.h"
#include "AccelByteBlueprintsCloudStorage.generated.h"

UCLASS(Blueprintable)
class UAccelByteBlueprintsCloudStorage : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FUpdateSlotSuccess, const FAccelByteModelsSlot&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FUpdateSlotMetadataSuccess, const FAccelByteModelsSlot&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FGetSlotSuccess, const TArray<uint8>&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FGetAllSlotsSuccess, const TArray<FAccelByteModelsSlot>&, Result);
    DECLARE_DYNAMIC_DELEGATE(FDeleteSlotSuccees);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FCreateSlotsSuccess, const FAccelByteModelsSlot&, Result);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FBlueprintErrorHandler, int32, ErrorCode, const FString&, ErrorMessage);
    
    UAccelByteBlueprintsCloudStorage();
    UFUNCTION(BlueprintCallable)
    static void UpdateSlotMetadata(const FString& SlotId, const FString& FileName, const TArray<FString>& Tags, const FString& Label, const FString& CustomAttribute, const UAccelByteBlueprintsCloudStorage::FUpdateSlotMetadataSuccess& OnSuccess, const UAccelByteBlueprintsCloudStorage::FBlueprintErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateSlot(const FString& SlotId, const FString& FileName, const TArray<uint8>& Data, const TArray<FString>& Tags, const FString& Label, const FString& CustomAttribute, const UAccelByteBlueprintsCloudStorage::FUpdateSlotSuccess& OnSuccess, const UAccelByteBlueprintsCloudStorage::FBlueprintErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    static void GetSlot(const FString& SlotId, const UAccelByteBlueprintsCloudStorage::FGetSlotSuccess& OnSuccess, const UAccelByteBlueprintsCloudStorage::FBlueprintErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllSlots(const UAccelByteBlueprintsCloudStorage::FGetAllSlotsSuccess& OnSuccess, const UAccelByteBlueprintsCloudStorage::FBlueprintErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    static void DeleteSlot(const FString& SlotId, const UAccelByteBlueprintsCloudStorage::FDeleteSlotSuccees& OnSuccess, const UAccelByteBlueprintsCloudStorage::FBlueprintErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    static void CreateSlot(const TArray<uint8>& Data, const FString& FileName, const TArray<FString>& Tags, const FString& Label, const FString& CustomAttribute, const UAccelByteBlueprintsCloudStorage::FCreateSlotsSuccess& OnSuccess, const UAccelByteBlueprintsCloudStorage::FBlueprintErrorHandler& OnError);
    
};

