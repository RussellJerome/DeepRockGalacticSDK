// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ScreenOverlay_Incapacitated_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ScreenOverlay_Incapacitated.ScreenOverlay_Incapacitated_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UScreenOverlay_Incapacitated_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenOverlay_Incapacitated.ScreenOverlay_Incapacitated_C.Construct");

	UScreenOverlay_Incapacitated_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScreenOverlay_Incapacitated.ScreenOverlay_Incapacitated_C.ExecuteUbergraph_ScreenOverlay_Incapacitated
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScreenOverlay_Incapacitated_C::ExecuteUbergraph_ScreenOverlay_Incapacitated(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenOverlay_Incapacitated.ScreenOverlay_Incapacitated_C.ExecuteUbergraph_ScreenOverlay_Incapacitated");

	UScreenOverlay_Incapacitated_C_ExecuteUbergraph_ScreenOverlay_Incapacitated_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
