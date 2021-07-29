#include "HeroDebugModule/Public/HeroDebugModule.h"

#if WITH_GAMEPLAY_DEBUGGER
#include "HeroDebuggerCategory_Attributes.h"
#include "GameplayDebugger.h"
#endif

DEFINE_LOG_CATEGORY(HeroDebugModule);

#define LOCTEXT_NAMESPACE "FHeroDebugModule"

void FHeroDebugModule::StartupModule()
{
	UE_LOG(HeroDebugModule, Warning, TEXT("FHeroDebugModule module has started!"));

#if WITH_GAMEPLAY_DEBUGGER
	IGameplayDebugger& GameplayDebuggerModule = IGameplayDebugger::Get();

	GameplayDebuggerModule.RegisterCategory("Character Attributtes", IGameplayDebugger::FOnGetCategory::CreateStatic(
		&HeroDebuggerCategory_Attributes::MakeInstance), EGameplayDebuggerCategoryState::EnabledInSimulate);

	GameplayDebuggerModule.NotifyCategoriesChanged();
#endif
}

void FHeroDebugModule::ShutdownModule()
{
	UE_LOG(HeroDebugModule, Warning, TEXT("FHeroDebugModule module has shut down"));

#if WITH_GAMEPLAY_DEBUGGER
	if (IGameplayDebugger::IsAvailable())
	{
		IGameplayDebugger& GameplayDebuggerModule = IGameplayDebugger::Get();
		GameplayDebuggerModule.UnregisterCategory("Character Attributtes");
	}
#endif
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FHeroDebugModule, HeroDebugModule)