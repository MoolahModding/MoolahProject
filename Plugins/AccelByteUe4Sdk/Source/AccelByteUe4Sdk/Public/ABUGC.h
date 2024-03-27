#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AccelByteModelsCreateUGCRequestV2.h"
#include "AccelByteModelsModifyUGCRequestV2.h"
#include "AccelByteModelsUGCFilterRequestV2.h"
#include "AccelByteModelsUGCModifyContentShareCodeRequest.h"
#include "AccelByteModelsUGCRequest.h"
#include "AccelByteModelsUGCSearchContentsRequest.h"
#include "AccelByteModelsUGCUpdateRequest.h"
#include "AccelByteModelsUGCUpdateScreenshotsV2.h"
#include "AccelByteModelsUGCUploadScreenshotsRequestV2.h"
#include "AccelByteModelsUploadContentURLRequestV2.h"
#include "DArrayUint8Delegate.h"
#include "DErrorHandlerDelegate.h"
#include "DHandlerDelegate.h"
#include "DModelsUGCAddDownloadContentCountResponseDelegate.h"
#include "DModelsUGCBulkContentResponseDelegate.h"
#include "DModelsUGCBulkContentResponseV2Delegate.h"
#include "DModelsUGCChannelResponseDelegate.h"
#include "DModelsUGCChannelsPagingResponseDelegate.h"
#include "DModelsUGCContentPageResponseV2Delegate.h"
#include "DModelsUGCContentResponseDelegate.h"
#include "DModelsUGCContentResponseV2Delegate.h"
#include "DModelsUGCCreateUGCResponseV2Delegate.h"
#include "DModelsUGCGetListFollowersPagingResponseDelegate.h"
#include "DModelsUGCGetPaginatedContentDownloaderResponseDelegate.h"
#include "DModelsUGCGetPaginatedContentLikerResponseDelegate.h"
#include "DModelsUGCModifyUGCResponseV2Delegate.h"
#include "DModelsUGCPreviewResponseDelegate.h"
#include "DModelsUGCResponseDelegate.h"
#include "DModelsUGCSearchContentsPagingResponseDelegate.h"
#include "DModelsUGCSearchContentsPagingResponseV2Delegate.h"
#include "DModelsUGCTagsPagingResponseDelegate.h"
#include "DModelsUGCTypesPagingResponseDelegate.h"
#include "DModelsUGCUpdateContentFileLocationDelegate.h"
#include "DModelsUGCUpdateContentScreenshotResponseDelegate.h"
#include "DModelsUGCUpdateFollowStatusToUserResponseDelegate.h"
#include "DModelsUGCUpdateLikeStatusToContentResponseDelegate.h"
#include "DModelsUGCUpdateScreenshotsV2Delegate.h"
#include "DModelsUGCUploadContentResponseDelegate.h"
#include "EAccelByteUGCContentSortByV2.h"
#include "EAccelByteUGCContentUtilitiesSortByV2.h"
#include "EAccelByteUgcOrderBy.h"
#include "EAccelByteUgcSortBy.h"
#include "ABUGC.generated.h"

