#include "PTSDExampleCPPModule.h"

#include "FGPipeNetwork.h"
#include "FGPipeSubsystem.h"
#include "Patching/NativeHookManager.h"

DEFINE_LOG_CATEGORY(LogPTSDExampleCPP);

void FPTSDExampleCPPModule::StartupModule()
{
}

IMPLEMENT_GAME_MODULE(FPTSDExampleCPPModule, PTSDExampleCPP);
