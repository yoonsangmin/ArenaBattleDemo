// Fill out your copyright notice in the Description page of Project Settings.


#include "ABGameMode.h"

AABGameMode::AABGameMode()
{
	// DefaultPawnClass.
	// 클래스 정보를 받아올 때는 _C를 붙여야 함.
	// static ConstructorHelpers::FClassFinder<APawn> DefaultCharacterRef(
	// 	TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter.BP_ThirdPersonCharacter_C"));
	static ConstructorHelpers::FClassFinder<APawn> DefaultCharacterRef(TEXT("/Script/ArenaBattleDemo.ABCharacterPlayer"));
	
	// DefaultPawnClass 설정.
	if (DefaultCharacterRef.Class)
	{
		DefaultPawnClass = DefaultCharacterRef.Class;
	}

	// PlayerControllerClass 설정.
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerClassRef(
		TEXT("/Script/ArenaBattleDemo.ABPlayerController"));
	if (PlayerControllerClassRef.Class)
	{
		PlayerControllerClass = PlayerControllerClassRef.Class;
	}
	//PlayerControllerClass = AABPlayerController::StaticClass();
}
