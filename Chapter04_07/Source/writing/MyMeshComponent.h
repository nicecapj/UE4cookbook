//
//#pragma once
//
//#include "CoreMinimal.h"
//#include "Components/MeshComponent.h"
//#include "PrimitiveSceneProxy.h"
//#include "MyMeshComponent.generated.h"
//
//
//UCLASS(ClassGroup = Experimental, meta =(BlueprintSpawnableComponent))
//class WRITING_API UMyMeshComponent : public UMeshComponent
//{
//        GENERATED_BODY()
//    public:
//        UMyMeshComponent();
//
//        virtual FPrimitiveSceneProxy* CreateSceneProxy() override;
//
//        TArray<int32> Indices;
//        TArray<FVector> Vertices;
//        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Materials)
//        UMaterial* TheMaterial;
//};