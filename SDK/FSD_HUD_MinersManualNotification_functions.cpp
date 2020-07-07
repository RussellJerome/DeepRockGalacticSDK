// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_MinersManualNotification_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_MinersManualNotification.HUD_MinersManualNotification_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_MinersManualNotification_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_MinersManualNotification.HUD_MinersManualNotification_C.PreConstruct");

	UHUD_MinersManualNotification_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_MinersManualNotification.HUD_MinersManualNotification_C.Show
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// float*                         TimeOnScreen                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_MinersManualNotification_C::Show(struct FText* Text, float* TimeOnScreen)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_MinersManualNotification.HUD_MinersManualNotification_C.Show");

	UHUD_MinersManualNotification_C_Show_Params params;
	params.Text = Text;
	params.TimeOnScreen = TimeOnScreen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_MinersManualNotification.HUD_MinersManualNotification_C.OnFinished
// (BlueprintCallable, BlueprintEvent)

void UHUD_MinersManualNotification_C::OnFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_MinersManualNotification.HUD_MinersManualNotification_C.OnFinished");

	UHUD_MinersManualNotification_C_OnFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_MinersManualNotification.HUD_MinersManualNotification_C.ExecuteUbergraph_HUD_MinersManualNotification
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_MinersManualNotification_C::ExecuteUbergraph_HUD_MinersManualNotification(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_MinersManualNotification.HUD_MinersManualNotification_C.ExecuteUbergraph_HUD_MinersManualNotification");

	UHUD_MinersManualNotification_C_ExecuteUbergraph_HUD_MinersManualNotification_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
