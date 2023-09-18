#include "ABUGC.h"

UABUGC::UABUGC() {
}

void UABUGC::UpdateLikeStatusToContent(const FString& ContentId, bool bLikeStatus, const FDModelsUGCUpdateLikeStatusToContentResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABUGC::UpdateFollowStatusToUser(const FString& UserId, bool bFollowStatus, const FDModelsUGCUpdateFollowStatusToUserResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABUGC::SearchContentsSpecificToChannel(const FString& ChannelId, const FString& Name, const FString& Creator, const FString& Type, const FString& Subtype, const TArray<FString>& Tags, bool IsOfficial, const FString& UserId, const FDModelsUGCSearchContentsPagingResponse& OnSuccess, const FDErrorHandler& OnError, EAccelByteUgcSortBy SortBy, EAccelByteUgcOrderBy OrderBy, int32 Limit, int32 Offset) {
}

void UABUGC::SearchContents(const FString& Name, const FString& Creator, const FString& Type, const FString& Subtype, const TArray<FString>& Tags, bool IsOfficial, const FString& UserId, const FDModelsUGCSearchContentsPagingResponse& OnSuccess, const FDErrorHandler& OnError, EAccelByteUgcSortBy SortBy, EAccelByteUgcOrderBy OrderBy, int32 Limit, int32 Offset) {
}

void UABUGC::ModifyContentByStruct(const FString& ChannelId, const FString& ContentId, const FAccelByteModelsUGCRequest& UGCRequest, const FDModelsUGCResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABUGC::ModifyContent(const FString& ChannelId, const FString& ContentId, const FString& Name, const FString& Type, const FString& SubType, const TArray<FString>& Tags, const TArray<uint8>& Preview, const FString& FileExtension, const FDModelsUGCResponse& OnSuccess, const FDErrorHandler& OnError, const FString& ContentType) {
}

void UABUGC::GetTypes(const FDModelsUGCTypesPagingResponse& OnSuccess, const FDErrorHandler& OnError, int32 Limit, int32 Offset) {
}

void UABUGC::GetTags(const FDModelsUGCTagsPagingResponse& OnSuccess, const FDErrorHandler& OnError, int32 Limit, int32 Offset) {
}

void UABUGC::GetListFollowers(const FString& UserId, const FDModelsUGCGetListFollowersPagingResponse& OnSuccess, const FDErrorHandler& OnError, int32 Limit, int32 Offset) {
}

void UABUGC::GetContentPreviewAsStruct(const FString& ContentId, const FDModelsUGCPreviewResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABUGC::GetContentPreviewAsIntArray(const FString& ContentId, const FDArrayUint8& OnSuccess, const FDErrorHandler& OnError) {
}

void UABUGC::GetContentByShareCode(const FString& ShareCode, const FDModelsUGCContentResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABUGC::GetContentByContentId(const FString& ContentId, const FDModelsUGCContentResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABUGC::GetChannels(const FDModelsUGCChannelsPagingResponse& OnSuccess, const FDErrorHandler& OnError, int32 Limit, int32 Offset) {
}

void UABUGC::DeleteContent(const FString& ChannelId, const FString& ContentId, const FDHandler& OnSuccess, const FDErrorHandler& OnError) {
}

void UABUGC::DeleteChannel(const FString& ChannelId, const FDHandler& OnSuccess, const FDErrorHandler& OnError) {
}

void UABUGC::CreateContentByStruct(const FString& ChannelId, const FAccelByteModelsUGCRequest& UGCRequest, const FDModelsUGCResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABUGC::CreateContent(const FString& ChannelId, const FString& Name, const FString& Type, const FString& SubType, const TArray<FString>& Tags, const TArray<uint8>& Preview, const FString& FileExtension, const FDModelsUGCResponse& OnSuccess, const FDErrorHandler& OnError, const FString& ContentType) {
}

void UABUGC::CreateChannel(const FString& ChannelName, const FDModelsUGCChannelResponse& OnSuccess, const FDErrorHandler& OnError) {
}


