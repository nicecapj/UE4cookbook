#include "SingleInterfaceActor.h"

FString ASingleInterfaceActor::GetTestName()
{
    return IMyInterface::GetTestName();
}
