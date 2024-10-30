#include "ChromaSDKPluginBPLibrary.h"

UChromaSDKPluginBPLibrary::UChromaSDKPluginBPLibrary() {
}

void UChromaSDKPluginBPLibrary::UsePreloadingName(const FString& animationName, bool flag) {
}

void UChromaSDKPluginBPLibrary::UsePreloading(int32 animationId, bool flag) {
}

void UChromaSDKPluginBPLibrary::UseIdleAnimations(bool flag) {
}

void UChromaSDKPluginBPLibrary::UseIdleAnimation(TEnumAsByte<EChromaSDKDeviceEnum::Type> device, bool flag) {
}

void UChromaSDKPluginBPLibrary::UseForwardChromaEvents(bool toggle) {
}

void UChromaSDKPluginBPLibrary::UnloadAnimationName(const FString& animationName) {
}

void UChromaSDKPluginBPLibrary::UnloadAnimation(const int32 animationId) {
}

void UChromaSDKPluginBPLibrary::TrimStartFramesName(const FString& animationName, int32 numberOfFrames) {
}

void UChromaSDKPluginBPLibrary::TrimStartFrames(int32 animationId, int32 numberOfFrames) {
}

void UChromaSDKPluginBPLibrary::TrimFrameName(const FString& animationName, int32 frameId) {
}

void UChromaSDKPluginBPLibrary::TrimFrame(int32 animationId, int32 frameId) {
}

void UChromaSDKPluginBPLibrary::TrimEndFramesName(const FString& animationName, int32 lastFrameId) {
}

void UChromaSDKPluginBPLibrary::TrimEndFrames(int32 animationId, int32 lastFrameId) {
}

FLinearColor UChromaSDKPluginBPLibrary::ToLinearColor(int32 colorParam) {
    return FLinearColor{};
}

int32 UChromaSDKPluginBPLibrary::ToBGR(const FLinearColor& colorParam) {
    return 0;
}

bool UChromaSDKPluginBPLibrary::SupportsStreaming() {
    return false;
}

void UChromaSDKPluginBPLibrary::SubtractNonZeroTargetAllKeysAllFramesOffsetName(const FString& sourceAnimationName, const FString& targetAnimationName, int32 offset) {
}

void UChromaSDKPluginBPLibrary::SubtractNonZeroTargetAllKeysAllFramesOffset(int32 sourceAnimationId, int32 targetAnimationId, int32 offset) {
}

void UChromaSDKPluginBPLibrary::SubtractNonZeroTargetAllKeysAllFramesName(const FString& sourceAnimationName, const FString& targetAnimationName) {
}

void UChromaSDKPluginBPLibrary::SubtractNonZeroTargetAllKeysAllFrames(int32 sourceAnimationId, int32 targetAnimationId) {
}

void UChromaSDKPluginBPLibrary::SubtractNonZeroAllKeysName(const FString& sourceAnimationName, const FString& targetAnimationName, int32 frameId) {
}

void UChromaSDKPluginBPLibrary::SubtractNonZeroAllKeysAllFramesOffsetName(const FString& sourceAnimationName, const FString& targetAnimationName, int32 offset) {
}

void UChromaSDKPluginBPLibrary::SubtractNonZeroAllKeysAllFramesOffset(int32 sourceAnimationId, int32 targetAnimationId, int32 offset) {
}

void UChromaSDKPluginBPLibrary::SubtractNonZeroAllKeysAllFramesName(const FString& sourceAnimationName, const FString& targetAnimationName) {
}

void UChromaSDKPluginBPLibrary::SubtractNonZeroAllKeysAllFrames(int32 sourceAnimationId, int32 targetAnimationId) {
}

void UChromaSDKPluginBPLibrary::SubtractNonZeroAllKeys(int32 sourceAnimationId, int32 targetAnimationId, int32 frameId) {
}

void UChromaSDKPluginBPLibrary::StreamWatchEnd() {
}

void UChromaSDKPluginBPLibrary::StreamWatch(const FString& streamId, int32 timestamp) {
}

bool UChromaSDKPluginBPLibrary::StreamSetFocus(const FString& streamFocus) {
    return false;
}

bool UChromaSDKPluginBPLibrary::StreamReleaseShortcode(const FString& shortcode) {
    return false;
}

FString UChromaSDKPluginBPLibrary::StreamGetStatusString(const TEnumAsByte<EChromaSDKStreamStatusEnum::Type> status) {
    return TEXT("");
}

TEnumAsByte<EChromaSDKStreamStatusEnum::Type> UChromaSDKPluginBPLibrary::StreamGetStatus() {
    return EChromaSDKStreamStatusEnum::READY;
}

FString UChromaSDKPluginBPLibrary::StreamGetKey(const FString& shortcode) {
    return TEXT("");
}

FString UChromaSDKPluginBPLibrary::StreamGetId(const FString& shortcode) {
    return TEXT("");
}

FString UChromaSDKPluginBPLibrary::StreamGetFocus() {
    return TEXT("");
}

FString UChromaSDKPluginBPLibrary::StreamGetAuthShortcode(const FString& platform, const FString& title) {
    return TEXT("");
}

void UChromaSDKPluginBPLibrary::StreamBroadcastEnd() {
}

void UChromaSDKPluginBPLibrary::StreamBroadcast(const FString& streamId, const FString& streamKey) {
}

void UChromaSDKPluginBPLibrary::StopAnimationType(TEnumAsByte<EChromaSDKDeviceEnum::Type> device) {
}

void UChromaSDKPluginBPLibrary::StopAnimations(const TArray<FString>& animationNames) {
}

void UChromaSDKPluginBPLibrary::StopAnimationName(const FString& animationName) {
}

void UChromaSDKPluginBPLibrary::StopAnimationComposite(const FString& animationName) {
}

