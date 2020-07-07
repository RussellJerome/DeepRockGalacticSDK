// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_Loadout_ItemWindow_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.SetHideCounter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          HideCounter                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Loadout_ItemWindow_C::SetHideCounter(bool* HideCounter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.SetHideCounter");

	UITM_Loadout_ItemWindow_C_SetHideCounter_Params params;
	params.HideCounter = HideCounter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.GetNextItem
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  NextItem                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_Loadout_ItemWindow_C::GetNextItem(int* Direction, class UClass** NextItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.GetNextItem");

	UITM_Loadout_ItemWindow_C_GetNextItem_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NextItem != nullptr)
		*NextItem = params.NextItem;
}


// Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.GetOwnedItems
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass**                 InCharacterClass               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EItemCategory*                 InCategory                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UClass*>          Owned_Items                    (Parm, OutParm, ZeroConstructor)
// bool                           NewWeaponNotification          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_Loadout_ItemWindow_C::GetOwnedItems(class UClass** InCharacterClass, EItemCategory* InCategory, TArray<class UClass*>* Owned_Items, bool* NewWeaponNotification)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.GetOwnedItems");

	UITM_Loadout_ItemWindow_C_GetOwnedItems_Params params;
	params.InCharacterClass = InCharacterClass;
	params.InCategory = InCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Owned_Items != nullptr)
		*Owned_Items = params.Owned_Items;
	if (NewWeaponNotification != nullptr)
		*NewWeaponNotification = params.NewWeaponNotification;
}


// Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.GetSelectedItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  itemClass                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// EItemCategory                  Item_Category                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_Loadout_ItemWindow_C::GetSelectedItem(class UClass** itemClass, EItemCategory* Item_Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.GetSelectedItem");

	UITM_Loadout_ItemWindow_C_GetSelectedItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (itemClass != nullptr)
		*itemClass = params.itemClass;
	if (Item_Category != nullptr)
		*Item_Category = params.Item_Category;
}


// Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.SetCharacterClass
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 InCharacterClass               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Loadout_ItemWindow_C::SetCharacterClass(class UClass** InCharacterClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.SetCharacterClass");

	UITM_Loadout_ItemWindow_C_SetCharacterClass_Params params;
	params.InCharacterClass = InCharacterClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.SetHovered
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          InHovered                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Loadout_ItemWindow_C::SetHovered(bool* InHovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.SetHovered");

	UITM_Loadout_ItemWindow_C_SetHovered_Params params;
	params.InHovered = InHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.IsHovering
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UITM_Loadout_ItemWindow_C::IsHovering()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.IsHovering");

	UITM_Loadout_ItemWindow_C_IsHovering_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_Loadout_ItemWindow_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.Construct");

	UITM_Loadout_ItemWindow_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.SelectNext
// (BlueprintCallable, BlueprintEvent)

void UITM_Loadout_ItemWindow_C::SelectNext()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.SelectNext");

	UITM_Loadout_ItemWindow_C_SelectNext_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.SelectPrevious
// (BlueprintCallable, BlueprintEvent)

void UITM_Loadout_ItemWindow_C::SelectPrevious()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.SelectPrevious");

	UITM_Loadout_ItemWindow_C_SelectPrevious_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.Select Item
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 InItemClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Loadout_ItemWindow_C::Select_Item(class UClass** InItemClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.Select Item");

	UITM_Loadout_ItemWindow_C_Select_Item_Params params;
	params.InItemClass = InItemClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UITM_Loadout_ItemWindow_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UITM_Loadout_ItemWindow_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UITM_Loadout_ItemWindow_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UITM_Loadout_ItemWindow_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UITM_Loadout_ItemWindow_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UITM_Loadout_ItemWindow_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.BndEvt__ButtonRight_K2Node_ComponentBoundEvent_511_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UITM_Loadout_ItemWindow_C::BndEvt__ButtonRight_K2Node_ComponentBoundEvent_511_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.BndEvt__ButtonRight_K2Node_ComponentBoundEvent_511_OnButtonClickedEvent__DelegateSignature");

	UITM_Loadout_ItemWindow_C_BndEvt__ButtonRight_K2Node_ComponentBoundEvent_511_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_528_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UITM_Loadout_ItemWindow_C::BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_528_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_528_OnButtonClickedEvent__DelegateSignature");

	UITM_Loadout_ItemWindow_C_BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_528_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.OnClickAnimFinished
// (BlueprintCallable, BlueprintEvent)

void UITM_Loadout_ItemWindow_C::OnClickAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.OnClickAnimFinished");

	UITM_Loadout_ItemWindow_C_OnClickAnimFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.PlayIntroAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsLeftSide                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Loadout_ItemWindow_C::PlayIntroAnim(bool* IsLeftSide, float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.PlayIntroAnim");

	UITM_Loadout_ItemWindow_C_PlayIntroAnim_Params params;
	params.IsLeftSide = IsLeftSide;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Loadout_ItemWindow_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.PreConstruct");

	UITM_Loadout_ItemWindow_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.ExecuteUbergraph_ITM_Loadout_ItemWindow
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Loadout_ItemWindow_C::ExecuteUbergraph_ITM_Loadout_ItemWindow(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.ExecuteUbergraph_ITM_Loadout_ItemWindow");

	UITM_Loadout_ItemWindow_C_ExecuteUbergraph_ITM_Loadout_ItemWindow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.On Unhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_Loadout_ItemWindow_C** Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_Loadout_ItemWindow_C::On_Unhovered__DelegateSignature(class UITM_Loadout_ItemWindow_C** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.On Unhovered__DelegateSignature");

	UITM_Loadout_ItemWindow_C_On_Unhovered__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.On Hovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_Loadout_ItemWindow_C** Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_Loadout_ItemWindow_C::On_Hovered__DelegateSignature(class UITM_Loadout_ItemWindow_C** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.On Hovered__DelegateSignature");

	UITM_Loadout_ItemWindow_C_On_Hovered__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.On Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_Loadout_ItemWindow_C** Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_Loadout_ItemWindow_C::On_Clicked__DelegateSignature(class UITM_Loadout_ItemWindow_C** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.On Clicked__DelegateSignature");

	UITM_Loadout_ItemWindow_C_On_Clicked__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
