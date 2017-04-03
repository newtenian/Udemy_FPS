// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
#pragma once 
#include "GameFramework/HUD.h"
#include "Udemy_FPSHUD.generated.h"

UCLASS()
class AUdemy_FPSHUD : public AHUD
{
	GENERATED_BODY()

public:
	AUdemy_FPSHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

