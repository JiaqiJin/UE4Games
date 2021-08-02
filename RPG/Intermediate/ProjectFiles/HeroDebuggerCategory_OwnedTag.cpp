#include "HeroDebuggerCategory_OwnedTag.h"

#if WITH_GAMEPLAY_DEBUGGER

HeroDebuggerCategory_OwnedTag::HeroDebuggerCategory_OwnedTag()
{
	bShowOnlyWithDebugActor = false;
}

/** Creates an instance of this category - will be used on module startup to include our category in the Editor */
TSharedRef<FGameplayDebuggerCategory> HeroDebuggerCategory_OwnedTag::MakeInstance()
{
	return MakeShareable(new HeroDebuggerCategory_OwnedTag());
}

/** Collects the data we would like to print */
void HeroDebuggerCategory_OwnedTag::CollectData(class APlayerController* OwnerPC, class AActor* DebugActor)
{

}

/** Displays the data we collected in the CollectData function */
void HeroDebuggerCategory_OwnedTag::DrawData(class APlayerController* OwnerPC, class FGameplayDebuggerCanvasContext& CanvasContext)
{

}

#endif