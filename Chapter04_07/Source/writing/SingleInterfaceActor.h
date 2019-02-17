#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyInterface.h"
#include "SingleInterfaceActor.generated.h"

UCLASS()
class WRITING_API ASingleInterfaceActor : public AActor, public IMyInterface
{
        GENERATED_BODY()
    public:
        virtual FString GetTestName() override;
};