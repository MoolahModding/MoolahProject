#include "ABUtilities.h"

bool UABUtilities::GetJsonValueAsString(const FJsonObjectWrapper& ObjectWrapper, const FString& Key, FString& OutString) {
    return false;
}

bool UABUtilities::GetJsonValueAsNumber(const FJsonObjectWrapper& ObjectWrapper, const FString& Key, float& OutNumber) {
    return false;
}

bool UABUtilities::GetJsonValueAsBool(const FJsonObjectWrapper& ObjectWrapper, const FString& Key, bool& OutBool) {
    return false;
}

bool UABUtilities::GetJsonValueAsArray(const FJsonObjectWrapper& ObjectWrapper, const FString& Key, TArray<FString>& OutArray) {
    return false;
}

FString UABUtilities::GetJsonObjectAsJsonString(const FJsonObjectWrapper& ObjectWrapper) {
    return TEXT("");
}

FString UABUtilities::DateTimeToString(const FDateTime& DateTime) {
    return TEXT("");
}

void UABUtilities::AddOrReplaceJsonStringValue(FJsonObjectWrapper& ObjectWrapper, const FString& Key, const FString& Value) {
}

void UABUtilities::AddOrReplaceJsonNumberValue(FJsonObjectWrapper& ObjectWrapper, const FString& Key, float Value) {
}

void UABUtilities::AddOrReplaceJsonBoolValue(FJsonObjectWrapper& ObjectWrapper, const FString& Key, bool Value) {
}

void UABUtilities::AddOrReplaceJsonArrayValue(FJsonObjectWrapper& ObjectWrapper, const FString& Key, const TArray<FString>& Value) {
}

UABUtilities::UABUtilities() {
}

