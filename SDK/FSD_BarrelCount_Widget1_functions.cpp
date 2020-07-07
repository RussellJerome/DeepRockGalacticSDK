// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BarrelCount_Widget1_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BarrelCount_Widget1.BarrelCount_Widget1_C.SetScore
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBarrelCount_Widget1_C::SetScore(int* Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function BarrelCount_Widget1.BarrelCount_Widget1_C.SetScore");

	UBarrelCount_Widget1_C_SetScore_Params params;
	params.Score = Score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BarrelCount_Widget1.BarrelCount_Widget1_C.ExecuteUbergraph_BarrelCount_Widget1
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBarrelCount_Widget1_C::ExecuteUbergraph_BarrelCount_Widget1(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BarrelCount_Widget1.BarrelCount_Widget1_C.ExecuteUbergraph_BarrelCount_Widget1");

	UBarrelCount_Widget1_C_ExecuteUbergraph_BarrelCount_Widget1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
