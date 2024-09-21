#include "SBZLevelScriptActorBase.h"

ASBZLevelScriptActorBase::ASBZLevelScriptActorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool ASBZLevelScriptActorBase::RemoteEventWithInt(FName EventName, int32 Integer) {
    return false;
}

bool ASBZLevelScriptActorBase::RemoteEventWithBool(FName EventName, bool bBool) {
    return false;
}

bool ASBZLevelScriptActorBase::RemoteEventWithActorsArray(FName EventName, const TArray<AActor*>& Actor) {
    return false;
}

bool ASBZLevelScriptActorBase::RemoteEventWithActor(FName EventName, AActor* Actor) {
    return false;
}