void UChromaSDKPluginBPLibrary::StopAnimation(int32 animationId) {
}

void UChromaSDKPluginBPLibrary::StopAll() {
}

void UChromaSDKPluginBPLibrary::SetStaticColorAll(const FLinearColor& color) {
}

void UChromaSDKPluginBPLibrary::SetStaticColor(TEnumAsByte<EChromaSDKDeviceEnum::Type> device, const FLinearColor& color) {
}

void UChromaSDKPluginBPLibrary::SetMouseLedColor(TEnumAsByte<EChromaSDKMouseLed::Type> led, const FLinearColor& colorParam, TArray<FChromaSDKColors>& colors) {
}

void UChromaSDKPluginBPLibrary::SetKeysNonZeroColorName(const FString& animationName, const int32 frameIndex, const TArray<TEnumAsByte<EChromaSDKKeyboardKey::Type>>& keys, const FLinearColor& colorParam) {
}

void UChromaSDKPluginBPLibrary::SetKeysNonZeroColorAllFramesName(const FString& animationName, const TArray<TEnumAsByte<EChromaSDKKeyboardKey::Type>>& keys, const FLinearColor& colorParam) {
}

void UChromaSDKPluginBPLibrary::SetKeysNonZeroColorAllFrames(int32 animationId, const TArray<TEnumAsByte<EChromaSDKKeyboardKey::Type>>& keys, const FLinearColor& colorParam) {
}

void UChromaSDKPluginBPLibrary::SetKeysNonZeroColor(int32 animationId, int32 frameIndex, const TArray<TEnumAsByte<EChromaSDKKeyboardKey::Type>>& keys, const FLinearColor& colorParam) {
}

void UChromaSDKPluginBPLibrary::SetKeysColorRGBName(const FString& animationName, const int32 frameIndex, const TArray<TEnumAsByte<EChromaSDKKeyboardKey::Type>>& keys, int32 red, int32 green, int32 blue) {
}

void UChromaSDKPluginBPLibrary::SetKeysColorRGB(int32 animationId, int32 frameIndex, const TArray<TEnumAsByte<EChromaSDKKeyboardKey::Type>>& keys, int32 red, int32 green, int32 blue) {
}

void UChromaSDKPluginBPLibrary::SetKeysColorName(const FString& animationName, const int32 frameIndex, const TArray<TEnumAsByte<EChromaSDKKeyboardKey::Type>>& keys, const FLinearColor& colorParam) {
}

void UChromaSDKPluginBPLibrary::SetKeysColorAllFramesRGBName(const FString& animationName, const TArray<TEnumAsByte<EChromaSDKKeyboardKey::Type>>& keys, int32 red, int32 green, int32 blue) {
}

void UChromaSDKPluginBPLibrary::SetKeysColorAllFramesRGB(int32 animationId, const TArray<TEnumAsByte<EChromaSDKKeyboardKey::Type>>& keys, int32 red, int32 green, int32 blue) {
}

void UChromaSDKPluginBPLibrary::SetKeysColorAllFramesName(const FString& animationName, const TArray<TEnumAsByte<EChromaSDKKeyboardKey::Type>>& keys, const FLinearColor& colorParam) {
}

void UChromaSDKPluginBPLibrary::SetKeysColorAllFrames(int32 animationId, const TArray<TEnumAsByte<EChromaSDKKeyboardKey::Type>>& keys, const FLinearColor& colorParam) {
}

void UChromaSDKPluginBPLibrary::SetKeysColor(int32 animationId, int32 frameIndex, const TArray<TEnumAsByte<EChromaSDKKeyboardKey::Type>>& keys, const FLinearColor& colorParam) {
}

void UChromaSDKPluginBPLibrary::SetKeyRowColumnColorName(const FString& animationName, const int32 frameIndex, const int32 row, const int32 column, const FLinearColor& colorParam) {
}

void UChromaSDKPluginBPLibrary::SetKeyNonZeroColorName(const FString& animationName, const int32 frameIndex, TEnumAsByte<EChromaSDKKeyboardKey::Type> key, const FLinearColor& colorParam) {
}

void UChromaSDKPluginBPLibrary::SetKeyNonZeroColorAllFramesName(const FString& animationName, TEnumAsByte<EChromaSDKKeyboardKey::Type> key, const FLinearColor& colorParam) {
}

void UChromaSDKPluginBPLibrary::SetKeyNonZeroColorAllFrames(int32 animationId, TEnumAsByte<EChromaSDKKeyboardKey::Type> key, const FLinearColor& colorParam) {
}

void UChromaSDKPluginBPLibrary::SetKeyNonZeroColor(int32 animationId, int32 frameIndex, TEnumAsByte<EChromaSDKKeyboardKey::Type> key, const FLinearColor& colorParam) {
}

void UChromaSDKPluginBPLibrary::SetKeyColorName(const FString& animationName, const int32 frameIndex, TEnumAsByte<EChromaSDKKeyboardKey::Type> key, const FLinearColor& colorParam) {
}

void UChromaSDKPluginBPLibrary::SetKeyColorAllFramesName(const FString& animationName, TEnumAsByte<EChromaSDKKeyboardKey::Type> key, const FLinearColor& colorParam) {
}

void UChromaSDKPluginBPLibrary::SetKeyColorAllFrames(int32 animationId, TEnumAsByte<EChromaSDKKeyboardKey::Type> key, const FLinearColor& colorParam) {
}

void UChromaSDKPluginBPLibrary::SetKeyColor(int32 animationId, int32 frameIndex, TEnumAsByte<EChromaSDKKeyboardKey::Type> key, const FLinearColor& colorParam) {
}

