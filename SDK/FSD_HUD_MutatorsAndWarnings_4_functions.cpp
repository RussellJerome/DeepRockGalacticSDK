// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_MutatorsAndWarnings_4_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_MutatorsAndWarnings_4.HUD_MutatorsAndWarnings_3_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_MutatorsAndWarnings_3_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_MutatorsAndWarnings_4.HUD_MutatorsAndWarnings_3_C.Construct");

	UHUD_MutatorsAndWarnings_3_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_MutatorsAndWarnings_4.HUD_MutatorsAndWarnings_3_C.ExecuteUbergraph_HUD_MutatorsAndWarnings_4
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_MutatorsAndWarnings_3_C::ExecuteUbergraph_HUD_MutatorsAndWarnings_4(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_MutatorsAndWarnings_4.HUD_MutatorsAndWarnings_3_C.ExecuteUbergraph_HUD_MutatorsAndWarnings_4");

	UHUD_MutatorsAndWarnings_3_C_ExecuteUbergraph_HUD_MutatorsAndWarnings_4_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
