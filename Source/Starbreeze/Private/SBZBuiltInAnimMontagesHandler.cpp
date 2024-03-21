#include "SBZBuiltInAnimMontagesHandler.h"

void USBZBuiltInAnimMontagesHandler::Update(float DeltaSeconds) {
}

void USBZBuiltInAnimMontagesHandler::StopAnimMontagesWithinGroup(const FName& Group) {
}

void USBZBuiltInAnimMontagesHandler::StopAnimMontage(const USBZBuiltInAnimMontage* AnimMontage) {
}

float USBZBuiltInAnimMontagesHandler::PlayAnimMontage(const USBZBuiltInAnimMontage* AnimMontage) {
    return 0.0f;
}

bool USBZBuiltInAnimMontagesHandler::HasAnyActiveAnimation() const {
    return false;
}

TArray<FSBZBuiltInAnimMontageInstance> USBZBuiltInAnimMontagesHandler::GetActiveAnimMontageInstances() const {
    return TArray<FSBZBuiltInAnimMontageInstance>();
}

USBZBuiltInAnimMontagesHandler::USBZBuiltInAnimMontagesHandler() {
}

