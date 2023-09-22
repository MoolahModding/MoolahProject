// Copyright 2021 Starbreeze AB. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AssetTypeActions_Base.h"

/**
 * 
 */
class DUMMYFACTORIES_API Dum_AkAudioEventAssetTypeActions : public FAssetTypeActions_Base
{
public:
 UClass* GetSupportedClass() const override;
 FText GetName() const override;
 FColor GetTypeColor() const override;
 uint32 GetCategories() override;
};
