// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HoopsScore_Widget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HoopsScore_Widget.HoopsScore_Widget_C.SetScore
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHoopsScore_Widget_C::SetScore(int* Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoopsScore_Widget.HoopsScore_Widget_C.SetScore");

	UHoopsScore_Widget_C_SetScore_Params params;
	params.Score = Score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoopsScore_Widget.HoopsScore_Widget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHoopsScore_Widget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoopsScore_Widget.HoopsScore_Widget_C.Construct");

	UHoopsScore_Widget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoopsScore_Widget.HoopsScore_Widget_C.ExecuteUbergraph_HoopsScore_Widget
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHoopsScore_Widget_C::ExecuteUbergraph_HoopsScore_Widget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoopsScore_Widget.HoopsScore_Widget_C.ExecuteUbergraph_HoopsScore_Widget");

	UHoopsScore_Widget_C_ExecuteUbergraph_HoopsScore_Widget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
