#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "ESBZAbilityInput.h"
#include "ESBZCharacterStance.h"
#include "SBZAILibrary.generated.h"

class AActor;
class ASBZAIBaseCharacter;
class ASBZAICharacter;
class ASBZAIController;
class ASBZCharacter;
class ASBZRoomVolume;
class UClass;
class UObject;
class USBZAIAction;
class USBZAIActionData;
class USBZAIOrder;
class USBZAIOrder_MoveTo;

UCLASS(Blueprintable)
class STARBREEZE_API USBZAILibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZAILibrary();

    UFUNCTION(BlueprintCallable)
    static void TriggerAbility(ASBZAICharacter* Character, ESBZAbilityInput InAbility);
    
    UFUNCTION(BlueprintCallable)
    static void SetStance(ASBZCharacter* Character, ESBZCharacterStance InStance);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static USBZAIAction* PushAction(UObject* Owner, const USBZAIActionData* Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FVector PlayerCenterOfMass(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void MakeNoise(AActor* NoiseGenerator, float Range, float Lifetime, const FGameplayTag& Tag, AActor* NoiseInstigator, ASBZRoomVolume* Room);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    static bool IsLocationSafeFromNeighbours(const ASBZAIBaseCharacter* Character, const FVector& Location, float MaxImpactTime, float DiameterInflation);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetNavAreaSmallestSideSqSize(const UObject* WorldContextObject, FVector CharacterLocation, float SearchRange, float WallAdditiveLength);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    static float FindDistance2DToWallAlongDir(const ASBZCharacter* Character, float MaxDistance, const FVector Direction, UClass* FilterClass, const bool bProjectStartLocation);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool DetectNavBottleNeckAndRelocate(const UObject* WorldContextObject, const FVector& BlockingCharacterLocation, const FVector& BlockedCharacterDirection, float& OutBottleNeckSqSize2D, FVector& OutRelocationPosition, float CharacterRadius, float BottleNeckSize);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    static USBZAIOrder_MoveTo* CreateAIOrderMoveTo(UClass* OrderClass, FVector Location, ASBZAIController* AIController);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    static USBZAIOrder* CreateAIOrder(UClass* OrderClass, ASBZAIController* AIController);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static USBZAIActionData* CreateActionData(UClass* ObjectClass, UObject* Outer);
    
};

