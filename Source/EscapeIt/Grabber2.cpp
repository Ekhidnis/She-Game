// Copyright Vladislav Gavrilyuk 2021


#include "Grabber2.h"
#include "Gameframework/Actor.h"
#define OUT

// Sets default values for this component's properties
UGrabber2::UGrabber2()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

// Called when the game starts
void UGrabber2::BeginPlay()
{
	Super::BeginPlay();
	
	DoComponentCheck();
}

// Called every frame
void UGrabber2::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

		if (PhysicsHandle->GrabbedComponent)
		{
			PhysicsHandle->SetTargetLocation(GetReachLineEnd());
		}
}

void UGrabber2::Grab()
{	
	auto HitResult = GetFirstPhysicsBodyInReach();
	auto ComponentToGrab = HitResult.GetComponent();
	auto ActorHit = HitResult.GetActor();

	if (ActorHit)
	{

			PhysicsHandle->GrabComponent(
				ComponentToGrab,
				NAME_None,
				ComponentToGrab->GetOwner()->GetActorLocation(),
				true);
		}
}
void UGrabber2::Release()
{
		PhysicsHandle->ReleaseComponent();
}
void UGrabber2::PhysicsComponentCheck()	
{
	// unidentified pointer crash protection
		PhysicsHandle = GetOwner()->FindComponentByClass<UPhysicsHandleComponent>();
		if (PhysicsHandle)
		{
			// Physics handle is found
		}
		else
		{
			// Physics handle is not found
			UE_LOG(LogTemp, Error, TEXT("Physics handle for %s is NOT found"), *GetOwner()->GetName());
		}
}
void UGrabber2::InputComponentCheck()
{

		InputComponent = GetOwner()->FindComponentByClass<UInputComponent>();
		if (InputComponent)
		{
			// Bind the input
			InputComponent->BindAction("Grab", IE_Pressed, this, &UGrabber2::Grab);
			InputComponent->BindAction("Grab", IE_Released, this, &UGrabber2::Release);
		}
		else
		{
			// Input Component is not found
			UE_LOG(LogTemp, Error, TEXT("Input Component for %s is NOT found"), *GetOwner()->GetName());
		}
}
FHitResult UGrabber2::GetFirstPhysicsBodyInReach()
{
	// create input values for GetPlayerViewPoint
	FVector PlayerViewPointLocation;
	FRotator PlayerViewPointRotation;

	// Get player's view point this tick
	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(
		OUT PlayerViewPointLocation,
		OUT PlayerViewPointRotation
	);

	FVector LineTraceEnd = PlayerViewPointLocation + (PlayerViewPointRotation.Vector() * Reach);
	// Ray-cast out to reach distance
	FHitResult Hit;
	FCollisionQueryParams TraceParameters(FName(TEXT("")), false, GetOwner());

	GetWorld()->LineTraceSingleByObjectType(
		OUT Hit,
		PlayerViewPointLocation,
		GetReachLineEnd() ,
		FCollisionObjectQueryParams(ECollisionChannel::ECC_PhysicsBody),
		TraceParameters
	);
	// See what is hit by ray-cast
	AActor* ActorHit = Hit.GetActor();
	if (ActorHit)
	{
		UE_LOG(LogTemp, Warning, TEXT("You line trace hit a %s"), *ActorHit->GetName());
	};
	return Hit;
};
void UGrabber2::DoComponentCheck()
{
	PhysicsComponentCheck();
	InputComponentCheck();
}
FVector UGrabber2::GetReachLineEnd()
{
	// create input values for GetPlayerViewPoint
	FVector PlayerViewPointLocation;
	FRotator PlayerViewPointRotation;

	// Get player's view point this tick
	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(
		OUT PlayerViewPointLocation,
		OUT PlayerViewPointRotation
	);

	return PlayerViewPointLocation + (PlayerViewPointRotation.Vector() * Reach);
}
