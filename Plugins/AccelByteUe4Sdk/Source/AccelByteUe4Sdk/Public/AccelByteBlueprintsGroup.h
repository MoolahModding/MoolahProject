#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AccelByteModelsCreateGroupRequest.h"
#include "AccelByteModelsGetGroupListRequest.h"
#include "AccelByteModelsGetGroupListResponse.h"
#include "AccelByteModelsGroupInformation.h"
#include "AccelByteModelsGroupUpdatable.h"
#include "AccelByteModelsUpdateCustomRulesRequest.h"
#include "AccelByteModelsUpdateGroupCustomAttributesRequest.h"
#include "AccelByteModelsUpdateGroupPredefinedRuleRequest.h"
#include "DErrorHandlerDelegate.h"
#include "EAccelByteAllowedAction.h"
#include "AccelByteBlueprintsGroup.generated.h"

UCLASS(Blueprintable)
class UAccelByteBlueprintsGroup : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FUpdateGroupSuccess, const FAccelByteModelsGroupInformation&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FUpdateGroupPredefinedRuleSuccess, const FAccelByteModelsGroupInformation&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FUpdateGroupCustomRuleSuccess, const FAccelByteModelsGroupInformation&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FUpdateGroupCustomAttributesSuccess, const FAccelByteModelsGroupInformation&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FSearchGroupsSuccess, const FAccelByteModelsGetGroupListResponse&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FGetGroupSuccess, const FAccelByteModelsGroupInformation&, Result);
    DECLARE_DYNAMIC_DELEGATE(FDeleteGroupSuccess);
    DECLARE_DYNAMIC_DELEGATE(FDeleteGroupPredefinedRuleSuccess);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FCreateGroupSuccess, const FAccelByteModelsGroupInformation&, Result);
    
    UAccelByteBlueprintsGroup();
    UFUNCTION(BlueprintCallable)
    static void UpdateGroupPredefinedRule(const FString& GroupId, const EAccelByteAllowedAction& AllowedAction, const FAccelByteModelsUpdateGroupPredefinedRuleRequest& RequestContent, const UAccelByteBlueprintsGroup::FUpdateGroupPredefinedRuleSuccess& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateGroupCustomRule(const FString& GroupId, const FAccelByteModelsUpdateCustomRulesRequest& RequestContent, const UAccelByteBlueprintsGroup::FUpdateGroupCustomRuleSuccess& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateGroupCustomAttributes(const FString& GroupId, const FAccelByteModelsUpdateGroupCustomAttributesRequest& RequestContent, const UAccelByteBlueprintsGroup::FUpdateGroupCustomAttributesSuccess& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateGroup(const FString& GroupId, const bool bCompletelyReplace, const FAccelByteModelsGroupUpdatable RequestContent, const UAccelByteBlueprintsGroup::FUpdateGroupSuccess& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    static void GetGroupList(const FAccelByteModelsGetGroupListRequest& RequestContent, const UAccelByteBlueprintsGroup::FSearchGroupsSuccess& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    static void GetGroup(const FString& GroupId, const UAccelByteBlueprintsGroup::FGetGroupSuccess& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    static void DeleteGroupPredefinedRule(const FString& GroupId, const EAccelByteAllowedAction& AllowedAction, const UAccelByteBlueprintsGroup::FDeleteGroupPredefinedRuleSuccess& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    static void DeleteGroup(const FString& GroupId, const UAccelByteBlueprintsGroup::FDeleteGroupSuccess& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    static void CreateGroup(const FAccelByteModelsCreateGroupRequest& RequestContent, const UAccelByteBlueprintsGroup::FCreateGroupSuccess& OnSuccess, const FDErrorHandler& OnError);
    
};

