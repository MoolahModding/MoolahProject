#include "ABGroup.h"

void UABGroup::UpdateV2GroupPredefinedRule(const FString& GroupId, const EAccelByteAllowedAction& AllowedAction, const FAccelByteModelsUpdateGroupPredefinedRuleRequest& RequestContent, const FUpdateGroupPredefinedRuleSuccess& OnSuccess, const FDErrorHandler& OnError) {
}

void UABGroup::UpdateV2GroupCustomRule(const FString& GroupId, const FAccelByteModelsUpdateCustomRulesRequest& RequestContent, const FUpdateGroupCustomRuleSuccess& OnSuccess, const FDErrorHandler& OnError) {
}

void UABGroup::UpdateV2GroupCustomAttributes(const FString& GroupId, const FAccelByteModelsUpdateGroupCustomAttributesRequest& RequestContent, const FUpdateGroupCustomAttributesSuccess& OnSuccess, const FDErrorHandler& OnError) {
}

void UABGroup::UpdateV2Group(const FString& GroupId, const FAccelByteModelsUpdateGroupRequest& RequestContent, const FUpdateGroupSuccess& OnSuccess, const FDErrorHandler& OnError) {
}

void UABGroup::UpdateGroupPredefinedRule(const FString& GroupId, const EAccelByteAllowedAction& AllowedAction, const FAccelByteModelsUpdateGroupPredefinedRuleRequest& RequestContent, const FUpdateGroupPredefinedRuleSuccess& OnSuccess, const FDErrorHandler& OnError) {
}

void UABGroup::UpdateGroupCustomRule(const FString& GroupId, FAccelByteModelsUpdateCustomRulesRequest& RequestContent, const FUpdateGroupCustomRuleSuccess& OnSuccess, const FDErrorHandler& OnError) {
}

void UABGroup::UpdateGroupCustomAttributes(const FString& GroupId, FAccelByteModelsUpdateGroupCustomAttributesRequest& RequestContent, const FUpdateGroupCustomAttributesSuccess& OnSuccess, const FDErrorHandler& OnError) {
}

void UABGroup::UpdateGroup(const FString& GroupId, const bool bCompletelyReplace, FAccelByteModelsGroupUpdatable& RequestContent, const FUpdateGroupSuccess& OnSuccess, const FDErrorHandler& OnError) {
}

void UABGroup::RejectV2GroupJoinRequest(const FString& UserId, const FString& GroupId, const FRejectGroupJoinRequestSuccess& OnSuccess, const FDErrorHandler& OnError) {
}

void UABGroup::RejectV2GroupInvitation(const FString& GroupId, const FRejectGroupInvitationSuccess& OnSuccess, const FDErrorHandler& OnError) {
}

void UABGroup::RejectGroupJoinRequest(const FString& UserId, const FRejectGroupJoinRequestSuccess& OnSuccess, const FDErrorHandler& OnError) {
}

void UABGroup::RejectGroupInvitation(const FString& GroupId, const FRejectGroupInvitationSuccess& OnSuccess, const FDErrorHandler& OnError) {
}

void UABGroup::LeaveV2Group(const FString& GroupId, const FLeaveGroupSuccess& OnSuccess, const FDErrorHandler& OnError) {
}

void UABGroup::LeaveGroup(const FLeaveGroupSuccess& OnSuccess, const FDErrorHandler& OnError) {
}

void UABGroup::KickV2GroupMember(const FString& UserId, const FString& GroupId, const FKickGroupMemberSuccess& OnSuccess, const FDErrorHandler& OnError) {
}

void UABGroup::KickGroupMember(const FString& UserId, const FKickGroupMemberSuccess& OnSuccess, const FDErrorHandler& OnError) {
}

void UABGroup::JoinV2Group(const FString& GroupId, const FJoinGroupSuccess& OnSuccess, const FDErrorHandler& OnError) {
}

void UABGroup::JoinGroup(const FString& GroupId, const FJoinGroupSuccess& OnSuccess, const FDErrorHandler& OnError) {
}

void UABGroup::InviteUserToV2Group(const FString& UserId, const FString& GroupId, const FInviteUserToGroupSuccess& OnSuccess, const FDErrorHandler& OnError) {
}

void UABGroup::InviteUserToGroup(const FString& UserId, const FInviteUserToGroupSuccess& OnSuccess, const FDErrorHandler& OnError) {
}

void UABGroup::GetUserGroupStatusInfo(const FString& UserId, const FString& GroupId, const FGetUserGroupInfoSuccess& OnSuccess, const FDErrorHandler OnError) {
}

void UABGroup::GetUserGroupInfoByUserId(const FString& UserId, const FGetUserGroupInfoByUserIdSuccess& OnSuccess, const FDErrorHandler& OnError) {
}

void UABGroup::GetMyJoinGroupRequest(const FAccelByteModelsLimitOffsetRequest& RequestContent, const FGetMyJoinGroupRequestSuccess& OnSuccess, const FDErrorHandler& OnError) {
}

void UABGroup::GetMyJoinedGroupInfo(const FAccelByteModelsLimitOffsetRequest& RequestContent, const FGetMyJoinedGroupInfoSuccess& OnSuccess, const FDErrorHandler& OnError) {
}

