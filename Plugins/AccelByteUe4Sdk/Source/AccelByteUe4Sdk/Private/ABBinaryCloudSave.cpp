#include "ABBinaryCloudSave.h"

void UABBinaryCloudSave::UpdateUserBinaryRecordMetadata(const FString& Key, bool bIsPublic, const FDModelsUserBinaryRecord& OnSuccess, const FDErrorHandler& OnError) {
}

void UABBinaryCloudSave::UpdateUserBinaryRecordFile(const FString& Key, const FString& FileType, const FString& FileLocation, const FDModelsUserBinaryRecord& OnSuccess, const FDErrorHandler& OnError) {
}

void UABBinaryCloudSave::SaveUserBinaryRecord(const FString& Key, bool bIsPublic, const FString& FileType, const FDHandler& OnSuccess, const FDErrorHandler& OnError) {
}

void UABBinaryCloudSave::RequestUserBinaryRecordPresignedUrl(const FString& Key, const FString& FileType, const FDModelsBinaryInfo& OnSuccess, const FDErrorHandler& OnError) {
}

void UABBinaryCloudSave::GetPublicUserBinaryRecord(const FString& Key, const FString& UserId, const FDModelsUserBinaryRecord& OnSuccess, const FDErrorHandler& OnError) {
}

void UABBinaryCloudSave::GetGameBinaryRecord(const FString& Key, const FDModelsGameBinaryRecord& OnSuccess, const FDErrorHandler& OnError) {
}

void UABBinaryCloudSave::GetCurrentUserBinaryRecord(const FString& Key, const FDModelsUserBinaryRecord& OnSuccess, const FDErrorHandler& OnError) {
}

void UABBinaryCloudSave::DeleteUserBinaryRecord(const FString& Key, const FDHandler& OnSuccess, const FDErrorHandler& OnError) {
}

void UABBinaryCloudSave::BulkQueryPublicUserBinaryRecords(const FString& UserId, const FDModelsPaginatedUserBinaryRecords& OnSuccess, const FDErrorHandler& OnError, const int32& Offset, const int32& Limit) {
}

void UABBinaryCloudSave::BulkQueryGameBinaryRecords(const FString& Query, const FDModelsPaginatedGameBinaryRecords& OnSuccess, const FDErrorHandler& OnError, const int32& Offset, const int32& Limit) {
}

void UABBinaryCloudSave::BulkQueryCurrentUserBinaryRecords(const FString& Query, const FDModelsPaginatedUserBinaryRecords& OnSuccess, const FDErrorHandler& OnError, const int32& Offset, const int32& Limit) {
}

void UABBinaryCloudSave::BulkGetPublicUserBinaryRecordsByUserIds(const FString& Key, const TArray<FString>& UserIds, const FDModelsListUserBinaryRecords& OnSuccess, const FDErrorHandler& OnError) {
}

void UABBinaryCloudSave::BulkGetPublicUserBinaryRecordsByKeys(const TArray<FString>& Keys, const FString& UserId, const FDModelsListUserBinaryRecords& OnSuccess, const FDErrorHandler& OnError) {
}

void UABBinaryCloudSave::BulkGetGameBinaryRecords(const TArray<FString>& Keys, const FDModelsListGameBinaryRecords& OnSuccess, const FDErrorHandler& OnError) {
}

void UABBinaryCloudSave::BulkGetCurrentUserBinaryRecords(const TArray<FString>& Keys, const FDModelsListUserBinaryRecords& OnSuccess, const FDErrorHandler& OnError) {
}

UABBinaryCloudSave::UABBinaryCloudSave() {
}

