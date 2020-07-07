#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_GrenadeThrow_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ITM_GrenadeThrow.ITM_GrenadeThrow_C
// 0x00D8 (0x0568 - 0x0490)
class AITM_GrenadeThrow_C : public AThrownGrenadeItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0490(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                         Billboard;                                                // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             EndPoint;                                                 // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USplineMeshComponent*                        SplineMesh;                                               // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     StartTangent;                                             // 0x04B8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     EndTangent;                                               // 0x04C4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     EndLocation;                                              // 0x04D0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x04DC(0x0004) MISSED OFFSET
	struct FRuntimeFloatCurve                          ScaleCurve;                                               // 0x04E0(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ITM_GrenadeThrow.ITM_GrenadeThrow_C");
		return ptr;
	}


	void UpdateSpline(TArray<struct FVector>* Array, float* DeltaTime);
	void ReceiveTick(float* DeltaSeconds);
	void RecieveEquipped();
	void RecieveUnequipped();
	void ReceiveBeginPlay();
	void Set_Is_Visible(bool* Visible);
	void GrenadeThrown();
	void ExecuteUbergraph_ITM_GrenadeThrow(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
