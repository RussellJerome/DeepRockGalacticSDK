// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_PLS_CaveGenerator_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PLS_CaveGenerator.PLS_CaveGenerator_C.CreateCaveGraph
// (Public, BlueprintCallable, BlueprintEvent)

void APLS_CaveGenerator_C::CreateCaveGraph()
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_CaveGenerator.PLS_CaveGenerator_C.CreateCaveGraph");

	APLS_CaveGenerator_C_CreateCaveGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PLS_CaveGenerator.PLS_CaveGenerator_C.SpawnDropPod
// (BlueprintCallable, BlueprintEvent)

void APLS_CaveGenerator_C::SpawnDropPod()
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_CaveGenerator.PLS_CaveGenerator_C.SpawnDropPod");

	APLS_CaveGenerator_C_SpawnDropPod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PLS_CaveGenerator.PLS_CaveGenerator_C.ExecuteUbergraph_PLS_CaveGenerator
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APLS_CaveGenerator_C::ExecuteUbergraph_PLS_CaveGenerator(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_CaveGenerator.PLS_CaveGenerator_C.ExecuteUbergraph_PLS_CaveGenerator");

	APLS_CaveGenerator_C_ExecuteUbergraph_PLS_CaveGenerator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
