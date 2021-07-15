#pragma once

#include "CoreMinimal.h"
#include "Module/GameInstanceModule.h"
#include "PTSDGameInstanceModule.generated.h"

UCLASS()
class PTSDEXAMPLECPP_API UPTSDGameInstanceModule : public UGameInstanceModule
{
	GENERATED_BODY()
public:
	virtual void DispatchLifecycleEvent(ELifecyclePhase Phase) override;
};
