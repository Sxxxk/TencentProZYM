// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "FPSPro1HUD.generated.h"

UCLASS()
class AFPSPro1HUD : public AHUD
{
	GENERATED_BODY()

public:
	AFPSPro1HUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

