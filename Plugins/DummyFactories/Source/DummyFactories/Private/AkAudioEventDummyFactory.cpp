// Copyright 2021 Starbreeze AB. All Rights Reserved.


#include "AkAudioEventDummyFactory.h"

#include "AssetTypeCategories.h"

UAkAudioEventDummyFactory::UAkAudioEventDummyFactory() {
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = UAkAudioEvent::StaticClass();
}

UObject* UAkAudioEventDummyFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) {
	UAkAudioEvent* akEvent = NewObject<UAkAudioEvent>(InParent, Class, Name, Flags);
	return akEvent;
}

uint32 UAkAudioEventDummyFactory::GetMenuCategories() const {
	return EAssetTypeCategories::Media;
}