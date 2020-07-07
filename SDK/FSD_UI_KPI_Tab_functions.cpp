// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_KPI_Tab_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_KPI_Tab.UI_KPI_Tab_C.HandleMouseEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          InMouseEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool*                          InUp                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OutHandled                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_KPI_Tab_C::HandleMouseEvent(struct FPointerEvent* InMouseEvent, bool* InUp, bool* OutHandled)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KPI_Tab.UI_KPI_Tab_C.HandleMouseEvent");

	UUI_KPI_Tab_C_HandleMouseEvent_Params params;
	params.InMouseEvent = InMouseEvent;
	params.InUp = InUp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutHandled != nullptr)
		*OutHandled = params.OutHandled;
}


// Function UI_KPI_Tab.UI_KPI_Tab_C.HandleKeyEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          InUp                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OutHandled                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_KPI_Tab_C::HandleKeyEvent(struct FKeyEvent* InKeyEvent, bool* InUp, bool* OutHandled)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KPI_Tab.UI_KPI_Tab_C.HandleKeyEvent");

	UUI_KPI_Tab_C_HandleKeyEvent_Params params;
	params.InKeyEvent = InKeyEvent;
	params.InUp = InUp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutHandled != nullptr)
		*OutHandled = params.OutHandled;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
