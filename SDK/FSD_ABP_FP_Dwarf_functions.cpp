// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ABP_FP_Dwarf_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_FP_Dwarf.ABP_FP_Dwarf_C.AnimNotify_Mine
// (BlueprintCallable, BlueprintEvent)

void UABP_FP_Dwarf_C::AnimNotify_Mine()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_FP_Dwarf.ABP_FP_Dwarf_C.AnimNotify_Mine");

	UABP_FP_Dwarf_C_AnimNotify_Mine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_FP_Dwarf.ABP_FP_Dwarf_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UABP_FP_Dwarf_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_FP_Dwarf.ABP_FP_Dwarf_C.BlueprintInitializeAnimation");

	UABP_FP_Dwarf_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_FP_Dwarf.ABP_FP_Dwarf_C.StartInspectWeapon
// (Event, Protected, BlueprintEvent)

void UABP_FP_Dwarf_C::StartInspectWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_FP_Dwarf.ABP_FP_Dwarf_C.StartInspectWeapon");

	UABP_FP_Dwarf_C_StartInspectWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_FP_Dwarf.ABP_FP_Dwarf_C.StopInspectWeapon
// (Event, Protected, BlueprintEvent)

void UABP_FP_Dwarf_C::StopInspectWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_FP_Dwarf.ABP_FP_Dwarf_C.StopInspectWeapon");

	UABP_FP_Dwarf_C_StopInspectWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_FP_Dwarf.ABP_FP_Dwarf_C.AnimNotify_BeginBuild
// (BlueprintCallable, BlueprintEvent)

void UABP_FP_Dwarf_C::AnimNotify_BeginBuild()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_FP_Dwarf.ABP_FP_Dwarf_C.AnimNotify_BeginBuild");

	UABP_FP_Dwarf_C_AnimNotify_BeginBuild_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_FP_Dwarf.ABP_FP_Dwarf_C.AnimNotify_EndBuild
// (BlueprintCallable, BlueprintEvent)

void UABP_FP_Dwarf_C::AnimNotify_EndBuild()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_FP_Dwarf.ABP_FP_Dwarf_C.AnimNotify_EndBuild");

	UABP_FP_Dwarf_C_AnimNotify_EndBuild_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_FP_Dwarf.ABP_FP_Dwarf_C.ExecuteUbergraph_ABP_FP_Dwarf
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_FP_Dwarf_C::ExecuteUbergraph_ABP_FP_Dwarf(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_FP_Dwarf.ABP_FP_Dwarf_C.ExecuteUbergraph_ABP_FP_Dwarf");

	UABP_FP_Dwarf_C_ExecuteUbergraph_ABP_FP_Dwarf_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
