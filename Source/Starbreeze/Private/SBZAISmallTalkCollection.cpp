#include "SBZAISmallTalkCollection.h"

USBZAISmallTalkCollection::USBZAISmallTalkCollection() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZAISmallTalkCollection::StaticClass();
}


