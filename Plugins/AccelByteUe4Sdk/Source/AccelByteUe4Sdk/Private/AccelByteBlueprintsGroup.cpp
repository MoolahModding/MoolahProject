#include "AccelByteBlueprintsGroup.h"

UAccelByteBlueprintsGroup::UAccelByteBlueprintsGroup() {
}

void UAccelByteBlueprintsGroup::UpdateGroupPredefinedRule(const FString& GroupId, const EAccelByteAllowedAction& AllowedAction, const FAccelByteModelsUpdateGroupPredefinedRuleRequest& RequestContent, const UAccelByteBlueprintsGroup::FUpdateGroupPredefinedRuleSuccess& OnSuccess, const FDErrorHandler& OnError) {
}

void UAccelByteBlueprintsGroup::UpdateGroupCustomRule(const FString& GroupId, const FAccelByteModelsUpdateCustomRulesRequest& RequestContent, const UAccelByteBlueprintsGroup::FUpdateGroupCustomRuleSuccess& OnSuccess, const FDErrorHandler& OnError) {
}

void UAccelByteBlueprintsGroup::UpdateGroupCustomAttributes(const FString& GroupId, const FAccelByteModelsUpdateGroupCustomAttributesRequest& RequestContent, const UAccelByteBlueprintsGroup::FUpdateGroupCustomAttributesSuccess& OnSuccess, const FDErrorHandler& OnError) {
}

void UAccelByteBlueprintsGroup::UpdateGroup(const FString& GroupId, const bool bCompletelyReplace, const FAccelByteModelsGroupUpdatable RequestContent, const UAccelByteBlueprintsGroup::FUpdateGroupSuccess& OnSuccess, const FDErrorHandler& OnError) {
}

void UAccelByteBlueprintsGroup::GetGroupList(const FAccelByteModelsGetGroupListRequest& RequestContent, const UAccelByteBlueprintsGroup::FSearchGroupsSuccess& OnSuccess, const FDErrorHandler& OnError) {
}

void UAccelByteBlueprintsGroup::GetGroup(const FString& GroupId, const UAccelByteBlueprintsGroup::FGetGroupSuccess& OnSuccess, const FDErrorHandler& OnError) {
}

void UAccelByteBlueprintsGroup::DeleteGroupPredefinedRule(const FString& GroupId, const EAccelByteAllowedAction& AllowedAction, const UAccelByteBlueprintsGroup::FDeleteGroupPredefinedRuleSuccess& OnSuccess, const FDErrorHandler& OnError) {
}

void UAccelByteBlueprintsGroup::DeleteGroup(const FString& GroupId, const UAccelByteBlueprintsGroup::FDeleteGroupSuccess& OnSuccess, const FDErrorHandler& OnError) {
}

void UAccelByteBlueprintsGroup::CreateGroup(const FAccelByteModelsCreateGroupRequest& RequestContent, const UAccelByteBlueprintsGroup::FCreateGroupSuccess& OnSuccess, const FDErrorHandler& OnError) {
}


