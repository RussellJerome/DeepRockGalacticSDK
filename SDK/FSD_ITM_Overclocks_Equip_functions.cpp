// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_Overclocks_Equip_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.TryToggleSelection
// (Public, BlueprintCallable, BlueprintEvent)

void UITM_Overclocks_Equip_C::TryToggleSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.TryToggleSelection");

	UITM_Overclocks_Equip_C_TryToggleSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnRefreshItem
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          WasCreated                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget**            Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           ActiveIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Overclocks_Equip_C::OnRefreshItem(bool* WasCreated, class UUserWidget** Widget, int* ActiveIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnRefreshItem");

	UITM_Overclocks_Equip_C_OnRefreshItem_Params params;
	params.WasCreated = WasCreated;
	params.Widget = Widget;
	params.ActiveIndex = ActiveIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.SetMenuLocked
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          InLocked                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          InRequirementMet               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          OverclockEquipped              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Overclocks_Equip_C::SetMenuLocked(bool* InLocked, bool* InRequirementMet, bool* OverclockEquipped)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.SetMenuLocked");

	UITM_Overclocks_Equip_C_SetMenuLocked_Params params;
	params.InLocked = InLocked;
	params.InRequirementMet = InRequirementMet;
	params.OverclockEquipped = OverclockEquipped;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.SetMenuActive
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Inactive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ActiveChanged                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_Overclocks_Equip_C::SetMenuActive(bool* Inactive, bool* ActiveChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.SetMenuActive");

	UITM_Overclocks_Equip_C_SetMenuActive_Params params;
	params.Inactive = Inactive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActiveChanged != nullptr)
		*ActiveChanged = params.ActiveChanged;
}


// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.ShowOverclock
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemUpgrade**           Overclock                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Overclocks_Equip_C::ShowOverclock(class UItemUpgrade** Overclock)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.ShowOverclock");

	UITM_Overclocks_Equip_C_ShowOverclock_Params params;
	params.Overclock = Overclock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.SetSelectionVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          inVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Overclocks_Equip_C::SetSelectionVisible(bool* inVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.SetSelectionVisible");

	UITM_Overclocks_Equip_C_SetSelectionVisible_Params params;
	params.inVisible = inVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnItemUnhovered
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_Overclocks_Equip_Item_C** Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_Overclocks_Equip_C::OnItemUnhovered(class UITM_Overclocks_Equip_Item_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnItemUnhovered");

	UITM_Overclocks_Equip_C_OnItemUnhovered_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnItemHovered
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_Overclocks_Equip_Item_C** Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_Overclocks_Equip_C::OnItemHovered(class UITM_Overclocks_Equip_Item_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnItemHovered");

	UITM_Overclocks_Equip_C_OnItemHovered_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnItemClicked
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_Overclocks_Equip_Item_C** Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_Overclocks_Equip_C::OnItemClicked(class UITM_Overclocks_Equip_Item_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnItemClicked");

	UITM_Overclocks_Equip_C_OnItemClicked_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void UITM_Overclocks_Equip_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.Refresh");

	UITM_Overclocks_Equip_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.SetData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 InCharacterClass               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 InItemClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Overclocks_Equip_C::SetData(class UClass** InCharacterClass, class UClass** InItemClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.SetData");

	UITM_Overclocks_Equip_C_SetData_Params params;
	params.InCharacterClass = InCharacterClass;
	params.InItemClass = InItemClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.SetBackgroundTint
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Tint                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Overclocks_Equip_C::SetBackgroundTint(struct FLinearColor* Tint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.SetBackgroundTint");

	UITM_Overclocks_Equip_C_SetBackgroundTint_Params params;
	params.Tint = Tint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.BndEvt__EquipButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UITM_Overclocks_Equip_C::BndEvt__EquipButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.BndEvt__EquipButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UITM_Overclocks_Equip_C_BndEvt__EquipButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.BndEvt__EquipButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UITM_Overclocks_Equip_C::BndEvt__EquipButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.BndEvt__EquipButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UITM_Overclocks_Equip_C_BndEvt__EquipButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.BndEvt__EquipButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UITM_Overclocks_Equip_C::BndEvt__EquipButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.BndEvt__EquipButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UITM_Overclocks_Equip_C_BndEvt__EquipButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnPopUpFinished
// (BlueprintCallable, BlueprintEvent)

void UITM_Overclocks_Equip_C::OnPopUpFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnPopUpFinished");

	UITM_Overclocks_Equip_C_OnPopUpFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnPopupStarted
// (BlueprintCallable, BlueprintEvent)

void UITM_Overclocks_Equip_C::OnPopupStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnPopupStarted");

	UITM_Overclocks_Equip_C_OnPopupStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnItemUpgradeCrafted_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemUpgrade**           Upgrade                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Overclocks_Equip_C::OnItemUpgradeCrafted_Event(class UItemUpgrade** Upgrade)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnItemUpgradeCrafted_Event");

	UITM_Overclocks_Equip_C_OnItemUpgradeCrafted_Event_Params params;
	params.Upgrade = Upgrade;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UITM_Overclocks_Equip_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnMouseLeave");

	UITM_Overclocks_Equip_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UITM_Overclocks_Equip_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnMouseEnter");

	UITM_Overclocks_Equip_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_Overclocks_Equip_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.Construct");

	UITM_Overclocks_Equip_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Overclocks_Equip_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.PreConstruct");

	UITM_Overclocks_Equip_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.ExecuteUbergraph_ITM_Overclocks_Equip
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Overclocks_Equip_C::ExecuteUbergraph_ITM_Overclocks_Equip(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.ExecuteUbergraph_ITM_Overclocks_Equip");

	UITM_Overclocks_Equip_C_ExecuteUbergraph_ITM_Overclocks_Equip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
