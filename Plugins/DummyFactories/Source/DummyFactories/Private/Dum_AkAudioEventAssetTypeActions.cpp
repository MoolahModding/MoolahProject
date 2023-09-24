// Copyright 2021 Starbreeze AB. All Rights Reserved.


#include "Dum_AkAudioEventAssetTypeActions.h"
#include <AkAudioEvent.h>

uint32 Dum_AkAudioEventAssetTypeActions::GetCategories()
{
	return EAssetTypeCategories::Media;
}

FText Dum_AkAudioEventAssetTypeActions::GetName() const
{
	return INVTEXT("AkAudioEvent");
}

UClass* Dum_AkAudioEventAssetTypeActions::GetSupportedClass() const
{
	return UAkAudioEvent::StaticClass();
}

FColor Dum_AkAudioEventAssetTypeActions::GetTypeColor() const
{
	return FColor::White;
}