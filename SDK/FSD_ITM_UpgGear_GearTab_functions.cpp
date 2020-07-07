// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_UpgGear_GearTab_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.UpdateNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsItemUnlocked                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_UpgGear_GearTab_C::UpdateNotification(bool* IsItemUnlocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.UpdateNotification");

	UITM_UpgGear_GearTab_C_UpdateNotification_Params params;
	params.IsItemUnlocked = IsItemUnlocked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.GetItemClass
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  itemClass                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_UpgGear_GearTab_C::GetItemClass(class UClass** itemClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.GetItemClass");

	UITM_UpgGear_GearTab_C_GetItemClass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (itemClass != nullptr)
		*itemClass = params.itemClass;
}


// Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.IsItemClass
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass**                 InItemClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UITM_UpgGear_GearTab_C::IsItemClass(class UClass** InItemClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.IsItemClass");

	UITM_UpgGear_GearTab_C_IsItemClass_Params params;
	params.InItemClass = InItemClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.Refresh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UITM_UpgGear_GearTab_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.Refresh");

	UITM_UpgGear_GearTab_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.SetHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          InItemHovered                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_UpgGear_GearTab_C::SetHovered(bool* InItemHovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.SetHovered");

	UITM_UpgGear_GearTab_C_SetHovered_Params params;
	params.InItemHovered = InItemHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_UpgGear_GearTab_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.Construct");

	UITM_UpgGear_GearTab_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UITM_UpgGear_GearTab_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UITM_UpgGear_GearTab_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UITM_UpgGear_GearTab_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature");

	UITM_UpgGear_GearTab_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UITM_UpgGear_GearTab_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UITM_UpgGear_GearTab_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.SetSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          ItemSelected                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_UpgGear_GearTab_C::SetSelected(bool* ItemSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.SetSelected");

	UITM_UpgGear_GearTab_C_SetSelected_Params params;
	params.ItemSelected = ItemSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_UpgGear_GearTab_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.PreConstruct");

	UITM_UpgGear_GearTab_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.OnItemChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 NewItemClass                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_UpgGear_GearTab_C::OnItemChanged_Event(class UClass** NewItemClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.OnItemChanged_Event");

	UITM_UpgGear_GearTab_C_OnItemChanged_Event_Params params;
	params.NewItemClass = NewItemClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.OnItemUINotificationChange
// (BlueprintCallable, BlueprintEvent)

void UITM_UpgGear_GearTab_C::OnItemUINotificationChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.OnItemUINotificationChange");

	UITM_UpgGear_GearTab_C_OnItemUINotificationChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_UpgGear_GearTab_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.Destruct");

	UITM_UpgGear_GearTab_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.ExecuteUbergraph_ITM_UpgGear_GearTab
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_UpgGear_GearTab_C::ExecuteUbergraph_ITM_UpgGear_GearTab(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.ExecuteUbergraph_ITM_UpgGear_GearTab");

	UITM_UpgGear_GearTab_C_ExecuteUbergraph_ITM_UpgGear_GearTab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.OnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_UpgGear_GearTab_C** Tab                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_UpgGear_GearTab_C::OnUnhovered__DelegateSignature(class UITM_UpgGear_GearTab_C** Tab)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.OnUnhovered__DelegateSignature");

	UITM_UpgGear_GearTab_C_OnUnhovered__DelegateSignature_Params params;
	params.Tab = Tab;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_UpgGear_GearTab_C** Tab                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_UpgGear_GearTab_C::OnHovered__DelegateSignature(class UITM_UpgGear_GearTab_C** Tab)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.OnHovered__DelegateSignature");

	UITM_UpgGear_GearTab_C_OnHovered__DelegateSignature_Params params;
	params.Tab = Tab;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_UpgGear_GearTab_C** Tab                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_UpgGear_GearTab_C::OnClicked__DelegateSignature(class UITM_UpgGear_GearTab_C** Tab)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.OnClicked__DelegateSignature");

	UITM_UpgGear_GearTab_C_OnClicked__DelegateSignature_Params params;
	params.Tab = Tab;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
