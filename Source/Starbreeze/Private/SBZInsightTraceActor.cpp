#include "SBZInsightTraceActor.h"

ASBZInsightTraceActor::ASBZInsightTraceActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = false;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_None;
    this->AutoStartDelay = 10.00f;
    this->bAutoStartAndStopTrace = true;
}

void ASBZInsightTraceActor::StopTrace() {
}

void ASBZInsightTraceActor::StopAndExitLevel() {
}

void ASBZInsightTraceActor::StartTrace() {
}

void ASBZInsightTraceActor::OnUpdateCameraCut(UCameraComponent* CameraComponent) {
}

void ASBZInsightTraceActor::OnStop() {
}

void ASBZInsightTraceActor::BookmarkTrace(const FString& BookmarkName) {
}


