// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_PickaxeIconGenerator_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PickaxeIconGenerator.BP_PickaxeIconGenerator_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PickaxeIconGenerator_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickaxeIconGenerator.BP_PickaxeIconGenerator_C.UserConstructionScript");

	ABP_PickaxeIconGenerator_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PickaxeIconGenerator.BP_PickaxeIconGenerator_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PickaxeIconGenerator_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickaxeIconGenerator.BP_PickaxeIconGenerator_C.ReceiveBeginPlay");

	ABP_PickaxeIconGenerator_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PickaxeIconGenerator.BP_PickaxeIconGenerator_C.ExecuteUbergraph_BP_PickaxeIconGenerator
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PickaxeIconGenerator_C::ExecuteUbergraph_BP_PickaxeIconGenerator(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickaxeIconGenerator.BP_PickaxeIconGenerator_C.ExecuteUbergraph_BP_PickaxeIconGenerator");

	ABP_PickaxeIconGenerator_C_ExecuteUbergraph_BP_PickaxeIconGenerator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
