// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_ItemUnlockedIcon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void UITM_ItemUnlockedIcon_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.Refresh");

	UITM_ItemUnlockedIcon_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.ClearChildren
// (Public, BlueprintCallable, BlueprintEvent)

void UITM_ItemUnlockedIcon_C::ClearChildren()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.ClearChildren");

	UITM_ItemUnlockedIcon_C_ClearChildren_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.ChildNotificationChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UITM_ItemUnlockedIcon_C::ChildNotificationChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.ChildNotificationChanged");

	UITM_ItemUnlockedIcon_C_ChildNotificationChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.AddChildNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_ItemUnlockedIcon_C** ChildIcon                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_ItemUnlockedIcon_C::AddChildNotification(class UITM_ItemUnlockedIcon_C** ChildIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.AddChildNotification");

	UITM_ItemUnlockedIcon_C_AddChildNotification_Params params;
	params.ChildIcon = ChildIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.RemoveNotification
// (Public, BlueprintCallable, BlueprintEvent)

void UITM_ItemUnlockedIcon_C::RemoveNotification()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.RemoveNotification");

	UITM_ItemUnlockedIcon_C_RemoveNotification_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.SetItemIDArray
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UObject*>         ObjectsWithID                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool*                          MatchChildNotifications        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ItemUnlockedIcon_C::SetItemIDArray(bool* MatchChildNotifications, TArray<class UObject*>* ObjectsWithID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.SetItemIDArray");

	UITM_ItemUnlockedIcon_C_SetItemIDArray_Params params;
	params.MatchChildNotifications = MatchChildNotifications;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ObjectsWithID != nullptr)
		*ObjectsWithID = params.ObjectsWithID;
}


// Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.SetVisible
// (BlueprintCallable, BlueprintEvent)

void UITM_ItemUnlockedIcon_C::SetVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.SetVisible");

	UITM_ItemUnlockedIcon_C_SetVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.HideIcon
// (BlueprintCallable, BlueprintEvent)

void UITM_ItemUnlockedIcon_C::HideIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.HideIcon");

	UITM_ItemUnlockedIcon_C_HideIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.OnAnimFinished
// (BlueprintCallable, BlueprintEvent)

void UITM_ItemUnlockedIcon_C::OnAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.OnAnimFinished");

	UITM_ItemUnlockedIcon_C_OnAnimFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.ExecuteUbergraph_ITM_ItemUnlockedIcon
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ItemUnlockedIcon_C::ExecuteUbergraph_ITM_ItemUnlockedIcon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.ExecuteUbergraph_ITM_ItemUnlockedIcon");

	UITM_ItemUnlockedIcon_C_ExecuteUbergraph_ITM_ItemUnlockedIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.OnChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UITM_ItemUnlockedIcon_C::OnChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.OnChanged__DelegateSignature");

	UITM_ItemUnlockedIcon_C_OnChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.OnNotificationRemoved__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UITM_ItemUnlockedIcon_C::OnNotificationRemoved__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.OnNotificationRemoved__DelegateSignature");

	UITM_ItemUnlockedIcon_C_OnNotificationRemoved__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
