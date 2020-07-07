// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_Cursor_Controller_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_Cursor_Controller.UI_Cursor_Controller_C.OnHover
// (Event, Protected, BlueprintEvent)

void UUI_Cursor_Controller_C::OnHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Cursor_Controller.UI_Cursor_Controller_C.OnHover");

	UUI_Cursor_Controller_C_OnHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Cursor_Controller.UI_Cursor_Controller_C.OnUnhover
// (Event, Protected, BlueprintEvent)

void UUI_Cursor_Controller_C::OnUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Cursor_Controller.UI_Cursor_Controller_C.OnUnhover");

	UUI_Cursor_Controller_C_OnUnhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Cursor_Controller.UI_Cursor_Controller_C.ExecuteUbergraph_UI_Cursor_Controller
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Cursor_Controller_C::ExecuteUbergraph_UI_Cursor_Controller(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Cursor_Controller.UI_Cursor_Controller_C.ExecuteUbergraph_UI_Cursor_Controller");

	UUI_Cursor_Controller_C_ExecuteUbergraph_UI_Cursor_Controller_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
