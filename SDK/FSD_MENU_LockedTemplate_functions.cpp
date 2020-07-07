// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_MENU_LockedTemplate_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MENU_LockedTemplate.MENU_LockedTemplate_C.GetIsUnlocked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Locked                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMENU_LockedTemplate_C::GetIsUnlocked(bool* Locked)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_LockedTemplate.MENU_LockedTemplate_C.GetIsUnlocked");

	UMENU_LockedTemplate_C_GetIsUnlocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Locked != nullptr)
		*Locked = params.Locked;
}


// Function MENU_LockedTemplate.MENU_LockedTemplate_C.GetIsLocked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Locked                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMENU_LockedTemplate_C::GetIsLocked(bool* Locked)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_LockedTemplate.MENU_LockedTemplate_C.GetIsLocked");

	UMENU_LockedTemplate_C_GetIsLocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Locked != nullptr)
		*Locked = params.Locked;
}


// Function MENU_LockedTemplate.MENU_LockedTemplate_C.RequireOnePromotedCharacter
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Locked                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMENU_LockedTemplate_C::RequireOnePromotedCharacter(bool* Locked)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_LockedTemplate.MENU_LockedTemplate_C.RequireOnePromotedCharacter");

	UMENU_LockedTemplate_C_RequireOnePromotedCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Locked != nullptr)
		*Locked = params.Locked;
}


// Function MENU_LockedTemplate.MENU_LockedTemplate_C.SetLockIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D**             Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMENU_LockedTemplate_C::SetLockIcon(class UTexture2D** Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_LockedTemplate.MENU_LockedTemplate_C.SetLockIcon");

	UMENU_LockedTemplate_C_SetLockIcon_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_LockedTemplate.MENU_LockedTemplate_C.SetMessaqe
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  InText                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void UMENU_LockedTemplate_C::SetMessaqe(struct FText* InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_LockedTemplate.MENU_LockedTemplate_C.SetMessaqe");

	UMENU_LockedTemplate_C_SetMessaqe_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_LockedTemplate.MENU_LockedTemplate_C.SetMenuLocked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsLocked                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Locked                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMENU_LockedTemplate_C::SetMenuLocked(bool* IsLocked, bool* Locked)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_LockedTemplate.MENU_LockedTemplate_C.SetMenuLocked");

	UMENU_LockedTemplate_C_SetMenuLocked_Params params;
	params.IsLocked = IsLocked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Locked != nullptr)
		*Locked = params.Locked;
}


// Function MENU_LockedTemplate.MENU_LockedTemplate_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UMENU_LockedTemplate_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_LockedTemplate.MENU_LockedTemplate_C.OnKeyUp");

	UMENU_LockedTemplate_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MENU_LockedTemplate.MENU_LockedTemplate_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UMENU_LockedTemplate_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_LockedTemplate.MENU_LockedTemplate_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UMENU_LockedTemplate_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_LockedTemplate.MENU_LockedTemplate_C.Close
// (BlueprintCallable, BlueprintEvent)

void UMENU_LockedTemplate_C::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_LockedTemplate.MENU_LockedTemplate_C.Close");

	UMENU_LockedTemplate_C_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_LockedTemplate.MENU_LockedTemplate_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMENU_LockedTemplate_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_LockedTemplate.MENU_LockedTemplate_C.Construct");

	UMENU_LockedTemplate_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_LockedTemplate.MENU_LockedTemplate_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMENU_LockedTemplate_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_LockedTemplate.MENU_LockedTemplate_C.PreConstruct");

	UMENU_LockedTemplate_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_LockedTemplate.MENU_LockedTemplate_C.ExecuteUbergraph_MENU_LockedTemplate
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMENU_LockedTemplate_C::ExecuteUbergraph_MENU_LockedTemplate(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_LockedTemplate.MENU_LockedTemplate_C.ExecuteUbergraph_MENU_LockedTemplate");

	UMENU_LockedTemplate_C_ExecuteUbergraph_MENU_LockedTemplate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
