// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WND_Crafting_Unlock_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.CreateResources
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWND_Crafting_Unlock_C::CreateResources()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.CreateResources");

	UWND_Crafting_Unlock_C_CreateResources_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWND_Crafting_Unlock_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.OnKeyUp");

	UWND_Crafting_Unlock_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_Crafting_Unlock_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.PreConstruct");

	UWND_Crafting_Unlock_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.BndEvt__BTN_No_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWND_Crafting_Unlock_C::BndEvt__BTN_No_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.BndEvt__BTN_No_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWND_Crafting_Unlock_C_BndEvt__BTN_No_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWND_Crafting_Unlock_C::BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UWND_Crafting_Unlock_C_BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.Close
// (BlueprintCallable, BlueprintEvent)

void UWND_Crafting_Unlock_C::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.Close");

	UWND_Crafting_Unlock_C_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.Cancel
// (BlueprintCallable, BlueprintEvent)

void UWND_Crafting_Unlock_C::Cancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.Cancel");

	UWND_Crafting_Unlock_C_Cancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.Select
// (BlueprintCallable, BlueprintEvent)

void UWND_Crafting_Unlock_C::Select()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.Select");

	UWND_Crafting_Unlock_C_Select_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.DoEquipMenu
// (BlueprintCallable, BlueprintEvent)

void UWND_Crafting_Unlock_C::DoEquipMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.DoEquipMenu");

	UWND_Crafting_Unlock_C_DoEquipMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.Show
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UCraftable>* Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFSDPlayerState**        Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_Crafting_Unlock_C::Show(TScriptInterface<class UCraftable>* Item, class AFSDPlayerState** Player, class UClass** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.Show");

	UWND_Crafting_Unlock_C_Show_Params params;
	params.Item = Item;
	params.Player = Player;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.ExecuteUbergraph_WND_Crafting_Unlock
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_Crafting_Unlock_C::ExecuteUbergraph_WND_Crafting_Unlock(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.ExecuteUbergraph_WND_Crafting_Unlock");

	UWND_Crafting_Unlock_C_ExecuteUbergraph_WND_Crafting_Unlock_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
