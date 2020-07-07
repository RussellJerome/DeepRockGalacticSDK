// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_ItemCategories_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_ItemCategories.ITM_ItemCategories_C.GetButton
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EVanitySlot*                   Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBTN_ItemCategory_C*     Button                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_ItemCategories_C::GetButton(EVanitySlot* Slot, class UBTN_ItemCategory_C** Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ItemCategories.ITM_ItemCategories_C.GetButton");

	UITM_ItemCategories_C_GetButton_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Button != nullptr)
		*Button = params.Button;
}


// Function ITM_ItemCategories.ITM_ItemCategories_C.BndEvt__BTN_Armor_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature
// (BlueprintEvent)

void UITM_ItemCategories_C::BndEvt__BTN_Armor_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ItemCategories.ITM_ItemCategories_C.BndEvt__BTN_Armor_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature");

	UITM_ItemCategories_C_BndEvt__BTN_Armor_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ItemCategories.ITM_ItemCategories_C.BndEvt__BTN_Beard_K2Node_ComponentBoundEvent_4_ButtonClicked__DelegateSignature
// (BlueprintEvent)

void UITM_ItemCategories_C::BndEvt__BTN_Beard_K2Node_ComponentBoundEvent_4_ButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ItemCategories.ITM_ItemCategories_C.BndEvt__BTN_Beard_K2Node_ComponentBoundEvent_4_ButtonClicked__DelegateSignature");

	UITM_ItemCategories_C_BndEvt__BTN_Beard_K2Node_ComponentBoundEvent_4_ButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ItemCategories.ITM_ItemCategories_C.BndEvt__BTN_Eyebrows_K2Node_ComponentBoundEvent_5_ButtonClicked__DelegateSignature
// (BlueprintEvent)

void UITM_ItemCategories_C::BndEvt__BTN_Eyebrows_K2Node_ComponentBoundEvent_5_ButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ItemCategories.ITM_ItemCategories_C.BndEvt__BTN_Eyebrows_K2Node_ComponentBoundEvent_5_ButtonClicked__DelegateSignature");

	UITM_ItemCategories_C_BndEvt__BTN_Eyebrows_K2Node_ComponentBoundEvent_5_ButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ItemCategories.ITM_ItemCategories_C.BndEvt__BTN_HairColor_K2Node_ComponentBoundEvent_6_ButtonClicked__DelegateSignature
// (BlueprintEvent)

void UITM_ItemCategories_C::BndEvt__BTN_HairColor_K2Node_ComponentBoundEvent_6_ButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ItemCategories.ITM_ItemCategories_C.BndEvt__BTN_HairColor_K2Node_ComponentBoundEvent_6_ButtonClicked__DelegateSignature");

	UITM_ItemCategories_C_BndEvt__BTN_HairColor_K2Node_ComponentBoundEvent_6_ButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ItemCategories.ITM_ItemCategories_C.BndEvt__BTN_Headwear_K2Node_ComponentBoundEvent_7_ButtonClicked__DelegateSignature
// (BlueprintEvent)

void UITM_ItemCategories_C::BndEvt__BTN_Headwear_K2Node_ComponentBoundEvent_7_ButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ItemCategories.ITM_ItemCategories_C.BndEvt__BTN_Headwear_K2Node_ComponentBoundEvent_7_ButtonClicked__DelegateSignature");

	UITM_ItemCategories_C_BndEvt__BTN_Headwear_K2Node_ComponentBoundEvent_7_ButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ItemCategories.ITM_ItemCategories_C.BndEvt__BTN_Moustache_K2Node_ComponentBoundEvent_8_ButtonClicked__DelegateSignature
// (BlueprintEvent)

void UITM_ItemCategories_C::BndEvt__BTN_Moustache_K2Node_ComponentBoundEvent_8_ButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ItemCategories.ITM_ItemCategories_C.BndEvt__BTN_Moustache_K2Node_ComponentBoundEvent_8_ButtonClicked__DelegateSignature");

	UITM_ItemCategories_C_BndEvt__BTN_Moustache_K2Node_ComponentBoundEvent_8_ButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ItemCategories.ITM_ItemCategories_C.BndEvt__BTN_Sideburns_K2Node_ComponentBoundEvent_9_ButtonClicked__DelegateSignature
// (BlueprintEvent)

