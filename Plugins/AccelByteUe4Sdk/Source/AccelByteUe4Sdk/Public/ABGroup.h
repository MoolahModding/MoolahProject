#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AccelByteModelsCreateGroupRequest.h"
#include "AccelByteModelsGetGroupListRequest.h"
#include "AccelByteModelsGetGroupMembersListByGroupIdRequest.h"
#include "AccelByteModelsGroupUpdatable.h"
#include "AccelByteModelsLimitOffsetRequest.h"
#include "AccelByteModelsUpdateCustomRulesRequest.h"
#include "AccelByteModelsUpdateGroupCustomAttributesRequest.h"
#include "AccelByteModelsUpdateGroupPredefinedRuleRequest.h"
#include "AccelByteModelsUpdateGroupRequest.h"
#include "AccelByteModelsUserIdWrapper.h"
#include "AcceptGroupInvitationSuccessDelegate.h"
#include "AcceptGroupJoinRequestSuccessDelegate.h"
#include "AssignMemberRoleSuccessDelegate.h"
#include "CanceGroupInviteRequestSuccessDelegate.h"
#include "CancelJoinGroupRequestSuccessDelegate.h"
#include "CreateGroupSuccessDelegate.h"
#include "DErrorHandlerDelegate.h"
#include "DeleteGroupPredefinedRuleSuccessDelegate.h"
#include "DeleteGroupSuccessDelegate.h"
#include "DeleteMemberRoleSuccessDelegate.h"
#include "EAccelByteAllowedAction.h"
#include "GetGroupInvitationRequestsSuccessDelegate.h"
#include "GetGroupJoinRequestsSuccessDelegate.h"
#include "GetGroupMembersListByGroupIdSuccessDelegate.h"
#include "GetGroupSuccessDelegate.h"
#include "GetGroupsByGroupIdsSuccessDelegate.h"
#include "GetMemberRolesSuccessDelegate.h"
#include "GetMyJoinGroupRequestSuccessDelegate.h"
#include "GetMyJoinedGroupInfoSuccessDelegate.h"
#include "GetUserGroupInfoByUserIdSuccessDelegate.h"
#include "GetUserGroupInfoSuccessDelegate.h"
#include "InviteUserToGroupSuccessDelegate.h"
#include "JoinGroupSuccessDelegate.h"
#include "KickGroupMemberSuccessDelegate.h"
#include "LeaveGroupSuccessDelegate.h"
#include "RejectGroupInvitationSuccessDelegate.h"
#include "RejectGroupJoinRequestSuccessDelegate.h"
#include "SearchGroupsSuccessDelegate.h"
#include "UpdateGroupCustomAttributesSuccessDelegate.h"
#include "UpdateGroupCustomRuleSuccessDelegate.h"
#include "UpdateGroupPredefinedRuleSuccessDelegate.h"
#include "UpdateGroupSuccessDelegate.h"
#include "ABGroup.generated.h"

UCLASS(Blueprintable)
class UABGroup : public UObject {
    GENERATED_BODY()
public:
    UABGroup();