void UChromaSDKPluginBPLibrary::SetKeyboardKeyColor(TEnumAsByte<EChromaSDKKeyboardKey::Type> key, const FLinearColor& colorParam, TArray<FChromaSDKColors>& colors) {
}

void UChromaSDKPluginBPLibrary::SetIdleAnimationName(const FString& animationName) {
}

int32 UChromaSDKPluginBPLibrary::SetEventName(const FString& name) {
    return 0;
}

void UChromaSDKPluginBPLibrary::SetCurrentFrameName(const FString& animationName, int32 frameId) {
}

void UChromaSDKPluginBPLibrary::SetCurrentFrame(int32 animationId, int32 frameId) {
}

void UChromaSDKPluginBPLibrary::SetChromaCustomFlagName(const FString& animationName, bool flag) {
}

void UChromaSDKPluginBPLibrary::SetChromaCustomColorAllFramesName(const FString& animationName) {
}

void UChromaSDKPluginBPLibrary::ReverseAllFramesName(const FString& animationName) {
}

void UChromaSDKPluginBPLibrary::ReverseAllFrames(int32 animationId) {
}

void UChromaSDKPluginBPLibrary::ReduceFramesName(const FString& animationName, int32 n) {
}

void UChromaSDKPluginBPLibrary::ReduceFrames(int32 animationId, int32 n) {
}

void UChromaSDKPluginBPLibrary::PreviewFrameName(const FString& animationName, int32 frameId) {
}

int32 UChromaSDKPluginBPLibrary::PreviewFrame(int32 animationId, int32 frameId) {
    return 0;
}

void UChromaSDKPluginBPLibrary::PlayAnimations(const TArray<FString>& animationNames, bool loop) {
}

void UChromaSDKPluginBPLibrary::PlayAnimationName(const FString& animationName, bool loop) {
}

void UChromaSDKPluginBPLibrary::PlayAnimationComposite(const FString& animationName, bool loop) {
}

void UChromaSDKPluginBPLibrary::PlayAnimation(int32 animationId, bool loop) {
}

void UChromaSDKPluginBPLibrary::OverrideFrameDurationName(const FString& animationName, float duration) {
}

void UChromaSDKPluginBPLibrary::OverrideFrameDuration(int32 animationId, float duration) {
}

int32 UChromaSDKPluginBPLibrary::OpenAnimationFromMemory(const TArray<uint8>& data, const FString& animationName) {
    return 0;
}

void UChromaSDKPluginBPLibrary::OffsetNonZeroColorsName(const FString& animationName, int32 frameId, int32 red, int32 green, int32 blue) {
}

void UChromaSDKPluginBPLibrary::OffsetNonZeroColorsAllFramesName(const FString& animationName, int32 red, int32 green, int32 blue) {
}

void UChromaSDKPluginBPLibrary::OffsetNonZeroColorsAllFrames(int32 animationId, int32 red, int32 green, int32 blue) {
}

void UChromaSDKPluginBPLibrary::OffsetNonZeroColors(int32 animationId, int32 frameId, int32 red, int32 green, int32 blue) {
}

void UChromaSDKPluginBPLibrary::OffsetColorsName(const FString& animationName, int32 frameId, int32 red, int32 green, int32 blue) {
}

void UChromaSDKPluginBPLibrary::OffsetColorsAllFramesName(const FString& animationName, int32 red, int32 green, int32 blue) {
}

void UChromaSDKPluginBPLibrary::OffsetColorsAllFrames(int32 animationId, int32 red, int32 green, int32 blue) {
}

void UChromaSDKPluginBPLibrary::OffsetColors(int32 animationId, int32 frameId, int32 red, int32 green, int32 blue) {
}

void UChromaSDKPluginBPLibrary::MultiplyTargetColorLerpAllFramesName(const FString& animationName, const FLinearColor& colorParam1, const FLinearColor& colorParam2) {
}

void UChromaSDKPluginBPLibrary::MultiplyTargetColorLerpAllFrames(int32 animationId, const FLinearColor& colorParam1, const FLinearColor& colorParam2) {
}

void UChromaSDKPluginBPLibrary::MultiplyNonZeroTargetColorLerpAllFramesName(const FString& animationName, const FLinearColor& colorParam1, const FLinearColor& colorParam2) {
}

void UChromaSDKPluginBPLibrary::MultiplyNonZeroTargetColorLerpAllFrames(int32 animationId, const FLinearColor& colorParam1, const FLinearColor& colorParam2) {
}

void UChromaSDKPluginBPLibrary::MultiplyIntensityRGBName(const FString& animationName, int32 frameId, int32 red, int32 green, int32 blue) {
}

void UChromaSDKPluginBPLibrary::MultiplyIntensityRGB(int32 animationId, int32 frameId, int32 red, int32 green, int32 blue) {
}

void UChromaSDKPluginBPLibrary::MultiplyIntensityName(const FString& animationName, int32 frameId, float intensity) {
}

void UChromaSDKPluginBPLibrary::MultiplyIntensityColorName(const FString& animationName, int32 frameId, const FLinearColor& colorParam) {
}

void UChromaSDKPluginBPLibrary::MultiplyIntensityColorAllFramesName(const FString& animationName, const FLinearColor& colorParam) {
}

void UChromaSDKPluginBPLibrary::MultiplyIntensityColorAllFrames(int32 animationId, const FLinearColor& colorParam) {
}

void UChromaSDKPluginBPLibrary::MultiplyIntensityColor(int32 animationId, int32 frameId, const FLinearColor& colorParam) {
}

void UChromaSDKPluginBPLibrary::MultiplyIntensityAllFramesRGBName(const FString& animationName, int32 red, int32 green, int32 blue) {
}

void UChromaSDKPluginBPLibrary::MultiplyIntensityAllFramesRGB(int32 animationId, int32 red, int32 green, int32 blue) {
}

