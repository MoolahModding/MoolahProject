#include "SBZBTTask_DozerTaunt.h"

USBZBTTask_DozerTaunt::USBZBTTask_DozerTaunt() {
    this->TauntComment = NULL;
    this->NodeName = TEXT("Dozer Taunt");
}

void USBZBTTask_DozerTaunt::OnMontageEnded(UAnimMontage* Montage, bool bIsInterrupted, UBehaviorTreeComponent* OwnerComp) {
}


