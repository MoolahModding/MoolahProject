#include "AkItemPropertiesConv.h"

UAkItemPropertiesConv::UAkItemPropertiesConv() {
}

FText UAkItemPropertiesConv::Conv_FAkPropertyToControlToText(const FAkPropertyToControl& INAkPropertyToControl) {
    return FText::GetEmpty();
}

FString UAkItemPropertiesConv::Conv_FAkPropertyToControlToString(const FAkPropertyToControl& INAkPropertyToControl) {
    return TEXT("");
}


