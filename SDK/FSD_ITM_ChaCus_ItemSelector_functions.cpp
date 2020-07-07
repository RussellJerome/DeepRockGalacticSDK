// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_ChaCus_ItemSelector_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_ChaCus_ItemSelector.ITM_ChaCus_ItemSelector_C.ItemUnhovered
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_ChaCus_ItemSelector_C::ItemUnhovered(int* Index, class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSelector.ITM_ChaCus_ItemSelector_C.ItemUnhovered");

	UITM_ChaCus_ItemSelector_C_ItemUnhovered_Params params;
	params.Index = Index;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSelector.ITM_ChaCus_ItemSelector_C.ItemHovered
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_ChaCus_ItemSelector_C::ItemHovered(int* Index, class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSelector.ITM_ChaCus_ItemSelector_C.ItemHovered");

	UITM_ChaCus_ItemSelector_C_ItemHovered_Params params;
	params.Index = Index;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSelector.ITM_ChaCus_ItemSelector_C.SetAnimOpenProgress
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         InProgress                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_ItemSelector_C::SetAnimOpenProgress(float* InProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSelector.ITM_ChaCus_ItemSelector_C.SetAnimOpenProgress");

	UITM_ChaCus_ItemSelector_C_SetAnimOpenProgress_Params params;
	params.InProgress = InProgress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSelector.ITM_ChaCus_ItemSelector_C.ItemClicked
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_ChaCus_ItemSelector_C::ItemClicked(int* Index, class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSelector.ITM_ChaCus_ItemSelector_C.ItemClicked");

	UITM_ChaCus_ItemSelector_C_ItemClicked_Params params;
	params.Index = Index;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSelector.ITM_ChaCus_ItemSelector_C.SetOpen
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          InOpen                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_ItemSelector_C::SetOpen(bool* InOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSelector.ITM_ChaCus_ItemSelector_C.SetOpen");

	UITM_ChaCus_ItemSelector_C_SetOpen_Params params;
	params.InOpen = InOpen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSelector.ITM_ChaCus_ItemSelector_C.PadRowWithBlanks
// (Public, BlueprintCallable, BlueprintEvent)

void UITM_ChaCus_ItemSelector_C::PadRowWithBlanks()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSelector.ITM_ChaCus_ItemSelector_C.PadRowWithBlanks");

	UITM_ChaCus_ItemSelector_C_PadRowWithBlanks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSelector.ITM_ChaCus_ItemSelector_C.ShowSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_ChaCus_ItemSlot_Base_C** InSlot                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_ChaCus_ItemSelector_C::ShowSlot(class UITM_ChaCus_ItemSlot_Base_C** InSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSelector.ITM_ChaCus_ItemSelector_C.ShowSlot");

	UITM_ChaCus_ItemSelector_C_ShowSlot_Params params;
	params.InSlot = InSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSelector.ITM_ChaCus_ItemSelector_C.ClearItems
// (Private, BlueprintCallable, BlueprintEvent)

void UITM_ChaCus_ItemSelector_C::ClearItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSelector.ITM_ChaCus_ItemSelector_C.ClearItems");

	UITM_ChaCus_ItemSelector_C_ClearItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSelector.ITM_ChaCus_ItemSelector_C.AddItem
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                InChildWidget                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          InSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsNewItem                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UITM_ChaCus_ItemSelector_Entry_C* OutEntry                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWidget*                 OutItemWidget                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_ChaCus_ItemSelector_C::AddItem(class UWidget** InChildWidget, bool* InSelected, bool* IsNewItem, class UITM_ChaCus_ItemSelector_Entry_C** OutEntry, class UWidget** OutItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSelector.ITM_ChaCus_ItemSelector_C.AddItem");

	UITM_ChaCus_ItemSelector_C_AddItem_Params params;
	params.InChildWidget = InChildWidget;
	params.InSelected = InSelected;
	params.IsNewItem = IsNewItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutEntry != nullptr)
		*OutEntry = params.OutEntry;
	if (OutItemWidget != nullptr)
		*OutItemWidget = params.OutItemWidget;
}


// Function ITM_ChaCus_ItemSelector.ITM_ChaCus_ItemSelector_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_ItemSelector_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSelector.ITM_ChaCus_ItemSelector_C.PreConstruct");

	UITM_ChaCus_ItemSelector_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSelector.ITM_ChaCus_ItemSelector_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_ChaCus_ItemSelector_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSelector.ITM_ChaCus_ItemSelector_C.Construct");

	UITM_ChaCus_ItemSelector_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSelector.ITM_ChaCus_ItemSelector_C.OnAnimOpenStarted
// (BlueprintCallable, BlueprintEvent)

void UITM_ChaCus_ItemSelector_C::OnAnimOpenStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSelector.ITM_ChaCus_ItemSelector_C.OnAnimOpenStarted");

	UITM_ChaCus_ItemSelector_C_OnAnimOpenStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSelector.ITM_ChaCus_ItemSelector_C.OnAnimOpenFinished
// (BlueprintCallable, BlueprintEvent)

void UITM_ChaCus_ItemSelector_C::OnAnimOpenFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSelector.ITM_ChaCus_ItemSelector_C.OnAnimOpenFinished");

	UITM_ChaCus_ItemSelector_C_OnAnimOpenFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSelector.ITM_ChaCus_ItemSelector_C.OnOtherSelectorOpen
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsOpen                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_ItemSelector_C::OnOtherSelectorOpen(bool* IsOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSelector.ITM_ChaCus_ItemSelector_C.OnOtherSelectorOpen");

	UITM_ChaCus_ItemSelector_C_OnOtherSelectorOpen_Params params;
	params.IsOpen = IsOpen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSelector.ITM_ChaCus_ItemSelector_C.ExecuteUbergraph_ITM_ChaCus_ItemSelector
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_ItemSelector_C::ExecuteUbergraph_ITM_ChaCus_ItemSelector(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSelector.ITM_ChaCus_ItemSelector_C.ExecuteUbergraph_ITM_ChaCus_ItemSelector");

	UITM_ChaCus_ItemSelector_C_ExecuteUbergraph_ITM_ChaCus_ItemSelector_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSelector.ITM_ChaCus_ItemSelector_C.OnSelectorOpenChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsOpen                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_ItemSelector_C::OnSelectorOpenChanged__DelegateSignature(bool* IsOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSelector.ITM_ChaCus_ItemSelector_C.OnSelectorOpenChanged__DelegateSignature");

	UITM_ChaCus_ItemSelector_C_OnSelectorOpenChanged__DelegateSignature_Params params;
	params.IsOpen = IsOpen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSelector.ITM_ChaCus_ItemSelector_C.OnItemClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_ChaCus_ItemSelector_C::OnItemClicked__DelegateSignature(int* Index, class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSelector.ITM_ChaCus_ItemSelector_C.OnItemClicked__DelegateSignature");

	UITM_ChaCus_ItemSelector_C_OnItemClicked__DelegateSignature_Params params;
	params.Index = Index;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
