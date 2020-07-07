// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WND_Skins_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WND_Skins.WND_Skins_C.FilterColorSkins
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UItemSkin*>       Skins                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWND_Skins_C::FilterColorSkins(TArray<class UItemSkin*>* Skins)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Skins.WND_Skins_C.FilterColorSkins");

	UWND_Skins_C_FilterColorSkins_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Skins != nullptr)
		*Skins = params.Skins;
}


// Function WND_Skins.WND_Skins_C.RefreshLoadout
// (Public, BlueprintCallable, BlueprintEvent)

void UWND_Skins_C::RefreshLoadout()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Skins.WND_Skins_C.RefreshLoadout");

	UWND_Skins_C_RefreshLoadout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Skins.WND_Skins_C.ClearSkins
// (Public, BlueprintCallable, BlueprintEvent)

void UWND_Skins_C::ClearSkins()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Skins.WND_Skins_C.ClearSkins");

	UWND_Skins_C_ClearSkins_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Skins.WND_Skins_C.OnUnlockedSkin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemSkin**              SkinItem                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_Skins_C::OnUnlockedSkin(class UItemSkin** SkinItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Skins.WND_Skins_C.OnUnlockedSkin");

	UWND_Skins_C_OnUnlockedSkin_Params params;
	params.SkinItem = SkinItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Skins.WND_Skins_C.RefreshSelectorButton
// (Public, BlueprintCallable, BlueprintEvent)

void UWND_Skins_C::RefreshSelectorButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Skins.WND_Skins_C.RefreshSelectorButton");

	UWND_Skins_C_RefreshSelectorButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Skins.WND_Skins_C.RefreshWindowItems
// (Public, BlueprintCallable, BlueprintEvent)

void UWND_Skins_C::RefreshWindowItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Skins.WND_Skins_C.RefreshWindowItems");

	UWND_Skins_C_RefreshWindowItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Skins.WND_Skins_C.GetItemsWindow
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 Widget                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWND_Skins_C::GetItemsWindow(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Skins.WND_Skins_C.GetItemsWindow");

	UWND_Skins_C_GetItemsWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function WND_Skins.WND_Skins_C.UpdateBorder
// (Public, BlueprintCallable, BlueprintEvent)

void UWND_Skins_C::UpdateBorder()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Skins.WND_Skins_C.UpdateBorder");

	UWND_Skins_C_UpdateBorder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Skins.WND_Skins_C.IsWindowVisible
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Visible                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWND_Skins_C::IsWindowVisible(bool* Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Skins.WND_Skins_C.IsWindowVisible");

	UWND_Skins_C_IsWindowVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Visible != nullptr)
		*Visible = params.Visible;
}


// Function WND_Skins.WND_Skins_C.PopulateSkinWindow
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEmpty                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWND_Skins_C::PopulateSkinWindow(bool* IsEmpty)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Skins.WND_Skins_C.PopulateSkinWindow");

	UWND_Skins_C_PopulateSkinWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsEmpty != nullptr)
		*IsEmpty = params.IsEmpty;
}


// Function WND_Skins.WND_Skins_C.SetWindowVisible
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           VisibilityChanged              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           NewVisibility                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWND_Skins_C::SetWindowVisible(bool* IsVisible, bool* VisibilityChanged, bool* NewVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Skins.WND_Skins_C.SetWindowVisible");

	UWND_Skins_C_SetWindowVisible_Params params;
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (VisibilityChanged != nullptr)
		*VisibilityChanged = params.VisibilityChanged;
	if (NewVisibility != nullptr)
		*NewVisibility = params.NewVisibility;
}


// Function WND_Skins.WND_Skins_C.AddSkin
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemSkin**              InSkin                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 InItem                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 InPlayerCharacter              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           InIndex                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UITM_SkinItem_C*         OutSkinWidget                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWND_Skins_C::AddSkin(class UItemSkin** InSkin, class UClass** InItem, class UClass** InPlayerCharacter, int* InIndex, class UITM_SkinItem_C** OutSkinWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Skins.WND_Skins_C.AddSkin");

	UWND_Skins_C_AddSkin_Params params;
	params.InSkin = InSkin;
	params.InItem = InItem;
	params.InPlayerCharacter = InPlayerCharacter;
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSkinWidget != nullptr)
		*OutSkinWidget = params.OutSkinWidget;
}


