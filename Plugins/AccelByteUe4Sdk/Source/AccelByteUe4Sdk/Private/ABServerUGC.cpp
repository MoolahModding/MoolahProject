#include "ABServerUGC.h"

void UABServerUGC::SearchContentsSpecificToChannel(const FString& ChannelId, const FAccelByteModelsUGCSearchContentsRequest& Request, const FDModelsUGCSearchContentsResponse& OnSuccess, const FDErrorHandler& OnError, int32 Limit, int32 Offset) {
}

void UABServerUGC::SearchContents(const FAccelByteModelsUGCSearchContentsRequest& Request, const FDModelsUGCSearchContentsResponse& OnSuccess, const FDErrorHandler& OnError, int32 Limit, int32 Offset) {
}

void UABServerUGC::ModifyContentByShareCode(const FString& UserId, const FString& ChannelId, const FString& ShareCode, const FAccelByteModelsUGCUpdateRequest& ModifyRequest, const FDModelsUGCServerResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABServerUGC::DeleteContentByShareCode(const FString& UserId, const FString& ChannelId, const FString& ShareCode, const FDHandler& OnSuccess, const FDErrorHandler& OnError) {
}

UABServerUGC::UABServerUGC() {
}