void UChromaSDKPluginBPLibrary::MultiplyIntensityAllFramesName(const FString& animationName, float intensity) {
}

void UChromaSDKPluginBPLibrary::MultiplyIntensityAllFrames(int32 animationId, float intensity) {
}

void UChromaSDKPluginBPLibrary::MultiplyIntensity(int32 animationId, int32 frameId, float intensity) {
}

void UChromaSDKPluginBPLibrary::MultiplyColorLerpAllFramesName(const FString& animationName, const FLinearColor& colorParam1, const FLinearColor& colorParam2) {
}

void UChromaSDKPluginBPLibrary::MultiplyColorLerpAllFrames(int32 animationId, const FLinearColor& colorParam1, const FLinearColor& colorParam2) {
}

void UChromaSDKPluginBPLibrary::MakeBlankFramesRGBName(const FString& animationName, int32 frameCount, float duration, int32 red, int32 green, int32 blue) {
}

void UChromaSDKPluginBPLibrary::MakeBlankFramesRGB(int32 animationId, int32 frameCount, float duration, int32 red, int32 green, int32 blue) {
}

void UChromaSDKPluginBPLibrary::MakeBlankFramesRandomName(const FString& animationName, int32 frameCount, float duration) {
}

void UChromaSDKPluginBPLibrary::MakeBlankFramesRandomBlackAndWhiteName(const FString& animationName, int32 frameCount, float duration) {
}

void UChromaSDKPluginBPLibrary::MakeBlankFramesRandomBlackAndWhite(int32 animationId, int32 frameCount, float duration) {
}

void UChromaSDKPluginBPLibrary::MakeBlankFramesRandom(int32 animationId, int32 frameCount, float duration) {
}

void UChromaSDKPluginBPLibrary::MakeBlankFramesName(const FString& animationName, int32 frameCount, float duration, const FLinearColor& colorParam) {
}

void UChromaSDKPluginBPLibrary::MakeBlankFrames(int32 animationId, int32 frameCount, float duration, const FLinearColor& colorParam) {
}

void UChromaSDKPluginBPLibrary::LoadAnimationName(const FString& animationName) {
}

void UChromaSDKPluginBPLibrary::LoadAnimation(const int32 animationId) {
}

int32 UChromaSDKPluginBPLibrary::LerpColorBGR(int32 from, int32 to, float t) {
    return 0;
}

FLinearColor UChromaSDKPluginBPLibrary::LerpColor(FLinearColor colorParam1, FLinearColor colorParam2, float t) {
    return FLinearColor{};
}

float UChromaSDKPluginBPLibrary::Lerp(float start, float end, float amt) {
    return 0.0f;
}

bool UChromaSDKPluginBPLibrary::IsPlatformWindows() {
    return false;
}

bool UChromaSDKPluginBPLibrary::IsInitialized() {
    return false;
}

int32 UChromaSDKPluginBPLibrary::IsConnected(FChromaSDKDeviceInfoType& deviceInfoType) {
    return 0;
}

bool UChromaSDKPluginBPLibrary::IsAnimationTypePlaying(TEnumAsByte<EChromaSDKDeviceEnum::Type> device) {
    return false;
}

bool UChromaSDKPluginBPLibrary::IsAnimationPlayingName(const FString& animationName) {
    return false;
}

bool UChromaSDKPluginBPLibrary::IsAnimationPlaying(int32 animationId) {
    return false;
}

int32 UChromaSDKPluginBPLibrary::IsActive(bool& active) {
    return 0;
}

void UChromaSDKPluginBPLibrary::InvertColorsAllFramesName(const FString& animationName) {
}

void UChromaSDKPluginBPLibrary::InvertColorsAllFrames(int32 animationId) {
}

void UChromaSDKPluginBPLibrary::InsertFrameName(const FString& animationName, int32 sourceFrame, int32 targetFrame) {
}

void UChromaSDKPluginBPLibrary::InsertFrame(int32 animationId, int32 sourceFrame, int32 targetFrame) {
}

void UChromaSDKPluginBPLibrary::InsertDelayName(const FString& animationName, int32 frameId, int32 delay) {
}

void UChromaSDKPluginBPLibrary::InsertDelay(int32 animationId, int32 frameId, int32 delay) {
}

float UChromaSDKPluginBPLibrary::GetTotalDurationName(const FString& animationName) {
    return 0.0f;
}

float UChromaSDKPluginBPLibrary::GetTotalDuration(int32 animationId) {
    return 0.0f;
}

FLinearColor UChromaSDKPluginBPLibrary::GetRGB(int32 red, int32 green, int32 blue) {
    return FLinearColor{};
}

int32 UChromaSDKPluginBPLibrary::GetPlayingAnimationId(int32 index) {
    return 0;
}

int32 UChromaSDKPluginBPLibrary::GetPlayingAnimationCount() {
    return 0;
}

FLinearColor UChromaSDKPluginBPLibrary::GetMouseLedColor(TEnumAsByte<EChromaSDKMouseLed::Type> led, TArray<FChromaSDKColors>& colors) {
    return FLinearColor{};
}

int32 UChromaSDKPluginBPLibrary::GetMaxRow(TEnumAsByte<EChromaSDKDevice2DEnum::Type> device) {
    return 0;
}

int32 UChromaSDKPluginBPLibrary::GetMaxLeds(TEnumAsByte<EChromaSDKDevice1DEnum::Type> device) {
    return 0;
}

int32 UChromaSDKPluginBPLibrary::GetMaxColumn(TEnumAsByte<EChromaSDKDevice2DEnum::Type> device) {
    return 0;
}

