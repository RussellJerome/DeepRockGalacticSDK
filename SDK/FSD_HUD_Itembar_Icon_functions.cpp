// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_Itembar_Icon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_Itembar_Icon.HUD_Itembar_Icon_C.SetSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Itembar_Icon_C::SetSelected(bool* IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Itembar_Icon.HUD_Itembar_Icon_C.SetSelected");

	UHUD_Itembar_Icon_C_SetSelected_Params params;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Itembar_Icon.HUD_Itembar_Icon_C.OnUnselect
// (Event, Protected, BlueprintEvent)

void UHUD_Itembar_Icon_C::OnUnselect()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Itembar_Icon.HUD_Itembar_Icon_C.OnUnselect");

	UHUD_Itembar_Icon_C_OnUnselect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Itembar_Icon.HUD_Itembar_Icon_C.OnSelect
// (Event, Protected, BlueprintEvent)

void UHUD_Itembar_Icon_C::OnSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Itembar_Icon.HUD_Itembar_Icon_C.OnSelect");

	UHUD_Itembar_Icon_C_OnSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Itembar_Icon.HUD_Itembar_Icon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Itembar_Icon_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Itembar_Icon.HUD_Itembar_Icon_C.PreConstruct");

	UHUD_Itembar_Icon_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Itembar_Icon.HUD_Itembar_Icon_C.OnInit
// (Event, Protected, BlueprintEvent)

void UHUD_Itembar_Icon_C::OnInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Itembar_Icon.HUD_Itembar_Icon_C.OnInit");

	UHUD_Itembar_Icon_C_OnInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Itembar_Icon.HUD_Itembar_Icon_C.ExecuteUbergraph_HUD_Itembar_Icon
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Itembar_Icon_C::ExecuteUbergraph_HUD_Itembar_Icon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Itembar_Icon.HUD_Itembar_Icon_C.ExecuteUbergraph_HUD_Itembar_Icon");

	UHUD_Itembar_Icon_C_ExecuteUbergraph_HUD_Itembar_Icon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
