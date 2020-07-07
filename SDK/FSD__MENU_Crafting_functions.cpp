// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD__MENU_Crafting_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function _MENU_Crafting._MENU_Crafting_C.SetPreviewItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UCraftable>* Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U_MENU_Crafting_C::SetPreviewItem(TScriptInterface<class UCraftable>* Item, bool* Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Crafting._MENU_Crafting_C.SetPreviewItem");

	U_MENU_Crafting_C_SetPreviewItem_Params params;
	params.Item = Item;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_Crafting._MENU_Crafting_C.GetNextAvailableRank
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UVanityItem*>     In_Vanity_Items                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            VisibleRank                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void U_MENU_Crafting_C::GetNextAvailableRank(TArray<class UVanityItem*>* In_Vanity_Items, int* VisibleRank)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Crafting._MENU_Crafting_C.GetNextAvailableRank");

	U_MENU_Crafting_C_GetNextAvailableRank_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (In_Vanity_Items != nullptr)
		*In_Vanity_Items = params.In_Vanity_Items;
	if (VisibleRank != nullptr)
		*VisibleRank = params.VisibleRank;
}


// Function _MENU_Crafting._MENU_Crafting_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply U_MENU_Crafting_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Crafting._MENU_Crafting_C.OnKeyUp");

	U_MENU_Crafting_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function _MENU_Crafting._MENU_Crafting_C.PrevGroup
// (Public, BlueprintCallable, BlueprintEvent)

void U_MENU_Crafting_C::PrevGroup()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Crafting._MENU_Crafting_C.PrevGroup");

	U_MENU_Crafting_C_PrevGroup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_Crafting._MENU_Crafting_C.NextGroup
// (Public, BlueprintCallable, BlueprintEvent)

void U_MENU_Crafting_C::NextGroup()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Crafting._MENU_Crafting_C.NextGroup");

	U_MENU_Crafting_C_NextGroup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_Crafting._MENU_Crafting_C.ClearItems
// (Public, BlueprintCallable, BlueprintEvent)

