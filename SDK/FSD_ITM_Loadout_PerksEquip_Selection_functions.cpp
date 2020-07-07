// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_Loadout_PerksEquip_Selection_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_Loadout_PerksEquip_Selection.ITM_Loadout_PerksEquip_Selection_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Loadout_PerksEquip_Selection_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_PerksEquip_Selection.ITM_Loadout_PerksEquip_Selection_C.PreConstruct");

	UITM_Loadout_PerksEquip_Selection_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Loadout_PerksEquip_Selection.ITM_Loadout_PerksEquip_Selection_C.Refresh
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 CharacterClass                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EPerkUsageType*                PerkType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Loadout_PerksEquip_Selection_C::Refresh(class UClass** CharacterClass, EPerkUsageType* PerkType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_PerksEquip_Selection.ITM_Loadout_PerksEquip_Selection_C.Refresh");

	UITM_Loadout_PerksEquip_Selection_C_Refresh_Params params;
	params.CharacterClass = CharacterClass;
	params.PerkType = PerkType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Loadout_PerksEquip_Selection.ITM_Loadout_PerksEquip_Selection_C.Add Perk
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPerkAsset**             Perk                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Loadout_PerksEquip_Selection_C::Add_Perk(class UPerkAsset** Perk)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_PerksEquip_Selection.ITM_Loadout_PerksEquip_Selection_C.Add Perk");

	UITM_Loadout_PerksEquip_Selection_C_Add_Perk_Params params;
	params.Perk = Perk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Loadout_PerksEquip_Selection.ITM_Loadout_PerksEquip_Selection_C.OnClicked_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_LoadOut_PerksEquip_Item_C** Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_Loadout_PerksEquip_Selection_C::OnClicked_Event(class UITM_LoadOut_PerksEquip_Item_C** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_PerksEquip_Selection.ITM_Loadout_PerksEquip_Selection_C.OnClicked_Event");

	UITM_Loadout_PerksEquip_Selection_C_OnClicked_Event_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Loadout_PerksEquip_Selection.ITM_Loadout_PerksEquip_Selection_C.Add None
// (BlueprintCallable, BlueprintEvent)

void UITM_Loadout_PerksEquip_Selection_C::Add_None()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_PerksEquip_Selection.ITM_Loadout_PerksEquip_Selection_C.Add None");

	UITM_Loadout_PerksEquip_Selection_C_Add_None_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Loadout_PerksEquip_Selection.ITM_Loadout_PerksEquip_Selection_C.OnNoneClicked_Event
// (BlueprintCallable, BlueprintEvent)

void UITM_Loadout_PerksEquip_Selection_C::OnNoneClicked_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_PerksEquip_Selection.ITM_Loadout_PerksEquip_Selection_C.OnNoneClicked_Event");

	UITM_Loadout_PerksEquip_Selection_C_OnNoneClicked_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Loadout_PerksEquip_Selection.ITM_Loadout_PerksEquip_Selection_C.ExecuteUbergraph_ITM_Loadout_PerksEquip_Selection
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Loadout_PerksEquip_Selection_C::ExecuteUbergraph_ITM_Loadout_PerksEquip_Selection(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_PerksEquip_Selection.ITM_Loadout_PerksEquip_Selection_C.ExecuteUbergraph_ITM_Loadout_PerksEquip_Selection");

	UITM_Loadout_PerksEquip_Selection_C_ExecuteUbergraph_ITM_Loadout_PerksEquip_Selection_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Loadout_PerksEquip_Selection.ITM_Loadout_PerksEquip_Selection_C.OnPerkClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPerkAsset**             PerkAsset                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Loadout_PerksEquip_Selection_C::OnPerkClicked__DelegateSignature(class UPerkAsset** PerkAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_PerksEquip_Selection.ITM_Loadout_PerksEquip_Selection_C.OnPerkClicked__DelegateSignature");

	UITM_Loadout_PerksEquip_Selection_C_OnPerkClicked__DelegateSignature_Params params;
	params.PerkAsset = PerkAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
