#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AccelByteModelsUGCRequest.h"
#include "DArrayUint8Delegate.h"
#include "DErrorHandlerDelegate.h"
#include "DHandlerDelegate.h"
#include "DModelsUGCChannelResponseDelegate.h"
#include "DModelsUGCChannelsPagingResponseDelegate.h"
#include "DModelsUGCContentResponseDelegate.h"
#include "DModelsUGCGetListFollowersPagingResponseDelegate.h"
#include "DModelsUGCPreviewResponseDelegate.h"
#include "DModelsUGCResponseDelegate.h"
#include "DModelsUGCSearchContentsPagingResponseDelegate.h"
#include "DModelsUGCTagsPagingResponseDelegate.h"
#include "DModelsUGCTypesPagingResponseDelegate.h"
#include "DModelsUGCUpdateFollowStatusToUserResponseDelegate.h"
#include "DModelsUGCUpdateLikeStatusToContentResponseDelegate.h"
#include "EAccelByteUgcOrderBy.h"
#include "EAccelByteUgcSortBy.h"
#include "ABUGC.generated.h"

UCLASS(Blueprintable)
class UABUGC : public UObject {
    GENERATED_BODY()
public:
    UABUGC();

    UFUNCTION(BlueprintCallable)
    void UpdateLikeStatusToContent(const FString& ContentId, bool bLikeStatus, const FDModelsUGCUpdateLikeStatusToContentResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void UpdateFollowStatusToUser(const FString& UserId, bool bFollowStatus, const FDModelsUGCUpdateFollowStatusToUserResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void SearchContentsSpecificToChannel(const FString& ChannelId, const FString& Name, const FString& Creator, const FString& Type, const FString& Subtype, const TArray<FString>& Tags, bool IsOfficial, const FString& UserId, const FDModelsUGCSearchContentsPagingResponse& OnSuccess, const FDErrorHandler& OnError, EAccelByteUgcSortBy SortBy, EAccelByteUgcOrderBy OrderBy, int32 Limit, int32 Offset);
    
    UFUNCTION(BlueprintCallable)
    void SearchContents(const FString& Name, const FString& Creator, const FString& Type, const FString& Subtype, const TArray<FString>& Tags, bool IsOfficial, const FString& UserId, const FDModelsUGCSearchContentsPagingResponse& OnSuccess, const FDErrorHandler& OnError, EAccelByteUgcSortBy SortBy, EAccelByteUgcOrderBy OrderBy, int32 Limit, int32 Offset);
    
    UFUNCTION(BlueprintCallable)
    void ModifyContentByStruct(const FString& ChannelId, const FString& ContentId, const FAccelByteModelsUGCRequest& UGCRequest, const FDModelsUGCResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void ModifyContent(const FString& ChannelId, const FString& ContentId, const FString& Name, const FString& Type, const FString& SubType, const TArray<FString>& Tags, const TArray<uint8>& Preview, const FString& FileExtension, const FDModelsUGCResponse& OnSuccess, const FDErrorHandler& OnError, const FString& ContentType);
    
    UFUNCTION(BlueprintCallable)
    void GetTypes(const FDModelsUGCTypesPagingResponse& OnSuccess, const FDErrorHandler& OnError, int32 Limit, int32 Offset);
    
    UFUNCTION(BlueprintCallable)
    void GetTags(const FDModelsUGCTagsPagingResponse& OnSuccess, const FDErrorHandler& OnError, int32 Limit, int32 Offset);
    
    UFUNCTION(BlueprintCallable)
    void GetListFollowers(const FString& UserId, const FDModelsUGCGetListFollowersPagingResponse& OnSuccess, const FDErrorHandler& OnError, int32 Limit, int32 Offset);
    
    UFUNCTION(BlueprintCallable)
    void GetContentPreviewAsStruct(const FString& ContentId, const FDModelsUGCPreviewResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetContentPreviewAsIntArray(const FString& ContentId, const FDArrayUint8& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetContentByShareCode(const FString& ShareCode, const FDModelsUGCContentResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetContentByContentId(const FString& ContentId, const FDModelsUGCContentResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetChannels(const FDModelsUGCChannelsPagingResponse& OnSuccess, const FDErrorHandler& OnError, int32 Limit, int32 Offset);
    
    UFUNCTION(BlueprintCallable)
    void DeleteContent(const FString& ChannelId, const FString& ContentId, const FDHandler& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void DeleteChannel(const FString& ChannelId, const FDHandler& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void CreateContentByStruct(const FString& ChannelId, const FAccelByteModelsUGCRequest& UGCRequest, const FDModelsUGCResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void CreateContent(const FString& ChannelId, const FString& Name, const FString& Type, const FString& SubType, const TArray<FString>& Tags, const TArray<uint8>& Preview, const FString& FileExtension, const FDModelsUGCResponse& OnSuccess, const FDErrorHandler& OnError, const FString& ContentType);
    
    UFUNCTION(BlueprintCallable)
    void CreateChannel(const FString& ChannelName, const FDModelsUGCChannelResponse& OnSuccess, const FDErrorHandler& OnError);
    
};

