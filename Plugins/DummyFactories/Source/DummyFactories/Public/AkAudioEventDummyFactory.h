// Copyright 2021 Starbreeze AB. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"

#include "AkAudioEvent.h"

#include "AkAudioEventDummyFactory.generated.h"

/**
 * 
 */
UCLASS()
class DUMMYFACTORIES_API UAkAudioEventDummyFactory : public UFactory
{
	GENERATED_BODY()
public:
	UAkAudioEventDummyFactory();
	virtual uint32 GetMenuCategories() const override;
	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
};
