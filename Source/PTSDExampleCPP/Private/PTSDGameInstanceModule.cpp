#include "PTSDGameInstanceModule.h"

#include "PTSDExampleCPP/PTSDExampleCPPModule.h"

void UPTSDGameInstanceModule::DispatchLifecycleEvent(ELifecyclePhase Phase)
{
    Super::DispatchLifecycleEvent(Phase);

    UE_LOG(LogPTSDExampleCPP, Verbose, TEXT("UPTSDGameInstanceModule::DispatchLifecycleEvent - %s"), *StaticEnum<ELifecyclePhase>()->GetValueAsString(Phase));
}