UCLASS(Blueprintable)
class UABUGC : public UObject {
    GENERATED_BODY()
public:
    UABUGC();
    UFUNCTION(BlueprintCallable)
    void UploadContentScreenshotV2(const FString& ContentId, FAccelByteModelsUGCUploadScreenshotsRequestV2 ScreenshotsRequest, const FDModelsUGCUpdateContentScreenshotResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void UpdateLikeStatusToContentV2(const FString& ContentId, bool bLikeStatus, const FDModelsUGCUpdateLikeStatusToContentResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void UpdateLikeStatusToContent(const FString& ContentId, bool bLikeStatus, const FDModelsUGCUpdateLikeStatusToContentResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void UpdateFollowStatusToUser(const FString& UserId, bool bFollowStatus, const FDModelsUGCUpdateFollowStatusToUserResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void UpdateContentScreenshotV2(const FString& ContentId, FAccelByteModelsUGCUpdateScreenshotsV2 ScreenshotsRequest, const FDModelsUGCUpdateScreenshotsV2& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void UpdateContentFileLocationV2(const FString& ChannelId, const FString& ContentId, const FString& FileExtension, const FString& S3Key, const FDModelsUGCUpdateContentFileLocation& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void SearchContentsV2(const FAccelByteModelsUGCFilterRequestV2& Filter, const FDModelsUGCSearchContentsPagingResponseV2& OnSuccess, const FDErrorHandler& OnError, int32 Limit, int32 Offset, EAccelByteUGCContentSortByV2 SortBy);
    
    UFUNCTION(BlueprintCallable)
    void SearchContentsSpecificToChannelV2(const FString& ChannelId, const FDModelsUGCSearchContentsPagingResponseV2& OnSuccess, const FDErrorHandler& OnError, int32 Limit, int32 Offset, EAccelByteUGCContentSortByV2 SortBy);
    
    UFUNCTION(BlueprintCallable)
    void SearchContentsSpecificToChannel(const FString& ChannelId, const FString& Name, const FString& Creator, const FString& Type, const FString& Subtype, const TArray<FString>& Tags, bool IsOfficial, const FString& UserId, const FDModelsUGCSearchContentsPagingResponse& OnSuccess, const FDErrorHandler& OnError, EAccelByteUgcSortBy SortBy, EAccelByteUgcOrderBy OrderBy, int32 Limit, int32 Offset);
    
    UFUNCTION(BlueprintCallable)
    void SearchContentsByChannelId(const FString& ChannelId, const FAccelByteModelsUGCSearchContentsRequest& Request, const FDModelsUGCSearchContentsPagingResponse& OnSuccess, const FDErrorHandler& OnError, int32 Limit, int32 Offset);
    
    UFUNCTION(BlueprintCallable)
    void SearchContents(const FString& Name, const FString& Creator, const FString& Type, const FString& Subtype, const TArray<FString>& Tags, bool IsOfficial, const FString& UserId, const FDModelsUGCSearchContentsPagingResponse& OnSuccess, const FDErrorHandler& OnError, EAccelByteUgcSortBy SortBy, EAccelByteUgcOrderBy OrderBy, int32 Limit, int32 Offset);
    
    UFUNCTION(BlueprintCallable)
    void SearchAllContents(const FAccelByteModelsUGCSearchContentsRequest& Request, const FDModelsUGCSearchContentsPagingResponse& OnSuccess, const FDErrorHandler& OnError, int32 Limit, int32 Offset);
    
    UFUNCTION(BlueprintCallable)
    void ModifyContentV2(const FString& ChannelId, const FString& ContentId, const FAccelByteModelsModifyUGCRequestV2& ModifyRequest, const FDModelsUGCModifyUGCResponseV2& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void ModifyContentShareCodeV2(const FString& ChannelId, const FString& ContentId, const FAccelByteModelsUGCModifyContentShareCodeRequest& ModifyContentShareCodeRequest, const FDModelsUGCCreateUGCResponseV2& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void ModifyContentShareCode(const FString& ChannelId, const FString& ContentId, const FAccelByteModelsUGCModifyContentShareCodeRequest& ModifyContentShareCodeRequest, const FDModelsUGCResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void ModifyContentByUpdateStruct(const FString& ChannelId, const FString& ContentId, const FAccelByteModelsUGCUpdateRequest& UGCRequest, const FDModelsUGCResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void ModifyContentByStruct(const FString& ChannelId, const FString& ContentId, const FAccelByteModelsUGCRequest& UGCRequest, const FDModelsUGCResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void ModifyContentByShareCode(const FString& ChannelId, const FString& ShareCode, const FAccelByteModelsUGCUpdateRequest& ModifyRequest, const FDModelsUGCResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void ModifyContent(const FString& ChannelId, const FString& ContentId, const FString& Name, const FString& Type, const FString& SubType, const TArray<FString>& Tags, const TArray<uint8>& Preview, const FString& FileExtension, const FDModelsUGCResponse& OnSuccess, const FDErrorHandler& OnError, const FString& ContentType);
    
    UFUNCTION(BlueprintCallable)
    void GetUserContentsV2(const FString& UserId, const FDModelsUGCContentPageResponseV2& OnSuccess, const FDErrorHandler& OnError, int32 Limit, int32 Offset);
    
    UFUNCTION(BlueprintCallable)
    void GetTypes(const FDModelsUGCTypesPagingResponse& OnSuccess, const FDErrorHandler& OnError, int32 Limit, int32 Offset);
    
    UFUNCTION(BlueprintCallable)
    void GetTags(const FDModelsUGCTagsPagingResponse& OnSuccess, const FDErrorHandler& OnError, int32 Limit, int32 Offset);
    
    UFUNCTION(BlueprintCallable)
    void GetListFollowers(const FString& UserId, const FDModelsUGCGetListFollowersPagingResponse& OnSuccess, const FDErrorHandler& OnError, int32 Limit, int32 Offset);
    
    UFUNCTION(BlueprintCallable)
    void GetListContentLikerV2(const FString& ContentId, const FDModelsUGCGetPaginatedContentLikerResponse& OnSuccess, const FDErrorHandler& OnError, int32 Limit, int32 Offset);
    
    UFUNCTION(BlueprintCallable)
    void GetListContentDownloaderV2(const FString& ContentId, const FDModelsUGCGetPaginatedContentDownloaderResponse& OnSuccess, const FDErrorHandler& OnError, const FString& UserId, int32 Limit, int32 Offset, EAccelByteUGCContentUtilitiesSortByV2 SortBy);
    
    UFUNCTION(BlueprintCallable)
    void GetContentPreviewAsStruct(const FString& ContentId, const FDModelsUGCPreviewResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetContentPreviewAsIntArray(const FString& ContentId, const FDArrayUint8& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetContentByShareCodeV2(const FString& ShareCode, const FDModelsUGCContentResponseV2& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetContentByShareCode(const FString& ShareCode, const FDModelsUGCContentResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetContentByContentIdV2(const FString& ContentId, const FDModelsUGCContentResponseV2& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetContentByContentId(const FString& ContentId, const FDModelsUGCContentResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetContentBulkByIdsV2(const TArray<FString>& ContentIds, const FDModelsUGCBulkContentResponseV2& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetChannelsByUserId(const FString& UserId, const FDModelsUGCChannelsPagingResponse& OnSuccess, const FDErrorHandler& OnError, int32 Limit, int32 Offset);
    
    UFUNCTION(BlueprintCallable)
    void GetChannels(const FDModelsUGCChannelsPagingResponse& OnSuccess, const FDErrorHandler& OnError, int32 Limit, int32 Offset, const FString& ChannelName);
    
    UFUNCTION(BlueprintCallable)
    void GenerateUploadContentURLV2(const FString& ChannelId, const FString& ContentId, const FAccelByteModelsUploadContentURLRequestV2& UploadRequest, const FDModelsUGCUploadContentResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void DeleteContentV2(const FString& ChannelId, const FString& ContentId, const FDHandler& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void DeleteContentScreenshotV2(const FString& ContentId, const FString& ScreenshotId, const FDHandler& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void DeleteContentByShareCode(const FString& ChannelId, const FString& ShareCode, const FDHandler& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void DeleteContent(const FString& ChannelId, const FString& ContentId, const FDHandler& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void DeleteChannel(const FString& ChannelId, const FDHandler& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void CreateContentV2(const FString& ChannelId, const FAccelByteModelsCreateUGCRequestV2& CreateRequest, const FDModelsUGCCreateUGCResponseV2& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void CreateContentByStruct(const FString& ChannelId, const FAccelByteModelsUGCRequest& UGCRequest, const FDModelsUGCResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void CreateContent(const FString& ChannelId, const FString& Name, const FString& Type, const FString& SubType, const TArray<FString>& Tags, const TArray<uint8>& Preview, const FString& FileExtension, const FDModelsUGCResponse& OnSuccess, const FDErrorHandler& OnError, const FString& ContentType);
    
    UFUNCTION(BlueprintCallable)
    void CreateChannel(const FString& ChannelName, const FDModelsUGCChannelResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void BulkGetContentByShareCodeV2(const TArray<FString>& ShareCodes, const FDModelsUGCBulkContentResponseV2& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void BulkGetContentByShareCode(const TArray<FString>& ShareCodes, const FDModelsUGCBulkContentResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void AddDownloadContentCountV2(const FString& ContentId, const FDModelsUGCAddDownloadContentCountResponse& OnSuccess, const FDErrorHandler& OnError);
    
};

