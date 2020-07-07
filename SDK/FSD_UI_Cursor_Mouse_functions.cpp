// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_Cursor_Mouse_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_Cursor_Mouse.UI_Cursor_Mouse_C.OnHover
// (Event, Protected, BlueprintEvent)

void UUI_Cursor_Mouse_C::OnHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Cursor_Mouse.UI_Cursor_Mouse_C.OnHover");

	UUI_Cursor_Mouse_C_OnHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Cursor_Mouse.UI_Cursor_Mouse_C.OnUnhover
// (Event, Protected, BlueprintEvent)

void UUI_Cursor_Mouse_C::OnUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Cursor_Mouse.UI_Cursor_Mouse_C.OnUnhover");

	UUI_Cursor_Mouse_C_OnUnhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Cursor_Mouse.UI_Cursor_Mouse_C.ExecuteUbergraph_UI_Cursor_Mouse
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Cursor_Mouse_C::ExecuteUbergraph_UI_Cursor_Mouse(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Cursor_Mouse.UI_Cursor_Mouse_C.ExecuteUbergraph_UI_Cursor_Mouse");

	UUI_Cursor_Mouse_C_ExecuteUbergraph_UI_Cursor_Mouse_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
