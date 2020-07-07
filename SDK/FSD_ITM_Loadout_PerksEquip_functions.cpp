// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_Loadout_PerksEquip_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.GetEquippedPerksByType
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 InCharacterClass               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EPerkUsageType*                InType                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UPerkAsset*>      OutPerks                       (Parm, OutParm, ZeroConstructor)

void UITM_Loadout_PerksEquip_C::GetEquippedPerksByType(class UClass** InCharacterClass, EPerkUsageType* InType, TArray<class UPerkAsset*>* OutPerks)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.GetEquippedPerksByType");

	UITM_Loadout_PerksEquip_C_GetEquippedPerksByType_Params params;
	params.InCharacterClass = InCharacterClass;
	params.InType = InType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPerks != nullptr)
		*OutPerks = params.OutPerks;
}


// Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.SelectSlot
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_LoadOut_PerksEquip_Slot_C** InSlot                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_Loadout_PerksEquip_C::SelectSlot(class UITM_LoadOut_PerksEquip_Slot_C** InSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.SelectSlot");

	UITM_Loadout_PerksEquip_C_SelectSlot_Params params;
	params.InSlot = InSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.CreateSlots
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVerticalBox**           InSlotsBox                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UClass**                 InCharacter                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EPerkUsageType*                InType                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Loadout_PerksEquip_C::CreateSlots(class UVerticalBox** InSlotsBox, class UClass** InCharacter, EPerkUsageType* InType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.CreateSlots");

	UITM_Loadout_PerksEquip_C_CreateSlots_Params params;
	params.InSlotsBox = InSlotsBox;
	params.InCharacter = InCharacter;
	params.InType = InType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.UpdateSlots
// (Private, BlueprintCallable, BlueprintEvent)

void UITM_Loadout_PerksEquip_C::UpdateSlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.UpdateSlots");

	UITM_Loadout_PerksEquip_C_UpdateSlots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.Get_PerkStar_ToolTipWidget_1
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UITM_Loadout_PerksEquip_C::Get_PerkStar_ToolTipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.Get_PerkStar_ToolTipWidget_1");

	UITM_Loadout_PerksEquip_C_Get_PerkStar_ToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.GetEquippedPerkAt
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UPerkAsset*>*     TargetArray                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UPerkAsset*              Perk                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_Loadout_PerksEquip_C::GetEquippedPerkAt(int* Index, TArray<class UPerkAsset*>* TargetArray, class UPerkAsset** Perk)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.GetEquippedPerkAt");

	UITM_Loadout_PerksEquip_C_GetEquippedPerkAt_Params params;
	params.Index = Index;
	params.TargetArray = TargetArray;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Perk != nullptr)
		*Perk = params.Perk;
}


// Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.UpdateEquippedPerks
// (Private, BlueprintCallable, BlueprintEvent)

void UITM_Loadout_PerksEquip_C::UpdateEquippedPerks()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.UpdateEquippedPerks");

	UITM_Loadout_PerksEquip_C_UpdateEquippedPerks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.Set Character Class
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 CharacterClass                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Loadout_PerksEquip_C::Set_Character_Class(class UClass** CharacterClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.Set Character Class");

	UITM_Loadout_PerksEquip_C_Set_Character_Class_Params params;
	params.CharacterClass = CharacterClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.BndEvt__ITM_Loadout_PerksEquip_Selection_K2Node_ComponentBoundEvent_4_OnPerkClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPerkAsset**             PerkAsset                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Loadout_PerksEquip_C::BndEvt__ITM_Loadout_PerksEquip_Selection_K2Node_ComponentBoundEvent_4_OnPerkClicked__DelegateSignature(class UPerkAsset** PerkAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.BndEvt__ITM_Loadout_PerksEquip_Selection_K2Node_ComponentBoundEvent_4_OnPerkClicked__DelegateSignature");

	UITM_Loadout_PerksEquip_C_BndEvt__ITM_Loadout_PerksEquip_Selection_K2Node_ComponentBoundEvent_4_OnPerkClicked__DelegateSignature_Params params;
	params.PerkAsset = PerkAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_Loadout_PerksEquip_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.Construct");

	UITM_Loadout_PerksEquip_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Loadout_PerksEquip_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.PreConstruct");

	UITM_Loadout_PerksEquip_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.ExecuteUbergraph_ITM_Loadout_PerksEquip
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Loadout_PerksEquip_C::ExecuteUbergraph_ITM_Loadout_PerksEquip(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.ExecuteUbergraph_ITM_Loadout_PerksEquip");

	UITM_Loadout_PerksEquip_C_ExecuteUbergraph_ITM_Loadout_PerksEquip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
