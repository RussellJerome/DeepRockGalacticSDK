// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_Salvage_Point_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Salvage_Point.BP_Salvage_Point_C.SetSalvagePointState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char*                 State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Salvage_Point_C::SetSalvagePointState(unsigned char* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_Point.BP_Salvage_Point_C.SetSalvagePointState");

	ABP_Salvage_Point_C_SetSalvagePointState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Salvage_Point.BP_Salvage_Point_C.OnRep_State
// (BlueprintCallable, BlueprintEvent)

void ABP_Salvage_Point_C::OnRep_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_Point.BP_Salvage_Point_C.OnRep_State");

	ABP_Salvage_Point_C_OnRep_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Salvage_Point.BP_Salvage_Point_C.OnDefenseComplete
// (BlueprintCallable, BlueprintEvent)

void ABP_Salvage_Point_C::OnDefenseComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_Point.BP_Salvage_Point_C.OnDefenseComplete");

	ABP_Salvage_Point_C_OnDefenseComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Salvage_Point.BP_Salvage_Point_C.OnDefenseStart
// (BlueprintCallable, BlueprintEvent)

void ABP_Salvage_Point_C::OnDefenseStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_Point.BP_Salvage_Point_C.OnDefenseStart");

	ABP_Salvage_Point_C_OnDefenseStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Salvage_Point.BP_Salvage_Point_C.EnableRepair
// (BlueprintCallable, BlueprintEvent)

void ABP_Salvage_Point_C::EnableRepair()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_Point.BP_Salvage_Point_C.EnableRepair");

	ABP_Salvage_Point_C_EnableRepair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Salvage_Point.BP_Salvage_Point_C.OnDefenseFail
// (BlueprintCallable, BlueprintEvent)

void ABP_Salvage_Point_C::OnDefenseFail()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_Point.BP_Salvage_Point_C.OnDefenseFail");

	ABP_Salvage_Point_C_OnDefenseFail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Salvage_Point.BP_Salvage_Point_C.ExecuteUbergraph_BP_Salvage_Point
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Salvage_Point_C::ExecuteUbergraph_BP_Salvage_Point(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_Point.BP_Salvage_Point_C.ExecuteUbergraph_BP_Salvage_Point");

	ABP_Salvage_Point_C_ExecuteUbergraph_BP_Salvage_Point_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
