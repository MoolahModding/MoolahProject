#include "SBZAIAction_Order.h"

void USBZAIAction_Order::OnOrderStopped(USBZAIOrder* Order, APawn* OrderPawn, TEnumAsByte<EBTNodeResult::Type> Result) {
}

void USBZAIAction_Order::OnOrderStarted(USBZAIOrder* Order, APawn* OrderPawn) {
}

void USBZAIAction_Order::OnOrderCompleted(USBZAIOrder* Order, APawn* OrderPawn, TEnumAsByte<EBTNodeResult::Type> Result) {
}

USBZAIAction_Order::USBZAIAction_Order() {
    this->ActionOrder = NULL;
    this->OrderInstance = NULL;
}