FLinearColor UChromaSDKPluginBPLibrary::GetKeyColorName(const FString& animationName, const int32 frameIndex, TEnumAsByte<EChromaSDKKeyboardKey::Type> key) {
    return FLinearColor{};
}

FLinearColor UChromaSDKPluginBPLibrary::GetKeyColor(int32 animationId, int32 frameIndex, TEnumAsByte<EChromaSDKKeyboardKey::Type> key) {
    return FLinearColor{};
}

int32 UChromaSDKPluginBPLibrary::GetKeyboardRzKey(TEnumAsByte<EChromaSDKKeyboardKey::Type> key) {
    return 0;
}

TEnumAsByte<EChromaSDKKeyboardKey::Type> UChromaSDKPluginBPLibrary::GetKeyboardRazerKey(FKey key) {
    return EChromaSDKKeyboardKey::KK_ESC;
}

FLinearColor UChromaSDKPluginBPLibrary::GetKeyboardKeyColor(TEnumAsByte<EChromaSDKKeyboardKey::Type> key, TArray<FChromaSDKColors>& colors) {
    return FLinearColor{};
}

float UChromaSDKPluginBPLibrary::GetFrameDurationName(const FString& animationName, int32 frameId) {
    return 0.0f;
}

float UChromaSDKPluginBPLibrary::GetFrameDuration(int32 animationId, int32 frameId) {
    return 0.0f;
}

int32 UChromaSDKPluginBPLibrary::GetFrameCountName(const FString& animationName) {
    return 0;
}

int32 UChromaSDKPluginBPLibrary::GetFrameCount(const int32 animationId) {
    return 0;
}

int32 UChromaSDKPluginBPLibrary::GetCurrentFrameName(const FString& animationName) {
    return 0;
}

int32 UChromaSDKPluginBPLibrary::GetCurrentFrame(int32 animationId) {
    return 0;
}

int32 UChromaSDKPluginBPLibrary::GetBGRInt(int32 red, int32 green, int32 blue) {
    return 0;
}

FString UChromaSDKPluginBPLibrary::GetAnimationName(const int32 animationId) {
    return TEXT("");
}

int32 UChromaSDKPluginBPLibrary::GetAnimationIdByIndex(int32 index) {
    return 0;
}

int32 UChromaSDKPluginBPLibrary::GetAnimationId(const FString& animationName) {
    return 0;
}

int32 UChromaSDKPluginBPLibrary::GetAnimationCount() {
    return 0;
}

int32 UChromaSDKPluginBPLibrary::GetAnimation(const FString& animationName) {
    return 0;
}

void UChromaSDKPluginBPLibrary::FillZeroColorRGBName(const FString& animationName, int32 frameId, int32 red, int32 green, int32 blue) {
}

void UChromaSDKPluginBPLibrary::FillZeroColorRGB(int32 animationId, int32 frameId, int32 red, int32 green, int32 blue) {
}

void UChromaSDKPluginBPLibrary::FillZeroColorName(const FString& animationName, int32 frameId, const FLinearColor& colorParam) {
}

void UChromaSDKPluginBPLibrary::FillZeroColorAllFramesRGBName(const FString& animationName, int32 red, int32 green, int32 blue) {
}

void UChromaSDKPluginBPLibrary::FillZeroColorAllFramesRGB(int32 animationId, int32 red, int32 green, int32 blue) {
}

void UChromaSDKPluginBPLibrary::FillZeroColorAllFramesName(const FString& animationName, const FLinearColor& colorParam) {
}

void UChromaSDKPluginBPLibrary::FillZeroColorAllFrames(int32 animationId, const FLinearColor& colorParam) {
}

void UChromaSDKPluginBPLibrary::FillZeroColor(int32 animationId, int32 frameId, const FLinearColor& colorParam) {
}

void UChromaSDKPluginBPLibrary::FillThresholdRGBColorsAllFramesRGBName(const FString& animationName, int32 redThreshold, int32 greenThreshold, int32 blueThreshold, int32 red, int32 green, int32 blue) {
}

void UChromaSDKPluginBPLibrary::FillThresholdRGBColorsAllFramesRGB(int32 animationId, int32 redThreshold, int32 greenThreshold, int32 blueThreshold, int32 red, int32 green, int32 blue) {
}

void UChromaSDKPluginBPLibrary::FillThresholdColorsRGBName(const FString& animationName, int32 frameId, int32 threshold, int32 red, int32 green, int32 blue) {
}

void UChromaSDKPluginBPLibrary::FillThresholdColorsRGB(int32 animationId, int32 frameId, int32 threshold, int32 red, int32 green, int32 blue) {
}

void UChromaSDKPluginBPLibrary::FillThresholdColorsMinMaxAllFramesRGBName(const FString& animationName, int32 minThreshold, int32 minRed, int32 minGreen, int32 minBlue, int32 maxThreshold, int32 maxRed, int32 maxGreen, int32 maxBlue) {
}

void UChromaSDKPluginBPLibrary::FillThresholdColorsMinMaxAllFramesRGB(int32 animationId, int32 minThreshold, int32 minRed, int32 minGreen, int32 minBlue, int32 maxThreshold, int32 maxRed, int32 maxGreen, int32 maxBlue) {
}

void UChromaSDKPluginBPLibrary::FillThresholdColorsAllFramesRGBName(const FString& animationName, int32 threshold, int32 red, int32 green, int32 blue) {
}

void UChromaSDKPluginBPLibrary::FillThresholdColorsAllFramesRGB(int32 animationId, int32 threshold, int32 red, int32 green, int32 blue) {
}

void UChromaSDKPluginBPLibrary::FillThresholdColorsAllFramesName(const FString& animationName, int32 threshold, const FLinearColor& colorParam) {
}

void UChromaSDKPluginBPLibrary::FillThresholdColorsAllFrames(int32 animationId, int32 threshold, const FLinearColor& colorParam) {
}

