// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD__MENU_CharacterCustomization_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function _MENU_CharacterCustomization._MENU_CharacterCustomization_C.PlayIntroAnimations
// (Public, BlueprintCallable, BlueprintEvent)

void U_MENU_CharacterCustomization_C::PlayIntroAnimations()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_CharacterCustomization._MENU_CharacterCustomization_C.PlayIntroAnimations");

	U_MENU_CharacterCustomization_C_PlayIntroAnimations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_CharacterCustomization._MENU_CharacterCustomization_C.CheckArmorMasteryUnlocks
// (Public, BlueprintCallable, BlueprintEvent)

void U_MENU_CharacterCustomization_C::CheckArmorMasteryUnlocks()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_CharacterCustomization._MENU_CharacterCustomization_C.CheckArmorMasteryUnlocks");

	U_MENU_CharacterCustomization_C_CheckArmorMasteryUnlocks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_CharacterCustomization._MENU_CharacterCustomization_C.InitSlotColumn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget**           InBox                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UITM_ChaCus_ItemSelector_C** InSelector                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          InLeftSide                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U_MENU_CharacterCustomization_C::InitSlotColumn(class UPanelWidget** InBox, class UITM_ChaCus_ItemSelector_C** InSelector, bool* InLeftSide)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_CharacterCustomization._MENU_CharacterCustomization_C.InitSlotColumn");

	U_MENU_CharacterCustomization_C_InitSlotColumn_Params params;
	params.InBox = InBox;
	params.InSelector = InSelector;
	params.InLeftSide = InLeftSide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_CharacterCustomization._MENU_CharacterCustomization_C.RefreshSlots
// (Public, BlueprintCallable, BlueprintEvent)

void U_MENU_CharacterCustomization_C::RefreshSlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_CharacterCustomization._MENU_CharacterCustomization_C.RefreshSlots");

	U_MENU_CharacterCustomization_C_RefreshSlots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_CharacterCustomization._MENU_CharacterCustomization_C.ReleaseRenderTargets
// (Public, BlueprintCallable, BlueprintEvent)

void U_MENU_CharacterCustomization_C::ReleaseRenderTargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_CharacterCustomization._MENU_CharacterCustomization_C.ReleaseRenderTargets");

	U_MENU_CharacterCustomization_C_ReleaseRenderTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_CharacterCustomization._MENU_CharacterCustomization_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply U_MENU_CharacterCustomization_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_CharacterCustomization._MENU_CharacterCustomization_C.OnKeyUp");

	U_MENU_CharacterCustomization_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function _MENU_CharacterCustomization._MENU_CharacterCustomization_C.GetCharacter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerCharacter*        Character                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void U_MENU_CharacterCustomization_C::GetCharacter(class APlayerCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_CharacterCustomization._MENU_CharacterCustomization_C.GetCharacter");

	U_MENU_CharacterCustomization_C_GetCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Character != nullptr)
		*Character = params.Character;
}


// Function _MENU_CharacterCustomization._MENU_CharacterCustomization_C.OnShown
// (Event, Public, BlueprintEvent)

void U_MENU_CharacterCustomization_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_CharacterCustomization._MENU_CharacterCustomization_C.OnShown");

	U_MENU_CharacterCustomization_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_CharacterCustomization._MENU_CharacterCustomization_C.BndEvt__MENU_SpaceRig_K2Node_ComponentBoundEvent_0_OnClosedClicked__DelegateSignature
// (BlueprintEvent)

void U_MENU_CharacterCustomization_C::BndEvt__MENU_SpaceRig_K2Node_ComponentBoundEvent_0_OnClosedClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_CharacterCustomization._MENU_CharacterCustomization_C.BndEvt__MENU_SpaceRig_K2Node_ComponentBoundEvent_0_OnClosedClicked__DelegateSignature");

	U_MENU_CharacterCustomization_C_BndEvt__MENU_SpaceRig_K2Node_ComponentBoundEvent_0_OnClosedClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_CharacterCustomization._MENU_CharacterCustomization_C.ReceiveCloseCommand
// (Event, Protected, BlueprintEvent)

