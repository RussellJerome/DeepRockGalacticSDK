// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_GrenadeIcon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_GrenadeIcon.HUD_GrenadeIcon_C.SetOn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_GrenadeIcon_C::SetOn(bool* Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_GrenadeIcon.HUD_GrenadeIcon_C.SetOn");

	UHUD_GrenadeIcon_C_SetOn_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_GrenadeIcon.HUD_GrenadeIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_GrenadeIcon_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_GrenadeIcon.HUD_GrenadeIcon_C.PreConstruct");

	UHUD_GrenadeIcon_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_GrenadeIcon.HUD_GrenadeIcon_C.ExecuteUbergraph_HUD_GrenadeIcon
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_GrenadeIcon_C::ExecuteUbergraph_HUD_GrenadeIcon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_GrenadeIcon.HUD_GrenadeIcon_C.ExecuteUbergraph_HUD_GrenadeIcon");

	UHUD_GrenadeIcon_C_ExecuteUbergraph_HUD_GrenadeIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
