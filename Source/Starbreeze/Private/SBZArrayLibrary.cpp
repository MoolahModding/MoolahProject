#include "SBZArrayLibrary.h"

void USBZArrayLibrary::SortArray(const TArray<UObject*>& Array, TArray<UObject*>& OutArray, const FArraySortDelegate& SortCallback) {
}

int32 USBZArrayLibrary::SelectArray(const TArray<UObject*>& Array, TArray<UObject*>& OutArray, const FArraySelectDelegate& SelectCallback, const int32 Limit) {
    return 0;
}

void USBZArrayLibrary::RandomizedSplitArray(const TArray<UObject*>& ObjectList, int32 Min, int32 Max, const FRandomStream& RandomStream, TArray<UObject*>& ChosenObjects, TArray<UObject*>& LeftoverObjects) {
}

UObject* USBZArrayLibrary::FindArray(const TArray<UObject*>& Array, const FArraySelectDelegate& SelectCallback) {
    return NULL;
}

USBZArrayLibrary::USBZArrayLibrary() {
}

