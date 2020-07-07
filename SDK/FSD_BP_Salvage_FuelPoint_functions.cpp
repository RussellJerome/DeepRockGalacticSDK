// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_Salvage_FuelPoint_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Salvage_FuelPoint.BP_Salvage_FuelPoint_C.EnableRepair
// (BlueprintCallable, BlueprintEvent)

void ABP_Salvage_FuelPoint_C::EnableRepair()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_FuelPoint.BP_Salvage_FuelPoint_C.EnableRepair");

	ABP_Salvage_FuelPoint_C_EnableRepair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Salvage_FuelPoint.BP_Salvage_FuelPoint_C.OnDefenseStart
// (BlueprintCallable, BlueprintEvent)

void ABP_Salvage_FuelPoint_C::OnDefenseStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_FuelPoint.BP_Salvage_FuelPoint_C.OnDefenseStart");

	ABP_Salvage_FuelPoint_C_OnDefenseStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Salvage_FuelPoint.BP_Salvage_FuelPoint_C.OnDefenseComplete
// (BlueprintCallable, BlueprintEvent)

void ABP_Salvage_FuelPoint_C::OnDefenseComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_FuelPoint.BP_Salvage_FuelPoint_C.OnDefenseComplete");

	ABP_Salvage_FuelPoint_C_OnDefenseComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Salvage_FuelPoint.BP_Salvage_FuelPoint_C.OnDefenseFail
// (BlueprintCallable, BlueprintEvent)

void ABP_Salvage_FuelPoint_C::OnDefenseFail()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_FuelPoint.BP_Salvage_FuelPoint_C.OnDefenseFail");

	ABP_Salvage_FuelPoint_C_OnDefenseFail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Salvage_FuelPoint.BP_Salvage_FuelPoint_C.ExecuteUbergraph_BP_Salvage_FuelPoint
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Salvage_FuelPoint_C::ExecuteUbergraph_BP_Salvage_FuelPoint(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_FuelPoint.BP_Salvage_FuelPoint_C.ExecuteUbergraph_BP_Salvage_FuelPoint");

	ABP_Salvage_FuelPoint_C_ExecuteUbergraph_BP_Salvage_FuelPoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
