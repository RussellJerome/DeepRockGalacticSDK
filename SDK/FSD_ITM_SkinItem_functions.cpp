// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_SkinItem_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_SkinItem.ITM_SkinItem_C.SetIsDefaultItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          InDefault                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_SkinItem_C::SetIsDefaultItem(bool* InDefault)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_SkinItem.ITM_SkinItem_C.SetIsDefaultItem");

	UITM_SkinItem_C_SetIsDefaultItem_Params params;
	params.InDefault = InDefault;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_SkinItem.ITM_SkinItem_C.ClearEventHandlers
// (Public, BlueprintCallable, BlueprintEvent)

void UITM_SkinItem_C::ClearEventHandlers()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_SkinItem.ITM_SkinItem_C.ClearEventHandlers");

	UITM_SkinItem_C_ClearEventHandlers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_SkinItem.ITM_SkinItem_C.SetState
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemSkin**              InSkin                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          InLocked                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          InHovered                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          InEquipped                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_SkinItem_C::SetState(class UItemSkin** InSkin, bool* InLocked, bool* InHovered, bool* InEquipped)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_SkinItem.ITM_SkinItem_C.SetState");

	UITM_SkinItem_C_SetState_Params params;
	params.InSkin = InSkin;
	params.InLocked = InLocked;
	params.InHovered = InHovered;
	params.InEquipped = InEquipped;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_SkinItem.ITM_SkinItem_C.IsUnlocked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UITM_SkinItem_C::IsUnlocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_SkinItem.ITM_SkinItem_C.IsUnlocked");

	UITM_SkinItem_C_IsUnlocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ITM_SkinItem.ITM_SkinItem_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void UITM_SkinItem_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_SkinItem.ITM_SkinItem_C.Refresh");

	UITM_SkinItem_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_SkinItem.ITM_SkinItem_C.BndEvt__SkinButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UITM_SkinItem_C::BndEvt__SkinButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_SkinItem.ITM_SkinItem_C.BndEvt__SkinButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UITM_SkinItem_C_BndEvt__SkinButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_SkinItem.ITM_SkinItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_SkinItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_SkinItem.ITM_SkinItem_C.Construct");

	UITM_SkinItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_SkinItem.ITM_SkinItem_C.Play Intro
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Max_Columns                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_SkinItem_C::Play_Intro(float* Duration, int* Max_Columns)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_SkinItem.ITM_SkinItem_C.Play Intro");

	UITM_SkinItem_C_Play_Intro_Params params;
	params.Duration = Duration;
	params.Max_Columns = Max_Columns;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_SkinItem.ITM_SkinItem_C.BndEvt__SkinButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UITM_SkinItem_C::BndEvt__SkinButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_SkinItem.ITM_SkinItem_C.BndEvt__SkinButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UITM_SkinItem_C_BndEvt__SkinButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_SkinItem.ITM_SkinItem_C.BndEvt__SkinButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UITM_SkinItem_C::BndEvt__SkinButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_SkinItem.ITM_SkinItem_C.BndEvt__SkinButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");

	UITM_SkinItem_C_BndEvt__SkinButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_SkinItem.ITM_SkinItem_C.Ping Skin
// (BlueprintCallable, BlueprintEvent)

void UITM_SkinItem_C::Ping_Skin()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_SkinItem.ITM_SkinItem_C.Ping Skin");

	UITM_SkinItem_C_Ping_Skin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_SkinItem.ITM_SkinItem_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_SkinItem_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_SkinItem.ITM_SkinItem_C.PreConstruct");

	UITM_SkinItem_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_SkinItem.ITM_SkinItem_C.OnAnimUnlockedFinished
// (BlueprintCallable, BlueprintEvent)

void UITM_SkinItem_C::OnAnimUnlockedFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_SkinItem.ITM_SkinItem_C.OnAnimUnlockedFinished");

	UITM_SkinItem_C_OnAnimUnlockedFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_SkinItem.ITM_SkinItem_C.RefreshNotificationIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DelayBeforeRefresh             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_SkinItem_C::RefreshNotificationIcon(float* DelayBeforeRefresh)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_SkinItem.ITM_SkinItem_C.RefreshNotificationIcon");

	UITM_SkinItem_C_RefreshNotificationIcon_Params params;
	params.DelayBeforeRefresh = DelayBeforeRefresh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_SkinItem.ITM_SkinItem_C.ExecuteUbergraph_ITM_SkinItem
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_SkinItem_C::ExecuteUbergraph_ITM_SkinItem(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_SkinItem.ITM_SkinItem_C.ExecuteUbergraph_ITM_SkinItem");

	UITM_SkinItem_C_ExecuteUbergraph_ITM_SkinItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_SkinItem.ITM_SkinItem_C.OnNotificationRemoved__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_SkinItem_C**        Skin                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_SkinItem_C::OnNotificationRemoved__DelegateSignature(class UITM_SkinItem_C** Skin)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_SkinItem.ITM_SkinItem_C.OnNotificationRemoved__DelegateSignature");

	UITM_SkinItem_C_OnNotificationRemoved__DelegateSignature_Params params;
	params.Skin = Skin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_SkinItem.ITM_SkinItem_C.OnUnhovering__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_SkinItem_C**        SkinItem                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_SkinItem_C::OnUnhovering__DelegateSignature(class UITM_SkinItem_C** SkinItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_SkinItem.ITM_SkinItem_C.OnUnhovering__DelegateSignature");

	UITM_SkinItem_C_OnUnhovering__DelegateSignature_Params params;
	params.SkinItem = SkinItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_SkinItem.ITM_SkinItem_C.OnHovering__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_SkinItem_C**        SkinItem                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_SkinItem_C::OnHovering__DelegateSignature(class UITM_SkinItem_C** SkinItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_SkinItem.ITM_SkinItem_C.OnHovering__DelegateSignature");

	UITM_SkinItem_C_OnHovering__DelegateSignature_Params params;
	params.SkinItem = SkinItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_SkinItem.ITM_SkinItem_C.OnSkinClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_SkinItem_C**        Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_SkinItem_C::OnSkinClicked__DelegateSignature(class UITM_SkinItem_C** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_SkinItem.ITM_SkinItem_C.OnSkinClicked__DelegateSignature");

	UITM_SkinItem_C_OnSkinClicked__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
