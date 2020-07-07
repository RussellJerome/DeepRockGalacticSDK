// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Widget_Jukebox02_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_Jukebox02.Widget_Jukebox02_C.SetIsPlaying
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Jukebox02_C::SetIsPlaying(bool* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Jukebox02.Widget_Jukebox02_C.SetIsPlaying");

	UWidget_Jukebox02_C_SetIsPlaying_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Jukebox02.Widget_Jukebox02_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_Jukebox02_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Jukebox02.Widget_Jukebox02_C.Construct");

	UWidget_Jukebox02_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Jukebox02.Widget_Jukebox02_C.ExecuteUbergraph_Widget_Jukebox02
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Jukebox02_C::ExecuteUbergraph_Widget_Jukebox02(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Jukebox02.Widget_Jukebox02_C.ExecuteUbergraph_Widget_Jukebox02");

	UWidget_Jukebox02_C_ExecuteUbergraph_Widget_Jukebox02_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