void U_MENU_CharacterCustomization_C::ReceiveCloseCommand()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_CharacterCustomization._MENU_CharacterCustomization_C.ReceiveCloseCommand");

	U_MENU_CharacterCustomization_C_ReceiveCloseCommand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_CharacterCustomization._MENU_CharacterCustomization_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U_MENU_CharacterCustomization_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_CharacterCustomization._MENU_CharacterCustomization_C.PreConstruct");

	U_MENU_CharacterCustomization_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_CharacterCustomization._MENU_CharacterCustomization_C.BndEvt__ClassSelector_K2Node_ComponentBoundEvent_0_OnCharacterChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UClass**                 Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U_MENU_CharacterCustomization_C::BndEvt__ClassSelector_K2Node_ComponentBoundEvent_0_OnCharacterChanged__DelegateSignature(class UClass** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_CharacterCustomization._MENU_CharacterCustomization_C.BndEvt__ClassSelector_K2Node_ComponentBoundEvent_0_OnCharacterChanged__DelegateSignature");

	U_MENU_CharacterCustomization_C_BndEvt__ClassSelector_K2Node_ComponentBoundEvent_0_OnCharacterChanged__DelegateSignature_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_CharacterCustomization._MENU_CharacterCustomization_C.BndEvt__ITM_LoadoutSelectorBar_K2Node_ComponentBoundEvent_2_NewLoadoutSelected__DelegateSignature
// (BlueprintEvent)

void U_MENU_CharacterCustomization_C::BndEvt__ITM_LoadoutSelectorBar_K2Node_ComponentBoundEvent_2_NewLoadoutSelected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_CharacterCustomization._MENU_CharacterCustomization_C.BndEvt__ITM_LoadoutSelectorBar_K2Node_ComponentBoundEvent_2_NewLoadoutSelected__DelegateSignature");

	U_MENU_CharacterCustomization_C_BndEvt__ITM_LoadoutSelectorBar_K2Node_ComponentBoundEvent_2_NewLoadoutSelected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_CharacterCustomization._MENU_CharacterCustomization_C.Refresh
// (BlueprintCallable, BlueprintEvent)

void U_MENU_CharacterCustomization_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_CharacterCustomization._MENU_CharacterCustomization_C.Refresh");

	U_MENU_CharacterCustomization_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_CharacterCustomization._MENU_CharacterCustomization_C.SetCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 PlayerCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U_MENU_CharacterCustomization_C::SetCharacter(class UClass** PlayerCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_CharacterCustomization._MENU_CharacterCustomization_C.SetCharacter");

	U_MENU_CharacterCustomization_C_SetCharacter_Params params;
	params.PlayerCharacter = PlayerCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_CharacterCustomization._MENU_CharacterCustomization_C.OnClosed
// (Event, Public, BlueprintEvent)

void U_MENU_CharacterCustomization_C::OnClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_CharacterCustomization._MENU_CharacterCustomization_C.OnClosed");

	U_MENU_CharacterCustomization_C_OnClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_CharacterCustomization._MENU_CharacterCustomization_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void U_MENU_CharacterCustomization_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_CharacterCustomization._MENU_CharacterCustomization_C.Construct");

	U_MENU_CharacterCustomization_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_CharacterCustomization._MENU_CharacterCustomization_C.OnEquippedChanged_Event_1
// (BlueprintCallable, BlueprintEvent)

void U_MENU_CharacterCustomization_C::OnEquippedChanged_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_CharacterCustomization._MENU_CharacterCustomization_C.OnEquippedChanged_Event_1");

	U_MENU_CharacterCustomization_C_OnEquippedChanged_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_CharacterCustomization._MENU_CharacterCustomization_C.ExecuteUbergraph__MENU_CharacterCustomization
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U_MENU_CharacterCustomization_C::ExecuteUbergraph__MENU_CharacterCustomization(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_CharacterCustomization._MENU_CharacterCustomization_C.ExecuteUbergraph__MENU_CharacterCustomization");

	U_MENU_CharacterCustomization_C_ExecuteUbergraph__MENU_CharacterCustomization_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
