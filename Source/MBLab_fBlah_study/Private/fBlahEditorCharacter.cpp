// © Ajit D'Monte 2019


#include "fBlahEditorCharacter.h"

// Sets default values
AfBlahEditorCharacter::AfBlahEditorCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AfBlahEditorCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AfBlahEditorCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (bEditorTick) 
	{
		EditorTick(DeltaTime);
	}
}

// Called to bind functionality to input
void AfBlahEditorCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