// Function WND_Skins.WND_Skins_C.SetSkinData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 itemClass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 PlayerCharacterClass           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_Skins_C::SetSkinData(class UClass** itemClass, class UClass** PlayerCharacterClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Skins.WND_Skins_C.SetSkinData");

	UWND_Skins_C_SetSkinData_Params params;
	params.itemClass = itemClass;
	params.PlayerCharacterClass = PlayerCharacterClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Skins.WND_Skins_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWND_Skins_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Skins.WND_Skins_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UWND_Skins_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Skins.WND_Skins_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_Skins_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Skins.WND_Skins_C.PreConstruct");

	UWND_Skins_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Skins.WND_Skins_C.OnSkinWidgetAdded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_SkinItem_C**        SkinWidget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWND_Skins_C::OnSkinWidgetAdded(class UITM_SkinItem_C** SkinWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Skins.WND_Skins_C.OnSkinWidgetAdded");

	UWND_Skins_C_OnSkinWidgetAdded_Params params;
	params.SkinWidget = SkinWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Skins.WND_Skins_C.OnSkinClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_SkinItem_C**        Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWND_Skins_C::OnSkinClicked(class UITM_SkinItem_C** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Skins.WND_Skins_C.OnSkinClicked");

	UWND_Skins_C_OnSkinClicked_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Skins.WND_Skins_C.BndEvt__SelectorButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWND_Skins_C::BndEvt__SelectorButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Skins.WND_Skins_C.BndEvt__SelectorButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");

	UWND_Skins_C_BndEvt__SelectorButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Skins.WND_Skins_C.BndEvt__SelectorButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWND_Skins_C::BndEvt__SelectorButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Skins.WND_Skins_C.BndEvt__SelectorButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UWND_Skins_C_BndEvt__SelectorButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Skins.WND_Skins_C.OnHoveringSkin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_SkinItem_C**        SkinItem                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWND_Skins_C::OnHoveringSkin(class UITM_SkinItem_C** SkinItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Skins.WND_Skins_C.OnHoveringSkin");

	UWND_Skins_C_OnHoveringSkin_Params params;
	params.SkinItem = SkinItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Skins.WND_Skins_C.PreviewSkin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemSkin**              Skin                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_Skins_C::PreviewSkin(class UItemSkin** Skin)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Skins.WND_Skins_C.PreviewSkin");

	UWND_Skins_C_PreviewSkin_Params params;
	params.Skin = Skin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Skins.WND_Skins_C.OnUnhoveringSkin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_SkinItem_C**        SkinItem                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWND_Skins_C::OnUnhoveringSkin(class UITM_SkinItem_C** SkinItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Skins.WND_Skins_C.OnUnhoveringSkin");

	UWND_Skins_C_OnUnhoveringSkin_Params params;
	params.SkinItem = SkinItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Skins.WND_Skins_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWND_Skins_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Skins.WND_Skins_C.Construct");

	UWND_Skins_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Skins.WND_Skins_C.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWND_Skins_C::OnFocusLost(struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Skins.WND_Skins_C.OnFocusLost");

	UWND_Skins_C_OnFocusLost_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Skins.WND_Skins_C.BndEvt__UI_FocusableCanvas_K2Node_ComponentBoundEvent_3_OnHoverChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          IsHovered                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_Skins_C::BndEvt__UI_FocusableCanvas_K2Node_ComponentBoundEvent_3_OnHoverChanged__DelegateSignature(class UWidget** Widget, bool* IsHovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Skins.WND_Skins_C.BndEvt__UI_FocusableCanvas_K2Node_ComponentBoundEvent_3_OnHoverChanged__DelegateSignature");

	UWND_Skins_C_BndEvt__UI_FocusableCanvas_K2Node_ComponentBoundEvent_3_OnHoverChanged__DelegateSignature_Params params;
	params.Widget = Widget;
	params.IsHovered = IsHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Skins.WND_Skins_C.OnSkinChangedEvent_Event_1
// (BlueprintCallable, BlueprintEvent)

void UWND_Skins_C::OnSkinChangedEvent_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Skins.WND_Skins_C.OnSkinChangedEvent_Event_1");

	UWND_Skins_C_OnSkinChangedEvent_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Skins.WND_Skins_C.ExecuteUbergraph_WND_Skins
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_Skins_C::ExecuteUbergraph_WND_Skins(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Skins.WND_Skins_C.ExecuteUbergraph_WND_Skins");

	UWND_Skins_C_ExecuteUbergraph_WND_Skins_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Skins.WND_Skins_C.OnOpened__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWND_Skins_C::OnOpened__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Skins.WND_Skins_C.OnOpened__DelegateSignature");

	UWND_Skins_C_OnOpened__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Skins.WND_Skins_C.PingSkin__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemSkin**              Skin                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_Skins_C::PingSkin__DelegateSignature(class UItemSkin** Skin)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Skins.WND_Skins_C.PingSkin__DelegateSignature");

	UWND_Skins_C_PingSkin__DelegateSignature_Params params;
	params.Skin = Skin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