void U_MENU_Crafting_C::ClearItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Crafting._MENU_Crafting_C.ClearItems");

	U_MENU_Crafting_C_ClearItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_Crafting._MENU_Crafting_C.ShowItems
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EVanitySlot*                   Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U_MENU_Crafting_C::ShowItems(EVanitySlot* Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Crafting._MENU_Crafting_C.ShowItems");

	U_MENU_Crafting_C_ShowItems_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_Crafting._MENU_Crafting_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void U_MENU_Crafting_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Crafting._MENU_Crafting_C.Construct");

	U_MENU_Crafting_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_Crafting._MENU_Crafting_C.OnChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 CharacterClass                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U_MENU_Crafting_C::OnChanged(class UClass** CharacterClass, int* Level, float* Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Crafting._MENU_Crafting_C.OnChanged");

	U_MENU_Crafting_C_OnChanged_Params params;
	params.CharacterClass = CharacterClass;
	params.Level = Level;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_Crafting._MENU_Crafting_C.PreviewItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UCraftable>* Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U_MENU_Crafting_C::PreviewItem(TScriptInterface<class UCraftable>* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Crafting._MENU_Crafting_C.PreviewItem");

	U_MENU_Crafting_C_PreviewItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_Crafting._MENU_Crafting_C.HidePreview
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UCraftable>* Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U_MENU_Crafting_C::HidePreview(TScriptInterface<class UCraftable>* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Crafting._MENU_Crafting_C.HidePreview");

	U_MENU_Crafting_C_HidePreview_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_Crafting._MENU_Crafting_C.BndEvt__ClassSelector_K2Node_ComponentBoundEvent_0_OnCharacterChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UClass**                 Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U_MENU_Crafting_C::BndEvt__ClassSelector_K2Node_ComponentBoundEvent_0_OnCharacterChanged__DelegateSignature(class UClass** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Crafting._MENU_Crafting_C.BndEvt__ClassSelector_K2Node_ComponentBoundEvent_0_OnCharacterChanged__DelegateSignature");

	U_MENU_Crafting_C_BndEvt__ClassSelector_K2Node_ComponentBoundEvent_0_OnCharacterChanged__DelegateSignature_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_Crafting._MENU_Crafting_C.OnShown
// (Event, Public, BlueprintEvent)

void U_MENU_Crafting_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Crafting._MENU_Crafting_C.OnShown");

	U_MENU_Crafting_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_Crafting._MENU_Crafting_C.BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_3_BTN_ArmorClicked__DelegateSignature
// (BlueprintEvent)

void U_MENU_Crafting_C::BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_3_BTN_ArmorClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Crafting._MENU_Crafting_C.BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_3_BTN_ArmorClicked__DelegateSignature");

	U_MENU_Crafting_C_BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_3_BTN_ArmorClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_Crafting._MENU_Crafting_C.BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_10_BTN_BeardClicked__DelegateSignature
// (BlueprintEvent)

void U_MENU_Crafting_C::BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_10_BTN_BeardClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Crafting._MENU_Crafting_C.BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_10_BTN_BeardClicked__DelegateSignature");

	U_MENU_Crafting_C_BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_10_BTN_BeardClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_Crafting._MENU_Crafting_C.BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_11_BTN_EyebrowsClicked__DelegateSignature
// (BlueprintEvent)

void U_MENU_Crafting_C::BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_11_BTN_EyebrowsClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Crafting._MENU_Crafting_C.BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_11_BTN_EyebrowsClicked__DelegateSignature");

	U_MENU_Crafting_C_BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_11_BTN_EyebrowsClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_Crafting._MENU_Crafting_C.BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_13_BTN_HeadwearClicked__DelegateSignature
// (BlueprintEvent)

void U_MENU_Crafting_C::BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_13_BTN_HeadwearClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Crafting._MENU_Crafting_C.BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_13_BTN_HeadwearClicked__DelegateSignature");

	U_MENU_Crafting_C_BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_13_BTN_HeadwearClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_Crafting._MENU_Crafting_C.BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_14_BTN_SideburnsClicked__DelegateSignature
// (BlueprintEvent)

void U_MENU_Crafting_C::BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_14_BTN_SideburnsClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Crafting._MENU_Crafting_C.BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_14_BTN_SideburnsClicked__DelegateSignature");

	U_MENU_Crafting_C_BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_14_BTN_SideburnsClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_Crafting._MENU_Crafting_C.BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_15_BTN_MoustacheClicked__DelegateSignature
// (BlueprintEvent)

void U_MENU_Crafting_C::BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_15_BTN_MoustacheClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Crafting._MENU_Crafting_C.BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_15_BTN_MoustacheClicked__DelegateSignature");

	U_MENU_Crafting_C_BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_15_BTN_MoustacheClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_Crafting._MENU_Crafting_C.BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_16_BTN_SkinColorClicked__DelegateSignature
// (BlueprintEvent)

void U_MENU_Crafting_C::BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_16_BTN_SkinColorClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Crafting._MENU_Crafting_C.BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_16_BTN_SkinColorClicked__DelegateSignature");

	U_MENU_Crafting_C_BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_16_BTN_SkinColorClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_Crafting._MENU_Crafting_C.Update
// (BlueprintCallable, BlueprintEvent)

void U_MENU_Crafting_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Crafting._MENU_Crafting_C.Update");

	U_MENU_Crafting_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_Crafting._MENU_Crafting_C.BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_1_BTN_HairColorClicked__DelegateSignature
// (BlueprintEvent)

void U_MENU_Crafting_C::BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_1_BTN_HairColorClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Crafting._MENU_Crafting_C.BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_1_BTN_HairColorClicked__DelegateSignature");

	U_MENU_Crafting_C_BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_1_BTN_HairColorClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_Crafting._MENU_Crafting_C.OnClosed
// (Event, Public, BlueprintEvent)

void U_MENU_Crafting_C::OnClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Crafting._MENU_Crafting_C.OnClosed");

	U_MENU_Crafting_C_OnClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_Crafting._MENU_Crafting_C.BndEvt__ITM_LoadoutSelectorBar_K2Node_ComponentBoundEvent_2_NewLoadoutSelected__DelegateSignature
// (BlueprintEvent)

void U_MENU_Crafting_C::BndEvt__ITM_LoadoutSelectorBar_K2Node_ComponentBoundEvent_2_NewLoadoutSelected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Crafting._MENU_Crafting_C.BndEvt__ITM_LoadoutSelectorBar_K2Node_ComponentBoundEvent_2_NewLoadoutSelected__DelegateSignature");

	U_MENU_Crafting_C_BndEvt__ITM_LoadoutSelectorBar_K2Node_ComponentBoundEvent_2_NewLoadoutSelected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_Crafting._MENU_Crafting_C.ExecuteUbergraph__MENU_Crafting
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U_MENU_Crafting_C::ExecuteUbergraph__MENU_Crafting(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Crafting._MENU_Crafting_C.ExecuteUbergraph__MENU_Crafting");

	U_MENU_Crafting_C_ExecuteUbergraph__MENU_Crafting_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
