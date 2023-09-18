#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZAvatarCache.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class STARBREEZE_API USBZAvatarCache : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> AvatarTextureCache;
    
public:
    USBZAvatarCache();

};