void UChromaSDKPluginBPLibrary::FillRandomColorsName(const FString& animationName, int32 frameId) {
}

void UChromaSDKPluginBPLibrary::FillRandomColorsBlackAndWhiteName(const FString& animationName, int32 frameId) {
}

void UChromaSDKPluginBPLibrary::FillRandomColorsBlackAndWhiteAllFramesName(const FString& animationName) {
}

void UChromaSDKPluginBPLibrary::FillRandomColorsBlackAndWhiteAllFrames(int32 animationId) {
}

void UChromaSDKPluginBPLibrary::FillRandomColorsBlackAndWhite(int32 animationId, int32 frameId) {
}

void UChromaSDKPluginBPLibrary::FillRandomColorsAllFramesName(const FString& animationName) {
}

void UChromaSDKPluginBPLibrary::FillRandomColorsAllFrames(int32 animationId) {
}

void UChromaSDKPluginBPLibrary::FillRandomColors(int32 animationId, int32 frameId) {
}

void UChromaSDKPluginBPLibrary::FillNonZeroColorRGBName(const FString& animationName, int32 frameId, int32 red, int32 green, int32 blue) {
}

void UChromaSDKPluginBPLibrary::FillNonZeroColorRGB(int32 animationId, int32 frameId, int32 red, int32 green, int32 blue) {
}

void UChromaSDKPluginBPLibrary::FillNonZeroColorName(const FString& animationName, int32 frameId, const FLinearColor& colorParam) {
}

void UChromaSDKPluginBPLibrary::FillNonZeroColorAllFramesRGBName(const FString& animationName, int32 red, int32 green, int32 blue) {
}

void UChromaSDKPluginBPLibrary::FillNonZeroColorAllFramesRGB(int32 animationId, int32 red, int32 green, int32 blue) {
}

void UChromaSDKPluginBPLibrary::FillNonZeroColorAllFramesName(const FString& animationName, const FLinearColor& colorParam) {
}

void UChromaSDKPluginBPLibrary::FillNonZeroColorAllFrames(int32 animationId, const FLinearColor& colorParam) {
}

void UChromaSDKPluginBPLibrary::FillNonZeroColor(int32 animationId, int32 frameId, const FLinearColor& colorParam) {
}

void UChromaSDKPluginBPLibrary::FillColorRGBName(const FString& animationName, int32 frameId, int32 red, int32 green, int32 blue) {
}

void UChromaSDKPluginBPLibrary::FillColorRGB(int32 animationId, int32 frameId, int32 red, int32 green, int32 blue) {
}

void UChromaSDKPluginBPLibrary::FillColorName(const FString& animationName, int32 frameId, const FLinearColor& colorParam) {
}

void UChromaSDKPluginBPLibrary::FillColorAllFramesRGBName(const FString& animationName, int32 red, int32 green, int32 blue) {
}

void UChromaSDKPluginBPLibrary::FillColorAllFramesRGB(int32 animationId, int32 red, int32 green, int32 blue) {
}

void UChromaSDKPluginBPLibrary::FillColorAllFramesName(const FString& animationName, const FLinearColor& colorParam) {
}

void UChromaSDKPluginBPLibrary::FillColorAllFrames(int32 animationId, const FLinearColor& colorParam) {
}

void UChromaSDKPluginBPLibrary::FillColor(int32 animationId, int32 frameId, const FLinearColor& colorParam) {
}

void UChromaSDKPluginBPLibrary::FadeStartFramesName(const FString& animationName, int32 fade) {
}

void UChromaSDKPluginBPLibrary::FadeStartFrames(int32 animationId, int32 fade) {
}

void UChromaSDKPluginBPLibrary::FadeEndFramesName(const FString& animationName, int32 fade) {
}

void UChromaSDKPluginBPLibrary::FadeEndFrames(int32 animationId, int32 fade) {
}

void UChromaSDKPluginBPLibrary::DuplicateMirrorFramesName(const FString& animationName) {
}

void UChromaSDKPluginBPLibrary::DuplicateMirrorFrames(int32 animationId) {
}

void UChromaSDKPluginBPLibrary::DuplicateFramesName(const FString& animationName) {
}

void UChromaSDKPluginBPLibrary::DuplicateFrames(int32 animationId) {
}

void UChromaSDKPluginBPLibrary::DuplicateFirstFrameName(const FString& animationName, int32 frameCount) {
}

void UChromaSDKPluginBPLibrary::DuplicateFirstFrame(int32 animationId, int32 frameCount) {
}

TArray<FChromaSDKColors> UChromaSDKPluginBPLibrary::CreateRandomColorsBlackAndWhite2D(TEnumAsByte<EChromaSDKDevice2DEnum::Type> device) {
    return TArray<FChromaSDKColors>();
}

TArray<FLinearColor> UChromaSDKPluginBPLibrary::CreateRandomColorsBlackAndWhite1D(TEnumAsByte<EChromaSDKDevice1DEnum::Type> device) {
    return TArray<FLinearColor>();
}

TArray<FChromaSDKColors> UChromaSDKPluginBPLibrary::CreateRandomColors2D(TEnumAsByte<EChromaSDKDevice2DEnum::Type> device) {
    return TArray<FChromaSDKColors>();
}

TArray<FLinearColor> UChromaSDKPluginBPLibrary::CreateRandomColors1D(TEnumAsByte<EChromaSDKDevice1DEnum::Type> device) {
    return TArray<FLinearColor>();
}

TArray<FChromaSDKColors> UChromaSDKPluginBPLibrary::CreateColors2D(TEnumAsByte<EChromaSDKDevice2DEnum::Type> device) {
    return TArray<FChromaSDKColors>();
}

