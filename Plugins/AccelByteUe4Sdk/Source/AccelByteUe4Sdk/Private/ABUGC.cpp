#include "ABUGC.h"

void UABUGC::UploadContentScreenshotV2(const FString& ContentId, FAccelByteModelsUGCUploadScreenshotsRequestV2 ScreenshotsRequest, const FDModelsUGCUpdateContentScreenshotResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABUGC::UpdateLikeStatusToContentV2(const FString& ContentId, bool bLikeStatus, const FDModelsUGCUpdateLikeStatusToContentResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABUGC::UpdateLikeStatusToContent(const FString& ContentId, bool bLikeStatus, const FDModelsUGCUpdateLikeStatusToContentResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABUGC::UpdateFollowStatusToUser(const FString& UserId, bool bFollowStatus, const FDModelsUGCUpdateFollowStatusToUserResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABUGC::UpdateContentScreenshotV2(const FString& ContentId, FAccelByteModelsUGCUpdateScreenshotsV2 ScreenshotsRequest, const FDModelsUGCUpdateScreenshotsV2& OnSuccess, const FDErrorHandler& OnError) {
}

void UABUGC::UpdateContentFileLocationV2(const FString& ChannelId, const FString& ContentId, const FString& FileExtension, const FString& S3Key, const FDModelsUGCUpdateContentFileLocation& OnSuccess, const FDErrorHandler& OnError) {
}

void UABUGC::SearchContentsV2(const FAccelByteModelsUGCFilterRequestV2& Filter, const FDModelsUGCSearchContentsPagingResponseV2& OnSuccess, const FDErrorHandler& OnError, int32 Limit, int32 Offset, EAccelByteUGCContentSortByV2 SortBy) {
}

void UABUGC::SearchContentsSpecificToChannelV2(const FString& ChannelId, const FDModelsUGCSearchContentsPagingResponseV2& OnSuccess, const FDErrorHandler& OnError, int32 Limit, int32 Offset, EAccelByteUGCContentSortByV2 SortBy) {
}

void UABUGC::SearchContentsSpecificToChannel(const FString& ChannelId, const FString& Name, const FString& Creator, const FString& Type, const FString& Subtype, const TArray<FString>& Tags, bool IsOfficial, const FString& UserId, const FDModelsUGCSearchContentsPagingResponse& OnSuccess, const FDErrorHandler& OnError, EAccelByteUgcSortBy SortBy, EAccelByteUgcOrderBy OrderBy, int32 Limit, int32 Offset) {
}

void UABUGC::SearchContentsByChannelId(const FString& ChannelId, const FAccelByteModelsUGCSearchContentsRequest& Request, const FDModelsUGCSearchContentsPagingResponse& OnSuccess, const FDErrorHandler& OnError, int32 Limit, int32 Offset) {
}

void UABUGC::SearchContents(const FString& Name, const FString& Creator, const FString& Type, const FString& Subtype, const TArray<FString>& Tags, bool IsOfficial, const FString& UserId, const FDModelsUGCSearchContentsPagingResponse& OnSuccess, const FDErrorHandler& OnError, EAccelByteUgcSortBy SortBy, EAccelByteUgcOrderBy OrderBy, int32 Limit, int32 Offset) {
}

void UABUGC::SearchAllContents(const FAccelByteModelsUGCSearchContentsRequest& Request, const FDModelsUGCSearchContentsPagingResponse& OnSuccess, const FDErrorHandler& OnError, int32 Limit, int32 Offset) {
}

void UABUGC::ModifyContentV2(const FString& ChannelId, const FString& ContentId, const FAccelByteModelsModifyUGCRequestV2& ModifyRequest, const FDModelsUGCModifyUGCResponseV2& OnSuccess, const FDErrorHandler& OnError) {
}

void UABUGC::ModifyContentShareCodeV2(const FString& ChannelId, const FString& ContentId, const FAccelByteModelsUGCModifyContentShareCodeRequest& ModifyContentShareCodeRequest, const FDModelsUGCCreateUGCResponseV2& OnSuccess, const FDErrorHandler& OnError) {
}

void UABUGC::ModifyContentShareCode(const FString& ChannelId, const FString& ContentId, const FAccelByteModelsUGCModifyContentShareCodeRequest& ModifyContentShareCodeRequest, const FDModelsUGCResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABUGC::ModifyContentByUpdateStruct(const FString& ChannelId, const FString& ContentId, const FAccelByteModelsUGCUpdateRequest& UGCRequest, const FDModelsUGCResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABUGC::ModifyContentByStruct(const FString& ChannelId, const FString& ContentId, const FAccelByteModelsUGCRequest& UGCRequest, const FDModelsUGCResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABUGC::ModifyContentByShareCode(const FString& ChannelId, const FString& ShareCode, const FAccelByteModelsUGCUpdateRequest& ModifyRequest, const FDModelsUGCResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABUGC::ModifyContent(const FString& ChannelId, const FString& ContentId, const FString& Name, const FString& Type, const FString& SubType, const TArray<FString>& Tags, const TArray<uint8>& Preview, const FString& FileExtension, const FDModelsUGCResponse& OnSuccess, const FDErrorHandler& OnError, const FString& ContentType) {
}

void UABUGC::GetUserContentsV2(const FString& UserId, const FDModelsUGCContentPageResponseV2& OnSuccess, const FDErrorHandler& OnError, int32 Limit, int32 Offset) {
}

void UABUGC::GetTypes(const FDModelsUGCTypesPagingResponse& OnSuccess, const FDErrorHandler& OnError, int32 Limit, int32 Offset) {
}

void UABUGC::GetTags(const FDModelsUGCTagsPagingResponse& OnSuccess, const FDErrorHandler& OnError, int32 Limit, int32 Offset) {
}

void UABUGC::GetListFollowers(const FString& UserId, const FDModelsUGCGetListFollowersPagingResponse& OnSuccess, const FDErrorHandler& OnError, int32 Limit, int32 Offset) {
}

void UABUGC::GetListContentLikerV2(const FString& ContentId, const FDModelsUGCGetPaginatedContentLikerResponse& OnSuccess, const FDErrorHandler& OnError, int32 Limit, int32 Offset) {
}

void UABUGC::GetListContentDownloaderV2(const FString& ContentId, const FDModelsUGCGetPaginatedContentDownloaderResponse& OnSuccess, const FDErrorHandler& OnError, const FString& UserId, int32 Limit, int32 Offset, EAccelByteUGCContentUtilitiesSortByV2 SortBy) {
}

void UABUGC::GetContentPreviewAsStruct(const FString& ContentId, const FDModelsUGCPreviewResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABUGC::GetContentPreviewAsIntArray(const FString& ContentId, const FDArrayUint8& OnSuccess, const FDErrorHandler& OnError) {
}

void UABUGC::GetContentByShareCodeV2(const FString& ShareCode, const FDModelsUGCContentResponseV2& OnSuccess, const FDErrorHandler& OnError) {
}

void UABUGC::GetContentByShareCode(const FString& ShareCode, const FDModelsUGCContentResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABUGC::GetContentByContentIdV2(const FString& ContentId, const FDModelsUGCContentResponseV2& OnSuccess, const FDErrorHandler& OnError) {
}

void UABUGC::GetContentByContentId(const FString& ContentId, const FDModelsUGCContentResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABUGC::GetContentBulkByIdsV2(const TArray<FString>& ContentIds, const FDModelsUGCBulkContentResponseV2& OnSuccess, const FDErrorHandler& OnError) {
}

void UABUGC::GetChannelsByUserId(const FString& UserId, const FDModelsUGCChannelsPagingResponse& OnSuccess, const FDErrorHandler& OnError, int32 Limit, int32 Offset) {
}

void UABUGC::GetChannels(const FDModelsUGCChannelsPagingResponse& OnSuccess, const FDErrorHandler& OnError, int32 Limit, int32 Offset, const FString& ChannelName) {
}

void UABUGC::GenerateUploadContentURLV2(const FString& ChannelId, const FString& ContentId, const FAccelByteModelsUploadContentURLRequestV2& UploadRequest, const FDModelsUGCUploadContentResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABUGC::DeleteContentV2(const FString& ChannelId, const FString& ContentId, const FDHandler& OnSuccess, const FDErrorHandler& OnError) {
}

void UABUGC::DeleteContentScreenshotV2(const FString& ContentId, const FString& ScreenshotId, const FDHandler& OnSuccess, const FDErrorHandler& OnError) {
}

void UABUGC::DeleteContentByShareCode(const FString& ChannelId, const FString& ShareCode, const FDHandler& OnSuccess, const FDErrorHandler& OnError) {
}

void UABUGC::DeleteContent(const FString& ChannelId, const FString& ContentId, const FDHandler& OnSuccess, const FDErrorHandler& OnError) {
}

void UABUGC::DeleteChannel(const FString& ChannelId, const FDHandler& OnSuccess, const FDErrorHandler& OnError) {
}

void UABUGC::CreateContentV2(const FString& ChannelId, const FAccelByteModelsCreateUGCRequestV2& CreateRequest, const FDModelsUGCCreateUGCResponseV2& OnSuccess, const FDErrorHandler& OnError) {
}

void UABUGC::CreateContentByStruct(const FString& ChannelId, const FAccelByteModelsUGCRequest& UGCRequest, const FDModelsUGCResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABUGC::CreateContent(const FString& ChannelId, const FString& Name, const FString& Type, const FString& SubType, const TArray<FString>& Tags, const TArray<uint8>& Preview, const FString& FileExtension, const FDModelsUGCResponse& OnSuccess, const FDErrorHandler& OnError, const FString& ContentType) {
}

void UABUGC::CreateChannel(const FString& ChannelName, const FDModelsUGCChannelResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABUGC::BulkGetContentByShareCodeV2(const TArray<FString>& ShareCodes, const FDModelsUGCBulkContentResponseV2& OnSuccess, const FDErrorHandler& OnError) {
}

void UABUGC::BulkGetContentByShareCode(const TArray<FString>& ShareCodes, const FDModelsUGCBulkContentResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABUGC::AddDownloadContentCountV2(const FString& ContentId, const FDModelsUGCAddDownloadContentCountResponse& OnSuccess, const FDErrorHandler& OnError) {
}

UABUGC::UABUGC() {
}

