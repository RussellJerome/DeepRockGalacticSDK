// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_PerkInfoBox_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_PerkInfoBox.ITM_PerkInfoBox_C.GetEquippedPerkAt
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           Idx                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UPerkAsset*>      perks                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UPerkAsset*              Perk                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_PerkInfoBox_C::GetEquippedPerkAt(int* Idx, TArray<class UPerkAsset*>* perks, class UPerkAsset** Perk)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_PerkInfoBox.ITM_PerkInfoBox_C.GetEquippedPerkAt");

	UITM_PerkInfoBox_C_GetEquippedPerkAt_Params params;
	params.Idx = Idx;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (perks != nullptr)
		*perks = params.perks;
	if (Perk != nullptr)
		*Perk = params.Perk;
}


// Function ITM_PerkInfoBox.ITM_PerkInfoBox_C.CreateSlots
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget**           InSlotsBox                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EPerkUsageType*                InType                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_PerkInfoBox_C::CreateSlots(class UPanelWidget** InSlotsBox, EPerkUsageType* InType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_PerkInfoBox.ITM_PerkInfoBox_C.CreateSlots");

	UITM_PerkInfoBox_C_CreateSlots_Params params;
	params.InSlotsBox = InSlotsBox;
	params.InType = InType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_PerkInfoBox.ITM_PerkInfoBox_C.GetEquippedPerksByType
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 InCharacter                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EPerkUsageType*                InType                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UPerkAsset*>      perks                          (Parm, OutParm, ZeroConstructor)

void UITM_PerkInfoBox_C::GetEquippedPerksByType(class UClass** InCharacter, EPerkUsageType* InType, TArray<class UPerkAsset*>* perks)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_PerkInfoBox.ITM_PerkInfoBox_C.GetEquippedPerksByType");

	UITM_PerkInfoBox_C_GetEquippedPerksByType_Params params;
	params.InCharacter = InCharacter;
	params.InType = InType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (perks != nullptr)
		*perks = params.perks;
}


// Function ITM_PerkInfoBox.ITM_PerkInfoBox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_PerkInfoBox_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_PerkInfoBox.ITM_PerkInfoBox_C.Construct");

	UITM_PerkInfoBox_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_PerkInfoBox.ITM_PerkInfoBox_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_PerkInfoBox_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_PerkInfoBox.ITM_PerkInfoBox_C.PreConstruct");

	UITM_PerkInfoBox_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_PerkInfoBox.ITM_PerkInfoBox_C.Update
// (BlueprintCallable, BlueprintEvent)

void UITM_PerkInfoBox_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_PerkInfoBox.ITM_PerkInfoBox_C.Update");

	UITM_PerkInfoBox_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_PerkInfoBox.ITM_PerkInfoBox_C.ExecuteUbergraph_ITM_PerkInfoBox
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_PerkInfoBox_C::ExecuteUbergraph_ITM_PerkInfoBox(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_PerkInfoBox.ITM_PerkInfoBox_C.ExecuteUbergraph_ITM_PerkInfoBox");

	UITM_PerkInfoBox_C_ExecuteUbergraph_ITM_PerkInfoBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
