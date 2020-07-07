// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_MapTool_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_MapTool.HUD_MapTool_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_MapTool_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_MapTool.HUD_MapTool_C.Construct");

	UHUD_MapTool_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_MapTool.HUD_MapTool_C.OnToggleMapTool
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_MapTool_C::OnToggleMapTool(bool* Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_MapTool.HUD_MapTool_C.OnToggleMapTool");

	UHUD_MapTool_C_OnToggleMapTool_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_MapTool.HUD_MapTool_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_MapTool_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_MapTool.HUD_MapTool_C.PreConstruct");

	UHUD_MapTool_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_MapTool.HUD_MapTool_C.OnMainTurnOnFinished
// (BlueprintCallable, BlueprintEvent)

void UHUD_MapTool_C::OnMainTurnOnFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_MapTool.HUD_MapTool_C.OnMainTurnOnFinished");

	UHUD_MapTool_C_OnMainTurnOnFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_MapTool.HUD_MapTool_C.ExecuteUbergraph_HUD_MapTool
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_MapTool_C::ExecuteUbergraph_HUD_MapTool(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_MapTool.HUD_MapTool_C.ExecuteUbergraph_HUD_MapTool");

	UHUD_MapTool_C_ExecuteUbergraph_HUD_MapTool_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
