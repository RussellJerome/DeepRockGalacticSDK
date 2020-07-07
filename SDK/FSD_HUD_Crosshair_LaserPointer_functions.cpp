// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_Crosshair_LaserPointer_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_Crosshair_LaserPointer.HUD_Crosshair_LaserPointer_C.SetDotVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Crosshair_LaserPointer_C::SetDotVisible(bool* IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Crosshair_LaserPointer.HUD_Crosshair_LaserPointer_C.SetDotVisible");

	UHUD_Crosshair_LaserPointer_C_SetDotVisible_Params params;
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Crosshair_LaserPointer.HUD_Crosshair_LaserPointer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_Crosshair_LaserPointer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Crosshair_LaserPointer.HUD_Crosshair_LaserPointer_C.Construct");

	UHUD_Crosshair_LaserPointer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Crosshair_LaserPointer.HUD_Crosshair_LaserPointer_C.ExecuteUbergraph_HUD_Crosshair_LaserPointer
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Crosshair_LaserPointer_C::ExecuteUbergraph_HUD_Crosshair_LaserPointer(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Crosshair_LaserPointer.HUD_Crosshair_LaserPointer_C.ExecuteUbergraph_HUD_Crosshair_LaserPointer");

	UHUD_Crosshair_LaserPointer_C_ExecuteUbergraph_HUD_Crosshair_LaserPointer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
