// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_PickaxeRandomizer_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PickaxeRandomizer.BP_PickaxeRandomizer_C.SetMesh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent**   self2                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<class UStaticMesh*>*    TargetArray                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_PickaxeRandomizer_C::SetMesh(class UStaticMeshComponent** self2, TArray<class UStaticMesh*>* TargetArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickaxeRandomizer.BP_PickaxeRandomizer_C.SetMesh");

	ABP_PickaxeRandomizer_C_SetMesh_Params params;
	params.self2 = self2;
	params.TargetArray = TargetArray;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PickaxeRandomizer.BP_PickaxeRandomizer_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PickaxeRandomizer_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickaxeRandomizer.BP_PickaxeRandomizer_C.ReceiveBeginPlay");

	ABP_PickaxeRandomizer_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PickaxeRandomizer.BP_PickaxeRandomizer_C.ExecuteUbergraph_BP_PickaxeRandomizer
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PickaxeRandomizer_C::ExecuteUbergraph_BP_PickaxeRandomizer(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickaxeRandomizer.BP_PickaxeRandomizer_C.ExecuteUbergraph_BP_PickaxeRandomizer");

	ABP_PickaxeRandomizer_C_ExecuteUbergraph_BP_PickaxeRandomizer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
