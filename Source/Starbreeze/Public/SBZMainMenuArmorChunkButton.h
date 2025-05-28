#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBZArmorChunkType.h"
#include "SBZArmorChunkTypeData.h"
#include "SBZMenuButton.h"
#include "SBZMainMenuArmorChunkButton.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZMainMenuArmorChunkButton : public USBZMenuButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZArmorChunkType ArmorChunkType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZArmorChunkTypeData ArmorChunkData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsEquipped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ChunkIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ArmorLoadoutIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid ConfigSlotEntitlementId;
    
public:
    USBZMainMenuArmorChunkButton();

    UFUNCTION(BlueprintCallable)
    void SetEquipped(bool bInIsEquipped);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEquippedChanged(bool bInIsEquipped);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializeArmorChunk(const FGuid& InConfigSlotEntitlementId, const ESBZArmorChunkType InArmorChunkType, int32 InChunkIndex, int32 InArmorLoadoutIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESBZArmorChunkType GetArmorChunkType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSBZArmorChunkTypeData GetArmorChunkData() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ArmorChunkInitialized(const FSBZArmorChunkTypeData& InArmorChunkData);
    
};

