#include "HeroDebugModule/Public/HeroDebugModule.h"

DEFINE_LOG_CATEGORY(HeroDebugModule);

#define LOCTEXT_NAMESPACE "FHeroDebugModule"

void FHeroDebugModule::StartupModule()
{
	UE_LOG(HeroDebugModule, Warning, TEXT("FHeroDebugModule module has started!"));
}

void FHeroDebugModule::ShutdownModule()
{
	UE_LOG(HeroDebugModule, Warning, TEXT("FHeroDebugModule module has shut down"));
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FHeroDebugModule, HeroDebugModule)