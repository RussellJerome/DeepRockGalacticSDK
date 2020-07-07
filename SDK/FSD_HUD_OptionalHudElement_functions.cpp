// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_OptionalHudElement_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_OptionalHudElement.HUD_OptionalHudElement_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_OptionalHudElement_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_OptionalHudElement.HUD_OptionalHudElement_C.Construct");

	UHUD_OptionalHudElement_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_OptionalHudElement.HUD_OptionalHudElement_C.ExecuteUbergraph_HUD_OptionalHudElement
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_OptionalHudElement_C::ExecuteUbergraph_HUD_OptionalHudElement(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_OptionalHudElement.HUD_OptionalHudElement_C.ExecuteUbergraph_HUD_OptionalHudElement");

	UHUD_OptionalHudElement_C_ExecuteUbergraph_HUD_OptionalHudElement_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