    UFUNCTION(BlueprintCallable)
    void UpdateV2GroupPredefinedRule(const FString& GroupId, const EAccelByteAllowedAction& AllowedAction, const FAccelByteModelsUpdateGroupPredefinedRuleRequest& RequestContent, const FUpdateGroupPredefinedRuleSuccess& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void UpdateV2GroupCustomRule(const FString& GroupId, const FAccelByteModelsUpdateCustomRulesRequest& RequestContent, const FUpdateGroupCustomRuleSuccess& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void UpdateV2GroupCustomAttributes(const FString& GroupId, const FAccelByteModelsUpdateGroupCustomAttributesRequest& RequestContent, const FUpdateGroupCustomAttributesSuccess& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void UpdateV2Group(const FString& GroupId, const FAccelByteModelsUpdateGroupRequest& RequestContent, const FUpdateGroupSuccess& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void UpdateGroupPredefinedRule(const FString& GroupId, const EAccelByteAllowedAction& AllowedAction, const FAccelByteModelsUpdateGroupPredefinedRuleRequest& RequestContent, const FUpdateGroupPredefinedRuleSuccess& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void UpdateGroupCustomRule(const FString& GroupId, FAccelByteModelsUpdateCustomRulesRequest& RequestContent, const FUpdateGroupCustomRuleSuccess& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void UpdateGroupCustomAttributes(const FString& GroupId, FAccelByteModelsUpdateGroupCustomAttributesRequest& RequestContent, const FUpdateGroupCustomAttributesSuccess& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void UpdateGroup(const FString& GroupId, const bool bCompletelyReplace, FAccelByteModelsGroupUpdatable& RequestContent, const FUpdateGroupSuccess& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void RejectV2GroupJoinRequest(const FString& UserId, const FString& GroupId, const FRejectGroupJoinRequestSuccess& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void RejectV2GroupInvitation(const FString& GroupId, const FRejectGroupInvitationSuccess& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void RejectGroupJoinRequest(const FString& UserId, const FRejectGroupJoinRequestSuccess& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void RejectGroupInvitation(const FString& GroupId, const FRejectGroupInvitationSuccess& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void LeaveV2Group(const FString& GroupId, const FLeaveGroupSuccess& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void LeaveGroup(const FLeaveGroupSuccess& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void KickV2GroupMember(const FString& UserId, const FString& GroupId, const FKickGroupMemberSuccess& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void KickGroupMember(const FString& UserId, const FKickGroupMemberSuccess& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void JoinV2Group(const FString& GroupId, const FJoinGroupSuccess& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void JoinGroup(const FString& GroupId, const FJoinGroupSuccess& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void InviteUserToV2Group(const FString& UserId, const FString& GroupId, const FInviteUserToGroupSuccess& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void InviteUserToGroup(const FString& UserId, const FInviteUserToGroupSuccess& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetUserGroupStatusInfo(const FString& UserId, const FString& GroupId, const FGetUserGroupInfoSuccess& OnSuccess, const FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetUserGroupInfoByUserId(const FString& UserId, const FGetUserGroupInfoByUserIdSuccess& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetMyJoinGroupRequest(const FAccelByteModelsLimitOffsetRequest& RequestContent, const FGetMyJoinGroupRequestSuccess& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetMyJoinedGroupInfo(const FAccelByteModelsLimitOffsetRequest& RequestContent, const FGetMyJoinedGroupInfoSuccess& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetMemberRoles(const FAccelByteModelsLimitOffsetRequest& RequestContent, const FGetMemberRolesSuccess& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetGroupsByGroupIds(const TArray<FString> GroupIds, const FGetGroupsByGroupIdsSuccess& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetGroupMembersListByGroupId(const FString& GroupId, const FAccelByteModelsGetGroupMembersListByGroupIdRequest& RequestContent, const FGetGroupMembersListByGroupIdSuccess& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetGroupList(const FAccelByteModelsGetGroupListRequest& RequestContent, const FSearchGroupsSuccess& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetGroupJoinRequests(const FString& GroupId, const FAccelByteModelsLimitOffsetRequest& RequestContent, const FGetGroupJoinRequestsSuccess& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetGroupJoinRequestList(const FString& GroupId, const FAccelByteModelsLimitOffsetRequest& RequestContent, const FGetGroupJoinRequestsSuccess& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetGroupInviteRequestList(const FString& GroupId, const FAccelByteModelsLimitOffsetRequest& RequestContent, const FGetGroupInvitationRequestsSuccess& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetGroup(const FString& GroupId, const FGetGroupSuccess& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetAllMemberRoles(const FAccelByteModelsLimitOffsetRequest& RequestContent, const FGetMemberRolesSuccess& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void DeleteV2MemberRole(const FString& MemberRoleId, const FString& GroupId, const FAccelByteModelsUserIdWrapper& RequestContent, const FDeleteMemberRoleSuccess& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void DeleteV2GroupPredefinedRule(const FString& GroupId, const EAccelByteAllowedAction& AllowedAction, const FDeleteGroupPredefinedRuleSuccess& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void DeleteV2Group(const FString& GroupId, const FDeleteGroupSuccess& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void DeleteMemberRole(const FString& MemberRoleId, const FAccelByteModelsUserIdWrapper& RequestContent, const FDeleteMemberRoleSuccess& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void DeleteGroupPredefinedRule(const FString& GroupId, const EAccelByteAllowedAction& AllowedAction, const FDeleteGroupPredefinedRuleSuccess& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void DeleteGroup(const FString& GroupId, const FDeleteGroupSuccess& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void CreateV2Group(const FAccelByteModelsCreateGroupRequest& RequestContent, const FCreateGroupSuccess& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void CreateGroup(const FAccelByteModelsCreateGroupRequest& RequestContent, const FCreateGroupSuccess& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void CancelJoinGroupRequest(const FString& GroupId, const FCancelJoinGroupRequestSuccess& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void CancelGroupMemberInvitation(const FString& UserId, const FString& GroupId, const FCanceGroupInviteRequestSuccess& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void AssignV2MemberRole(const FString& MemberRoleId, const FString& GroupId, const FAccelByteModelsUserIdWrapper& RequestContent, const FAssignMemberRoleSuccess& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void AssignMemberRole(const FString& MemberRoleId, const FAccelByteModelsUserIdWrapper& RequestContent, const FAssignMemberRoleSuccess& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void AcceptV2GroupJoinRequest(const FString& UserId, const FString& GroupId, const FAcceptGroupJoinRequestSuccess& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void AcceptV2GroupInvitation(const FString& GroupId, const FAcceptGroupInvitationSuccess& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void AcceptGroupJoinRequest(const FString& UserId, const FAcceptGroupJoinRequestSuccess& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void AcceptGroupInvitation(const FString& GroupId, const FAcceptGroupInvitationSuccess& OnSuccess, const FDErrorHandler& OnError);
    
};

