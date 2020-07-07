// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_PlayerPerks_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_PlayerPerks.HUD_PlayerPerks_C.SetCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       InPlayerCharacter              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_PlayerPerks_C::SetCharacter(class APlayerCharacter** InPlayerCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerPerks.HUD_PlayerPerks_C.SetCharacter");

	UHUD_PlayerPerks_C_SetCharacter_Params params;
	params.InPlayerCharacter = InPlayerCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_PlayerPerks.HUD_PlayerPerks_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_PlayerPerks_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerPerks.HUD_PlayerPerks_C.Construct");

	UHUD_PlayerPerks_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_PlayerPerks.HUD_PlayerPerks_C.ExecuteUbergraph_HUD_PlayerPerks
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_PlayerPerks_C::ExecuteUbergraph_HUD_PlayerPerks(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerPerks.HUD_PlayerPerks_C.ExecuteUbergraph_HUD_PlayerPerks");

	UHUD_PlayerPerks_C_ExecuteUbergraph_HUD_PlayerPerks_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
