// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_Itembar_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_Itembar.HUD_Itembar_C.OnItemAdded
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UItemsBarIcon**          ItemIcon                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHUD_Itembar_C::OnItemAdded(class UItemsBarIcon** ItemIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Itembar.HUD_Itembar_C.OnItemAdded");

	UHUD_Itembar_C_OnItemAdded_Params params;
	params.ItemIcon = ItemIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Itembar.HUD_Itembar_C.OnClear
// (Event, Protected, BlueprintEvent)

void UHUD_Itembar_C::OnClear()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Itembar.HUD_Itembar_C.OnClear");

	UHUD_Itembar_C_OnClear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Itembar.HUD_Itembar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_Itembar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Itembar.HUD_Itembar_C.Construct");

	UHUD_Itembar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Itembar.HUD_Itembar_C.OnItemEquipped
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UItemsBarIcon**          ItemIcon                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHUD_Itembar_C::OnItemEquipped(class UItemsBarIcon** ItemIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Itembar.HUD_Itembar_C.OnItemEquipped");

	UHUD_Itembar_C_OnItemEquipped_Params params;
	params.ItemIcon = ItemIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Itembar.HUD_Itembar_C.Show
// (BlueprintCallable, BlueprintEvent)

void UHUD_Itembar_C::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Itembar.HUD_Itembar_C.Show");

	UHUD_Itembar_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Itembar.HUD_Itembar_C.OnInputSourceChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EInputSource*                  InputSource                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Itembar_C::OnInputSourceChanged(EInputSource* InputSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Itembar.HUD_Itembar_C.OnInputSourceChanged");

	UHUD_Itembar_C_OnInputSourceChanged_Params params;
	params.InputSource = InputSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Itembar.HUD_Itembar_C.OnItemClicked
// (Event, Protected, BlueprintEvent)

void UHUD_Itembar_C::OnItemClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Itembar.HUD_Itembar_C.OnItemClicked");

	UHUD_Itembar_C_OnItemClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Itembar.HUD_Itembar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Itembar_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Itembar.HUD_Itembar_C.PreConstruct");

	UHUD_Itembar_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Itembar.HUD_Itembar_C.FadeOutFinished
// (BlueprintCallable, BlueprintEvent)

void UHUD_Itembar_C::FadeOutFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Itembar.HUD_Itembar_C.FadeOutFinished");

	UHUD_Itembar_C_FadeOutFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Itembar.HUD_Itembar_C.ExecuteUbergraph_HUD_Itembar
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Itembar_C::ExecuteUbergraph_HUD_Itembar(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Itembar.HUD_Itembar_C.ExecuteUbergraph_HUD_Itembar");

	UHUD_Itembar_C_ExecuteUbergraph_HUD_Itembar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