void UABGroup::GetMemberRoles(const FAccelByteModelsLimitOffsetRequest& RequestContent, const FGetMemberRolesSuccess& OnSuccess, const FDErrorHandler& OnError) {
}

void UABGroup::GetGroupsByGroupIds(const TArray<FString> GroupIds, const FGetGroupsByGroupIdsSuccess& OnSuccess, const FDErrorHandler& OnError) {
}

void UABGroup::GetGroupMembersListByGroupId(const FString& GroupId, const FAccelByteModelsGetGroupMembersListByGroupIdRequest& RequestContent, const FGetGroupMembersListByGroupIdSuccess& OnSuccess, const FDErrorHandler& OnError) {
}

void UABGroup::GetGroupList(const FAccelByteModelsGetGroupListRequest& RequestContent, const FSearchGroupsSuccess& OnSuccess, const FDErrorHandler& OnError) {
}

void UABGroup::GetGroupJoinRequests(const FString& GroupId, const FAccelByteModelsLimitOffsetRequest& RequestContent, const FGetGroupJoinRequestsSuccess& OnSuccess, const FDErrorHandler& OnError) {
}

void UABGroup::GetGroupJoinRequestList(const FString& GroupId, const FAccelByteModelsLimitOffsetRequest& RequestContent, const FGetGroupJoinRequestsSuccess& OnSuccess, const FDErrorHandler& OnError) {
}

void UABGroup::GetGroupInviteRequestList(const FString& GroupId, const FAccelByteModelsLimitOffsetRequest& RequestContent, const FGetGroupInvitationRequestsSuccess& OnSuccess, const FDErrorHandler& OnError) {
}

void UABGroup::GetGroup(const FString& GroupId, const FGetGroupSuccess& OnSuccess, const FDErrorHandler& OnError) {
}

void UABGroup::GetAllMemberRoles(const FAccelByteModelsLimitOffsetRequest& RequestContent, const FGetMemberRolesSuccess& OnSuccess, const FDErrorHandler& OnError) {
}

void UABGroup::DeleteV2MemberRole(const FString& MemberRoleId, const FString& GroupId, const FAccelByteModelsUserIdWrapper& RequestContent, const FDeleteMemberRoleSuccess& OnSuccess, const FDErrorHandler& OnError) {
}

void UABGroup::DeleteV2GroupPredefinedRule(const FString& GroupId, const EAccelByteAllowedAction& AllowedAction, const FDeleteGroupPredefinedRuleSuccess& OnSuccess, const FDErrorHandler& OnError) {
}

void UABGroup::DeleteV2Group(const FString& GroupId, const FDeleteGroupSuccess& OnSuccess, const FDErrorHandler& OnError) {
}

void UABGroup::DeleteMemberRole(const FString& MemberRoleId, const FAccelByteModelsUserIdWrapper& RequestContent, const FDeleteMemberRoleSuccess& OnSuccess, const FDErrorHandler& OnError) {
}

void UABGroup::DeleteGroupPredefinedRule(const FString& GroupId, const EAccelByteAllowedAction& AllowedAction, const FDeleteGroupPredefinedRuleSuccess& OnSuccess, const FDErrorHandler& OnError) {
}

void UABGroup::DeleteGroup(const FString& GroupId, const FDeleteGroupSuccess& OnSuccess, const FDErrorHandler& OnError) {
}

void UABGroup::CreateV2Group(const FAccelByteModelsCreateGroupRequest& RequestContent, const FCreateGroupSuccess& OnSuccess, const FDErrorHandler& OnError) {
}

void UABGroup::CreateGroup(const FAccelByteModelsCreateGroupRequest& RequestContent, const FCreateGroupSuccess& OnSuccess, const FDErrorHandler& OnError) {
}

void UABGroup::CancelJoinGroupRequest(const FString& GroupId, const FCancelJoinGroupRequestSuccess& OnSuccess, const FDErrorHandler& OnError) {
}

void UABGroup::CancelGroupMemberInvitation(const FString& UserId, const FString& GroupId, const FCanceGroupInviteRequestSuccess& OnSuccess, const FDErrorHandler& OnError) {
}

void UABGroup::AssignV2MemberRole(const FString& MemberRoleId, const FString& GroupId, const FAccelByteModelsUserIdWrapper& RequestContent, const FAssignMemberRoleSuccess& OnSuccess, const FDErrorHandler& OnError) {
}

void UABGroup::AssignMemberRole(const FString& MemberRoleId, const FAccelByteModelsUserIdWrapper& RequestContent, const FAssignMemberRoleSuccess& OnSuccess, const FDErrorHandler& OnError) {
}

void UABGroup::AcceptV2GroupJoinRequest(const FString& UserId, const FString& GroupId, const FAcceptGroupJoinRequestSuccess& OnSuccess, const FDErrorHandler& OnError) {
}

void UABGroup::AcceptV2GroupInvitation(const FString& GroupId, const FAcceptGroupInvitationSuccess& OnSuccess, const FDErrorHandler& OnError) {
}

void UABGroup::AcceptGroupJoinRequest(const FString& UserId, const FAcceptGroupJoinRequestSuccess& OnSuccess, const FDErrorHandler& OnError) {
}

void UABGroup::AcceptGroupInvitation(const FString& GroupId, const FAcceptGroupInvitationSuccess& OnSuccess, const FDErrorHandler& OnError) {
}

UABGroup::UABGroup() {
}