TArray<FLinearColor> UChromaSDKPluginBPLibrary::CreateColors1D(TEnumAsByte<EChromaSDKDevice1DEnum::Type> device) {
    return TArray<FLinearColor>();
}

void UChromaSDKPluginBPLibrary::CopyZeroTargetAllKeysAllFramesName(const FString& sourceAnimationName, const FString& targetAnimationName) {
}

void UChromaSDKPluginBPLibrary::CopyZeroTargetAllKeysAllFrames(int32 sourceAnimationId, int32 targetAnimationId) {
}

void UChromaSDKPluginBPLibrary::CopyNonZeroTargetAllKeysName(const FString& sourceAnimationName, const FString& targetAnimationName, int32 frameId) {
}

void UChromaSDKPluginBPLibrary::CopyNonZeroTargetAllKeysAllFramesOffsetName(const FString& sourceAnimationName, const FString& targetAnimationName, int32 offset) {
}

void UChromaSDKPluginBPLibrary::CopyNonZeroTargetAllKeysAllFramesOffset(int32 sourceAnimationId, int32 targetAnimationId, int32 offset) {
}

void UChromaSDKPluginBPLibrary::CopyNonZeroTargetAllKeysAllFramesName(const FString& sourceAnimationName, const FString& targetAnimationName) {
}

void UChromaSDKPluginBPLibrary::CopyNonZeroTargetAllKeysAllFrames(int32 sourceAnimationId, int32 targetAnimationId) {
}

void UChromaSDKPluginBPLibrary::CopyNonZeroTargetAllKeys(int32 sourceAnimationId, int32 targetAnimationId, int32 frameId) {
}

void UChromaSDKPluginBPLibrary::CopyNonZeroKeysColorName(const FString& sourceAnimationName, const FString& targetAnimationName, const int32 frameIndex, const TArray<TEnumAsByte<EChromaSDKKeyboardKey::Type>>& keys) {
}

void UChromaSDKPluginBPLibrary::CopyNonZeroKeysColorAllFramesName(const FString& sourceAnimationName, const FString& targetAnimationName, const TArray<TEnumAsByte<EChromaSDKKeyboardKey::Type>>& keys) {
}

void UChromaSDKPluginBPLibrary::CopyNonZeroKeysColorAllFrames(int32 sourceAnimationId, int32 targetAnimationId, const TArray<TEnumAsByte<EChromaSDKKeyboardKey::Type>>& keys) {
}

void UChromaSDKPluginBPLibrary::CopyNonZeroKeysColor(int32 sourceAnimationId, int32 targetAnimationId, int32 frameIndex, const TArray<TEnumAsByte<EChromaSDKKeyboardKey::Type>>& keys) {
}

void UChromaSDKPluginBPLibrary::CopyNonZeroKeyColorName(const FString& sourceAnimationName, const FString& targetAnimationName, const int32 frameIndex, TEnumAsByte<EChromaSDKKeyboardKey::Type> key) {
}

void UChromaSDKPluginBPLibrary::CopyNonZeroKeyColor(int32 sourceAnimationId, int32 targetAnimationId, int32 frameIndex, TEnumAsByte<EChromaSDKKeyboardKey::Type> key) {
}

void UChromaSDKPluginBPLibrary::CopyNonZeroAllKeysOffsetName(const FString& sourceAnimationName, const FString& targetAnimationName, int32 frameId, int32 offset) {
}

void UChromaSDKPluginBPLibrary::CopyNonZeroAllKeysOffset(int32 sourceAnimationId, int32 targetAnimationId, int32 frameId, int32 offset) {
}

void UChromaSDKPluginBPLibrary::CopyNonZeroAllKeysName(const FString& sourceAnimationName, const FString& targetAnimationName, int32 frameId) {
}

void UChromaSDKPluginBPLibrary::CopyNonZeroAllKeysAllFramesOffsetName(const FString& sourceAnimationName, const FString& targetAnimationName, int32 offset) {
}

void UChromaSDKPluginBPLibrary::CopyNonZeroAllKeysAllFramesOffset(int32 sourceAnimationId, int32 targetAnimationId, int32 offset) {
}

void UChromaSDKPluginBPLibrary::CopyNonZeroAllKeysAllFramesName(const FString& sourceAnimationName, const FString& targetAnimationName) {
}

void UChromaSDKPluginBPLibrary::CopyNonZeroAllKeysAllFrames(int32 sourceAnimationId, int32 targetAnimationId) {
}

void UChromaSDKPluginBPLibrary::CopyNonZeroAllKeys(int32 sourceAnimationId, int32 targetAnimationId, int32 frameId) {
}

void UChromaSDKPluginBPLibrary::CopyKeysColorName(const FString& sourceAnimationName, const FString& targetAnimationName, const int32 frameIndex, const TArray<TEnumAsByte<EChromaSDKKeyboardKey::Type>>& keys) {
}

void UChromaSDKPluginBPLibrary::CopyKeysColorAllFramesName(const FString& sourceAnimationName, const FString& targetAnimationName, const TArray<TEnumAsByte<EChromaSDKKeyboardKey::Type>>& keys) {
}

void UChromaSDKPluginBPLibrary::CopyKeysColorAllFrames(int32 sourceAnimationId, int32 targetAnimationId, const TArray<TEnumAsByte<EChromaSDKKeyboardKey::Type>>& keys) {
}

void UChromaSDKPluginBPLibrary::CopyKeysColor(int32 sourceAnimationId, int32 targetAnimationId, int32 frameIndex, const TArray<TEnumAsByte<EChromaSDKKeyboardKey::Type>>& keys) {
}

void UChromaSDKPluginBPLibrary::CopyKeyColorName(const FString& sourceAnimationName, const FString& targetAnimationName, const int32 frameIndex, TEnumAsByte<EChromaSDKKeyboardKey::Type> key) {
}

