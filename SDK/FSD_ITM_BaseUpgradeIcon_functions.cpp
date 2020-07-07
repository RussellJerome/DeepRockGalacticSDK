// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_BaseUpgradeIcon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.IsInteractable
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UITM_BaseUpgradeIcon_C::IsInteractable()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.IsInteractable");

	UITM_BaseUpgradeIcon_C_IsInteractable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.Update
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D**             InIcon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EItemUpgradeStatus*            InStatus                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           InLockRequirement              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D**             LockTexture                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ENUM_MenuColors>*  LockTint                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          InShowEquippedAsBorder         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          InShowLockIcon                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          InShowLockRequirement          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          InTierLocked                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_BaseUpgradeIcon_C::Update(class UTexture2D** InIcon, EItemUpgradeStatus* InStatus, int* InLockRequirement, class UTexture2D** LockTexture, TEnumAsByte<ENUM_MenuColors>* LockTint, bool* InShowEquippedAsBorder, bool* InShowLockIcon, bool* InShowLockRequirement, bool* InTierLocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.Update");

	UITM_BaseUpgradeIcon_C_Update_Params params;
	params.InIcon = InIcon;
	params.InStatus = InStatus;
	params.InLockRequirement = InLockRequirement;
	params.LockTexture = LockTexture;
	params.LockTint = LockTint;
	params.InShowEquippedAsBorder = InShowEquippedAsBorder;
	params.InShowLockIcon = InShowLockIcon;
	params.InShowLockRequirement = InShowLockRequirement;
	params.InTierLocked = InTierLocked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_BaseUpgradeIcon_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.PreConstruct");

	UITM_BaseUpgradeIcon_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.BndEvt__WidgetButton_K2Node_ComponentBoundEvent_79_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UITM_BaseUpgradeIcon_C::BndEvt__WidgetButton_K2Node_ComponentBoundEvent_79_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.BndEvt__WidgetButton_K2Node_ComponentBoundEvent_79_OnButtonHoverEvent__DelegateSignature");

	UITM_BaseUpgradeIcon_C_BndEvt__WidgetButton_K2Node_ComponentBoundEvent_79_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.BndEvt__WidgetButton_K2Node_ComponentBoundEvent_92_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UITM_BaseUpgradeIcon_C::BndEvt__WidgetButton_K2Node_ComponentBoundEvent_92_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.BndEvt__WidgetButton_K2Node_ComponentBoundEvent_92_OnButtonHoverEvent__DelegateSignature");

	UITM_BaseUpgradeIcon_C_BndEvt__WidgetButton_K2Node_ComponentBoundEvent_92_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.BndEvt__WidgetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UITM_BaseUpgradeIcon_C::BndEvt__WidgetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.BndEvt__WidgetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UITM_BaseUpgradeIcon_C_BndEvt__WidgetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.ExecuteUbergraph_ITM_BaseUpgradeIcon
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_BaseUpgradeIcon_C::ExecuteUbergraph_ITM_BaseUpgradeIcon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.ExecuteUbergraph_ITM_BaseUpgradeIcon");

	UITM_BaseUpgradeIcon_C_ExecuteUbergraph_ITM_BaseUpgradeIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_BaseUpgradeIcon_C** Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_BaseUpgradeIcon_C::OnClicked__DelegateSignature(class UITM_BaseUpgradeIcon_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.OnClicked__DelegateSignature");

	UITM_BaseUpgradeIcon_C_OnClicked__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.OnHoverEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_BaseUpgradeIcon_C** Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_BaseUpgradeIcon_C::OnHoverEnd__DelegateSignature(class UITM_BaseUpgradeIcon_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.OnHoverEnd__DelegateSignature");

	UITM_BaseUpgradeIcon_C_OnHoverEnd__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.OnHoverBegin__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_BaseUpgradeIcon_C** Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_BaseUpgradeIcon_C::OnHoverBegin__DelegateSignature(class UITM_BaseUpgradeIcon_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.OnHoverBegin__DelegateSignature");

	UITM_BaseUpgradeIcon_C_OnHoverBegin__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
