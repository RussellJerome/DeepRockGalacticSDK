// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_StatusScreen_PerkItem_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.Get_ItemButton_ToolTipWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UITM_StatusScreen_PerkItem_C::Get_ItemButton_ToolTipWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.Get_ItemButton_ToolTipWidget");

	UITM_StatusScreen_PerkItem_C_Get_ItemButton_ToolTipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.GetPerkAsset
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UPerkAsset*              PerkAsset                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_StatusScreen_PerkItem_C::GetPerkAsset(class UPerkAsset** PerkAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.GetPerkAsset");

	UITM_StatusScreen_PerkItem_C_GetPerkAsset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PerkAsset != nullptr)
		*PerkAsset = params.PerkAsset;
}


// Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.Set Perk
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPerkAsset**             PerkAsset                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_StatusScreen_PerkItem_C::Set_Perk(class UPerkAsset** PerkAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.Set Perk");

	UITM_StatusScreen_PerkItem_C_Set_Perk_Params params;
	params.PerkAsset = PerkAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.Set Selected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_StatusScreen_PerkItem_C::Set_Selected(bool* IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.Set Selected");

	UITM_StatusScreen_PerkItem_C_Set_Selected_Params params;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UITM_StatusScreen_PerkItem_C::BndEvt__ItemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UITM_StatusScreen_PerkItem_C_BndEvt__ItemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UITM_StatusScreen_PerkItem_C::BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UITM_StatusScreen_PerkItem_C_BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UITM_StatusScreen_PerkItem_C::BndEvt__ItemButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UITM_StatusScreen_PerkItem_C_BndEvt__ItemButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.Refresh
// (BlueprintCallable, BlueprintEvent)

void UITM_StatusScreen_PerkItem_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.Refresh");

	UITM_StatusScreen_PerkItem_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_StatusScreen_PerkItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.Construct");

	UITM_StatusScreen_PerkItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_StatusScreen_PerkItem_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.PreConstruct");

	UITM_StatusScreen_PerkItem_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.ExecuteUbergraph_ITM_StatusScreen_PerkItem
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_StatusScreen_PerkItem_C::ExecuteUbergraph_ITM_StatusScreen_PerkItem(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.ExecuteUbergraph_ITM_StatusScreen_PerkItem");

	UITM_StatusScreen_PerkItem_C_ExecuteUbergraph_ITM_StatusScreen_PerkItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_StatusScreen_PerkItem_C** Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_StatusScreen_PerkItem_C::OnClicked__DelegateSignature(class UITM_StatusScreen_PerkItem_C** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.OnClicked__DelegateSignature");

	UITM_StatusScreen_PerkItem_C_OnClicked__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
