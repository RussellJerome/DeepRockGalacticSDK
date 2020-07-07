// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_ChaCus_ItemSelector_Entry_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_ChaCus_ItemSelector_Entry.ITM_ChaCus_ItemSelector_Entry_C.SetHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          InHovered                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_ItemSelector_Entry_C::SetHovered(bool* InHovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSelector_Entry.ITM_ChaCus_ItemSelector_Entry_C.SetHovered");

	UITM_ChaCus_ItemSelector_Entry_C_SetHovered_Params params;
	params.InHovered = InHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSelector_Entry.ITM_ChaCus_ItemSelector_Entry_C.SetSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          InSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_ItemSelector_Entry_C::SetSelected(bool* InSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSelector_Entry.ITM_ChaCus_ItemSelector_Entry_C.SetSelected");

	UITM_ChaCus_ItemSelector_Entry_C_SetSelected_Params params;
	params.InSelected = InSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSelector_Entry.ITM_ChaCus_ItemSelector_Entry_C.SetIsNewItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsNew                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_ItemSelector_Entry_C::SetIsNewItem(bool* IsNew)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSelector_Entry.ITM_ChaCus_ItemSelector_Entry_C.SetIsNewItem");

	UITM_ChaCus_ItemSelector_Entry_C_SetIsNewItem_Params params;
	params.IsNew = IsNew;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSelector_Entry.ITM_ChaCus_ItemSelector_Entry_C.UpdateBorder
// (Private, BlueprintCallable, BlueprintEvent)

void UITM_ChaCus_ItemSelector_Entry_C::UpdateBorder()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSelector_Entry.ITM_ChaCus_ItemSelector_Entry_C.UpdateBorder");

	UITM_ChaCus_ItemSelector_Entry_C_UpdateBorder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSelector_Entry.ITM_ChaCus_ItemSelector_Entry_C.CreateChild
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UClass>*  InChildClass                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWidget*                 OutChild                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_ChaCus_ItemSelector_Entry_C::CreateChild(TSoftObjectPtr<class UClass>* InChildClass, class UWidget** OutChild)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSelector_Entry.ITM_ChaCus_ItemSelector_Entry_C.CreateChild");

	UITM_ChaCus_ItemSelector_Entry_C_CreateChild_Params params;
	params.InChildClass = InChildClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutChild != nullptr)
		*OutChild = params.OutChild;
}


// Function ITM_ChaCus_ItemSelector_Entry.ITM_ChaCus_ItemSelector_Entry_C.SetChild
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                InWidget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_ChaCus_ItemSelector_Entry_C::SetChild(class UWidget** InWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSelector_Entry.ITM_ChaCus_ItemSelector_Entry_C.SetChild");

	UITM_ChaCus_ItemSelector_Entry_C_SetChild_Params params;
	params.InWidget = InWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSelector_Entry.ITM_ChaCus_ItemSelector_Entry_C.BndEvt__EntryButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UITM_ChaCus_ItemSelector_Entry_C::BndEvt__EntryButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSelector_Entry.ITM_ChaCus_ItemSelector_Entry_C.BndEvt__EntryButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UITM_ChaCus_ItemSelector_Entry_C_BndEvt__EntryButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSelector_Entry.ITM_ChaCus_ItemSelector_Entry_C.BndEvt__EntryButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UITM_ChaCus_ItemSelector_Entry_C::BndEvt__EntryButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSelector_Entry.ITM_ChaCus_ItemSelector_Entry_C.BndEvt__EntryButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UITM_ChaCus_ItemSelector_Entry_C_BndEvt__EntryButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSelector_Entry.ITM_ChaCus_ItemSelector_Entry_C.BndEvt__EntryButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UITM_ChaCus_ItemSelector_Entry_C::BndEvt__EntryButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSelector_Entry.ITM_ChaCus_ItemSelector_Entry_C.BndEvt__EntryButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UITM_ChaCus_ItemSelector_Entry_C_BndEvt__EntryButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSelector_Entry.ITM_ChaCus_ItemSelector_Entry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_ItemSelector_Entry_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSelector_Entry.ITM_ChaCus_ItemSelector_Entry_C.PreConstruct");

	UITM_ChaCus_ItemSelector_Entry_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSelector_Entry.ITM_ChaCus_ItemSelector_Entry_C.ExecuteUbergraph_ITM_ChaCus_ItemSelector_Entry
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_ItemSelector_Entry_C::ExecuteUbergraph_ITM_ChaCus_ItemSelector_Entry(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSelector_Entry.ITM_ChaCus_ItemSelector_Entry_C.ExecuteUbergraph_ITM_ChaCus_ItemSelector_Entry");

	UITM_ChaCus_ItemSelector_Entry_C_ExecuteUbergraph_ITM_ChaCus_ItemSelector_Entry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSelector_Entry.ITM_ChaCus_ItemSelector_Entry_C.OnEntryClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_ChaCus_ItemSelector_Entry_C::OnEntryClicked__DelegateSignature(int* Index, class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSelector_Entry.ITM_ChaCus_ItemSelector_Entry_C.OnEntryClicked__DelegateSignature");

	UITM_ChaCus_ItemSelector_Entry_C_OnEntryClicked__DelegateSignature_Params params;
	params.Index = Index;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSelector_Entry.ITM_ChaCus_ItemSelector_Entry_C.OnEntryUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_ChaCus_ItemSelector_Entry_C::OnEntryUnhovered__DelegateSignature(int* Index, class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSelector_Entry.ITM_ChaCus_ItemSelector_Entry_C.OnEntryUnhovered__DelegateSignature");

	UITM_ChaCus_ItemSelector_Entry_C_OnEntryUnhovered__DelegateSignature_Params params;
	params.Index = Index;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSelector_Entry.ITM_ChaCus_ItemSelector_Entry_C.OnEntryHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_ChaCus_ItemSelector_Entry_C::OnEntryHovered__DelegateSignature(int* Index, class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSelector_Entry.ITM_ChaCus_ItemSelector_Entry_C.OnEntryHovered__DelegateSignature");

	UITM_ChaCus_ItemSelector_Entry_C_OnEntryHovered__DelegateSignature_Params params;
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
