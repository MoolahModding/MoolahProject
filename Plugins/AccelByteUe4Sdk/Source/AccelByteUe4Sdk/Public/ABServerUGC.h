#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AccelByteModelsUGCSearchContentsRequest.h"
#include "AccelByteModelsUGCUpdateRequest.h"
#include "DErrorHandlerDelegate.h"
#include "DHandlerDelegate.h"
#include "DModelsUGCSearchContentsResponseDelegate.h"
#include "DModelsUGCServerResponseDelegate.h"
#include "ABServerUGC.generated.h"

UCLASS(Blueprintable)
class UABServerUGC : public UObject {
    GENERATED_BODY()
public:
    UABServerUGC();
    UFUNCTION(BlueprintCallable)
    void SearchContentsSpecificToChannel(const FString& ChannelId, const FAccelByteModelsUGCSearchContentsRequest& Request, const FDModelsUGCSearchContentsResponse& OnSuccess, const FDErrorHandler& OnError, int32 Limit, int32 Offset);
    
    UFUNCTION(BlueprintCallable)
    void SearchContents(const FAccelByteModelsUGCSearchContentsRequest& Request, const FDModelsUGCSearchContentsResponse& OnSuccess, const FDErrorHandler& OnError, int32 Limit, int32 Offset);
    
    UFUNCTION(BlueprintCallable)
    void ModifyContentByShareCode(const FString& UserId, const FString& ChannelId, const FString& ShareCode, const FAccelByteModelsUGCUpdateRequest& ModifyRequest, const FDModelsUGCServerResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void DeleteContentByShareCode(const FString& UserId, const FString& ChannelId, const FString& ShareCode, const FDHandler& OnSuccess, const FDErrorHandler& OnError);
    
};