void UITM_ItemCategories_C::BndEvt__BTN_Sideburns_K2Node_ComponentBoundEvent_9_ButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ItemCategories.ITM_ItemCategories_C.BndEvt__BTN_Sideburns_K2Node_ComponentBoundEvent_9_ButtonClicked__DelegateSignature");

	UITM_ItemCategories_C_BndEvt__BTN_Sideburns_K2Node_ComponentBoundEvent_9_ButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ItemCategories.ITM_ItemCategories_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayerCharacterID**     characterID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ItemCategories_C::SetData(class UPlayerCharacterID** characterID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ItemCategories.ITM_ItemCategories_C.SetData");

	UITM_ItemCategories_C_SetData_Params params;
	params.characterID = characterID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ItemCategories.ITM_ItemCategories_C.BndEvt__BTN_HairColor_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature
// (BlueprintEvent)

void UITM_ItemCategories_C::BndEvt__BTN_HairColor_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ItemCategories.ITM_ItemCategories_C.BndEvt__BTN_HairColor_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature");

	UITM_ItemCategories_C_BndEvt__BTN_HairColor_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ItemCategories.ITM_ItemCategories_C.OnClosed
// (BlueprintCallable, BlueprintEvent)

void UITM_ItemCategories_C::OnClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ItemCategories.ITM_ItemCategories_C.OnClosed");

	UITM_ItemCategories_C_OnClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ItemCategories.ITM_ItemCategories_C.ExecuteUbergraph_ITM_ItemCategories
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ItemCategories_C::ExecuteUbergraph_ITM_ItemCategories(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ItemCategories.ITM_ItemCategories_C.ExecuteUbergraph_ITM_ItemCategories");

	UITM_ItemCategories_C_ExecuteUbergraph_ITM_ItemCategories_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ItemCategories.ITM_ItemCategories_C.BTN_HairColorClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UITM_ItemCategories_C::BTN_HairColorClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ItemCategories.ITM_ItemCategories_C.BTN_HairColorClicked__DelegateSignature");

	UITM_ItemCategories_C_BTN_HairColorClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ItemCategories.ITM_ItemCategories_C.BTN_MoustacheClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UITM_ItemCategories_C::BTN_MoustacheClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ItemCategories.ITM_ItemCategories_C.BTN_MoustacheClicked__DelegateSignature");

	UITM_ItemCategories_C_BTN_MoustacheClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ItemCategories.ITM_ItemCategories_C.BTN_SideburnsClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UITM_ItemCategories_C::BTN_SideburnsClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ItemCategories.ITM_ItemCategories_C.BTN_SideburnsClicked__DelegateSignature");

	UITM_ItemCategories_C_BTN_SideburnsClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ItemCategories.ITM_ItemCategories_C.BTN_HeadwearClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UITM_ItemCategories_C::BTN_HeadwearClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ItemCategories.ITM_ItemCategories_C.BTN_HeadwearClicked__DelegateSignature");

	UITM_ItemCategories_C_BTN_HeadwearClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ItemCategories.ITM_ItemCategories_C.BTN_SkinColorClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UITM_ItemCategories_C::BTN_SkinColorClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ItemCategories.ITM_ItemCategories_C.BTN_SkinColorClicked__DelegateSignature");

	UITM_ItemCategories_C_BTN_SkinColorClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ItemCategories.ITM_ItemCategories_C.BTN_EyebrowsClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UITM_ItemCategories_C::BTN_EyebrowsClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ItemCategories.ITM_ItemCategories_C.BTN_EyebrowsClicked__DelegateSignature");

	UITM_ItemCategories_C_BTN_EyebrowsClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ItemCategories.ITM_ItemCategories_C.BTN_BeardClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UITM_ItemCategories_C::BTN_BeardClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ItemCategories.ITM_ItemCategories_C.BTN_BeardClicked__DelegateSignature");

	UITM_ItemCategories_C_BTN_BeardClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ItemCategories.ITM_ItemCategories_C.BTN_ArmorClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UITM_ItemCategories_C::BTN_ArmorClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ItemCategories.ITM_ItemCategories_C.BTN_ArmorClicked__DelegateSignature");

	UITM_ItemCategories_C_BTN_ArmorClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
