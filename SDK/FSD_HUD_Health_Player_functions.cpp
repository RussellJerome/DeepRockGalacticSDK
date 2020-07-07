// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_Health_Player_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_Health_Player.HUD_Health_Player_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_Health_Player_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Health_Player.HUD_Health_Player_C.Construct");

	UHUD_Health_Player_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Health_Player.HUD_Health_Player_C.ExecuteUbergraph_HUD_Health_Player
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Health_Player_C::ExecuteUbergraph_HUD_Health_Player(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Health_Player.HUD_Health_Player_C.ExecuteUbergraph_HUD_Health_Player");

	UHUD_Health_Player_C_ExecuteUbergraph_HUD_Health_Player_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
