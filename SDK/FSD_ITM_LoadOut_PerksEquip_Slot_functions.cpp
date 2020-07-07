// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_LoadOut_PerksEquip_Slot_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.GetPerkToolTip
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UITM_LoadOut_PerksEquip_Slot_C::GetPerkToolTip()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.GetPerkToolTip");

	UITM_LoadOut_PerksEquip_Slot_C_GetPerkToolTip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.GetIsSelected
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsSelected                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_LoadOut_PerksEquip_Slot_C::GetIsSelected(bool* IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.GetIsSelected");

	UITM_LoadOut_PerksEquip_Slot_C_GetIsSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSelected != nullptr)
		*IsSelected = params.IsSelected;
}


// Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.UpdateSelectionBorder
// (Private, BlueprintCallable, BlueprintEvent)

void UITM_LoadOut_PerksEquip_Slot_C::UpdateSelectionBorder()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.UpdateSelectionBorder");

	UITM_LoadOut_PerksEquip_Slot_C_UpdateSelectionBorder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.SetSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          InSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_LoadOut_PerksEquip_Slot_C::SetSelected(bool* InSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.SetSelected");

	UITM_LoadOut_PerksEquip_Slot_C_SetSelected_Params params;
	params.InSelected = InSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.SetHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Hovered                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_LoadOut_PerksEquip_Slot_C::SetHovered(bool* Hovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.SetHovered");

	UITM_LoadOut_PerksEquip_Slot_C_SetHovered_Params params;
	params.Hovered = Hovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.GetIsLocked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsLocked                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_LoadOut_PerksEquip_Slot_C::GetIsLocked(bool* IsLocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.GetIsLocked");

	UITM_LoadOut_PerksEquip_Slot_C_GetIsLocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsLocked != nullptr)
		*IsLocked = params.IsLocked;
}


// Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.GetSlotType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EPerkUsageType                 SlotType                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_LoadOut_PerksEquip_Slot_C::GetSlotType(EPerkUsageType* SlotType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.GetSlotType");

	UITM_LoadOut_PerksEquip_Slot_C_GetSlotType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SlotType != nullptr)
		*SlotType = params.SlotType;
}


// Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.GetPerkAsset
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPerkAsset*              PerkAsset                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_LoadOut_PerksEquip_Slot_C::GetPerkAsset(class UPerkAsset** PerkAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.GetPerkAsset");

	UITM_LoadOut_PerksEquip_Slot_C_GetPerkAsset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PerkAsset != nullptr)
		*PerkAsset = params.PerkAsset;
}


// Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.SetPerkAsset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPerkAsset**             PerkAsset                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_LoadOut_PerksEquip_Slot_C::SetPerkAsset(class UPerkAsset** PerkAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.SetPerkAsset");

	UITM_LoadOut_PerksEquip_Slot_C_SetPerkAsset_Params params;
	params.PerkAsset = PerkAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.SetLocked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsLocked                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_LoadOut_PerksEquip_Slot_C::SetLocked(bool* IsLocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.SetLocked");

	UITM_LoadOut_PerksEquip_Slot_C_SetLocked_Params params;
	params.IsLocked = IsLocked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.SetLockedIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D**             InTexture                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_LoadOut_PerksEquip_Slot_C::SetLockedIcon(class UTexture2D** InTexture)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.SetLockedIcon");

	UITM_LoadOut_PerksEquip_Slot_C_SetLockedIcon_Params params;
	params.InTexture = InTexture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.UpdateIconAndBackground
// (Private, BlueprintCallable, BlueprintEvent)

void UITM_LoadOut_PerksEquip_Slot_C::UpdateIconAndBackground()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.UpdateIconAndBackground");

	UITM_LoadOut_PerksEquip_Slot_C_UpdateIconAndBackground_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_LoadOut_PerksEquip_Slot_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.PreConstruct");

	UITM_LoadOut_PerksEquip_Slot_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UITM_LoadOut_PerksEquip_Slot_C::BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UITM_LoadOut_PerksEquip_Slot_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.BndEvt__SlotButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UITM_LoadOut_PerksEquip_Slot_C::BndEvt__SlotButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.BndEvt__SlotButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UITM_LoadOut_PerksEquip_Slot_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.BndEvt__SlotButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UITM_LoadOut_PerksEquip_Slot_C::BndEvt__SlotButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.BndEvt__SlotButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UITM_LoadOut_PerksEquip_Slot_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.ExecuteUbergraph_ITM_LoadOut_PerksEquip_Slot
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_LoadOut_PerksEquip_Slot_C::ExecuteUbergraph_ITM_LoadOut_PerksEquip_Slot(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.ExecuteUbergraph_ITM_LoadOut_PerksEquip_Slot");

	UITM_LoadOut_PerksEquip_Slot_C_ExecuteUbergraph_ITM_LoadOut_PerksEquip_Slot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_LoadOut_PerksEquip_Slot_C** SlotWidget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_LoadOut_PerksEquip_Slot_C::OnClicked__DelegateSignature(class UITM_LoadOut_PerksEquip_Slot_C** SlotWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.OnClicked__DelegateSignature");

	UITM_LoadOut_PerksEquip_Slot_C_OnClicked__DelegateSignature_Params params;
	params.SlotWidget = SlotWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