void UChromaSDKPluginBPLibrary::CopyKeyColor(int32 sourceAnimationId, int32 targetAnimationId, int32 frameIndex, TEnumAsByte<EChromaSDKKeyboardKey::Type> key) {
}

void UChromaSDKPluginBPLibrary::CopyAnimationName(const FString& sourceAnimationName, const FString& targetAnimationName) {
}

void UChromaSDKPluginBPLibrary::CopyAnimation(int32 sourceAnimationId, const FString& targetAnimationName) {
}

void UChromaSDKPluginBPLibrary::CopyAllKeysName(const FString& sourceAnimationName, const FString& targetAnimationName, int32 frameId) {
}

void UChromaSDKPluginBPLibrary::CopyAllKeysAllFramesName(const FString& sourceAnimationName, const FString& targetAnimationName) {
}

void UChromaSDKPluginBPLibrary::CopyAllKeysAllFrames(int32 sourceAnimationId, int32 targetAnimationId) {
}

void UChromaSDKPluginBPLibrary::CopyAllKeys(int32 sourceAnimationId, int32 targetAnimationId, int32 frameId) {
}

void UChromaSDKPluginBPLibrary::CloseAnimationName(const FString& animationName) {
}

void UChromaSDKPluginBPLibrary::CloseAnimation(const int32 animationId) {
}

void UChromaSDKPluginBPLibrary::CloseAll() {
}

void UChromaSDKPluginBPLibrary::ClearAnimationType(TEnumAsByte<EChromaSDKDeviceEnum::Type> device) {
}

void UChromaSDKPluginBPLibrary::ClearAll() {
}

int32 UChromaSDKPluginBPLibrary::ChromaSDKUnInit() {
    return 0;
}

int32 UChromaSDKPluginBPLibrary::ChromaSDKSetEffect(const FChromaSDKGuid& effectId) {
    return 0;
}

int32 UChromaSDKPluginBPLibrary::ChromaSDKInitSDK(const FChromaSDKAppInfoType& appInfo) {
    return 0;
}

int32 UChromaSDKPluginBPLibrary::ChromaSDKInit() {
    return 0;
}

int32 UChromaSDKPluginBPLibrary::ChromaSDKDeleteEffect(const FChromaSDKGuid& effectId) {
    return 0;
}

FChromaSDKEffectResult UChromaSDKPluginBPLibrary::ChromaSDKCreateEffectStatic(TEnumAsByte<EChromaSDKDeviceEnum::Type> device, const FLinearColor& colorParam) {
    return FChromaSDKEffectResult{};
}

FChromaSDKEffectResult UChromaSDKPluginBPLibrary::ChromaSDKCreateEffectNone(TEnumAsByte<EChromaSDKDeviceEnum::Type> device) {
    return FChromaSDKEffectResult{};
}

FChromaSDKEffectResult UChromaSDKPluginBPLibrary::ChromaSDKCreateEffectKeyboardCustom2D(const TArray<FChromaSDKColors>& colors) {
    return FChromaSDKEffectResult{};
}

FChromaSDKEffectResult UChromaSDKPluginBPLibrary::ChromaSDKCreateEffectCustom2D(TEnumAsByte<EChromaSDKDevice2DEnum::Type> device, const TArray<FChromaSDKColors>& colors) {
    return FChromaSDKEffectResult{};
}

FChromaSDKEffectResult UChromaSDKPluginBPLibrary::ChromaSDKCreateEffectCustom1D(TEnumAsByte<EChromaSDKDevice1DEnum::Type> device, const TArray<FLinearColor>& colors) {
    return FChromaSDKEffectResult{};
}

void UChromaSDKPluginBPLibrary::AppendAllFramesName(const FString& sourceAnimationName, const FString& targetAnimationName) {
}

void UChromaSDKPluginBPLibrary::AppendAllFrames(int32 sourceAnimationId, int32 targetAnimationId) {
}

void UChromaSDKPluginBPLibrary::AddNonZeroTargetAllKeysAllFramesOffsetName(const FString& sourceAnimationName, const FString& targetAnimationName, int32 offset) {
}

void UChromaSDKPluginBPLibrary::AddNonZeroTargetAllKeysAllFramesOffset(int32 sourceAnimationId, int32 targetAnimationId, int32 offset) {
}

void UChromaSDKPluginBPLibrary::AddNonZeroTargetAllKeysAllFramesName(const FString& sourceAnimationName, const FString& targetAnimationName) {
}

void UChromaSDKPluginBPLibrary::AddNonZeroTargetAllKeysAllFrames(int32 sourceAnimationId, int32 targetAnimationId) {
}

void UChromaSDKPluginBPLibrary::AddNonZeroAllKeysName(const FString& sourceAnimationName, const FString& targetAnimationName, int32 frameId) {
}

void UChromaSDKPluginBPLibrary::AddNonZeroAllKeysAllFramesOffsetName(const FString& sourceAnimationName, const FString& targetAnimationName, int32 offset) {
}

void UChromaSDKPluginBPLibrary::AddNonZeroAllKeysAllFramesOffset(int32 sourceAnimationId, int32 targetAnimationId, int32 offset) {
}

void UChromaSDKPluginBPLibrary::AddNonZeroAllKeysAllFramesName(const FString& sourceAnimationName, const FString& targetAnimationName) {
}

void UChromaSDKPluginBPLibrary::AddNonZeroAllKeysAllFrames(int32 sourceAnimationId, int32 targetAnimationId) {
}

void UChromaSDKPluginBPLibrary::AddNonZeroAllKeys(int32 sourceAnimationId, int32 targetAnimationId, int32 frameId) {
}


