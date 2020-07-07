// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ABP_TP_Dwarf_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_TP_Dwarf.ABP_TP_Dwarf_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UABP_TP_Dwarf_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_TP_Dwarf.ABP_TP_Dwarf_C.BlueprintInitializeAnimation");

	UABP_TP_Dwarf_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_TP_Dwarf.ABP_TP_Dwarf_C.AnimNotify_StartBuild
// (BlueprintCallable, BlueprintEvent)

void UABP_TP_Dwarf_C::AnimNotify_StartBuild()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_TP_Dwarf.ABP_TP_Dwarf_C.AnimNotify_StartBuild");

	UABP_TP_Dwarf_C_AnimNotify_StartBuild_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_TP_Dwarf.ABP_TP_Dwarf_C.AnimNotify_EndBuild
// (BlueprintCallable, BlueprintEvent)

void UABP_TP_Dwarf_C::AnimNotify_EndBuild()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_TP_Dwarf.ABP_TP_Dwarf_C.AnimNotify_EndBuild");

	UABP_TP_Dwarf_C_AnimNotify_EndBuild_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_TP_Dwarf.ABP_TP_Dwarf_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_TP_Dwarf_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_TP_Dwarf.ABP_TP_Dwarf_C.BlueprintUpdateAnimation");

	UABP_TP_Dwarf_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_TP_Dwarf.ABP_TP_Dwarf_C.AnimNotify_Mine
// (BlueprintCallable, BlueprintEvent)

void UABP_TP_Dwarf_C::AnimNotify_Mine()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_TP_Dwarf.ABP_TP_Dwarf_C.AnimNotify_Mine");

	UABP_TP_Dwarf_C_AnimNotify_Mine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_TP_Dwarf.ABP_TP_Dwarf_C.ExecuteUbergraph_ABP_TP_Dwarf
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_TP_Dwarf_C::ExecuteUbergraph_ABP_TP_Dwarf(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_TP_Dwarf.ABP_TP_Dwarf_C.ExecuteUbergraph_ABP_TP_Dwarf");

	UABP_TP_Dwarf_C_ExecuteUbergraph_ABP_TP_Dwarf_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
