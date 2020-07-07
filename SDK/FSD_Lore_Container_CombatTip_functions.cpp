// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Lore_Container_CombatTip_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Lore_Container_CombatTip.Lore_Container_CombatTip_C.SetText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Headline                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  Body                           (BlueprintVisible, BlueprintReadOnly, Parm)

void ULore_Container_CombatTip_C::SetText(struct FText* Headline, struct FText* Body)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lore_Container_CombatTip.Lore_Container_CombatTip_C.SetText");

	ULore_Container_CombatTip_C_SetText_Params params;
	params.Headline = Headline;
	params.Body = Body;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lore_Container_CombatTip.Lore_Container_CombatTip_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULore_Container_CombatTip_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lore_Container_CombatTip.Lore_Container_CombatTip_C.PreConstruct");

	ULore_Container_CombatTip_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lore_Container_CombatTip.Lore_Container_CombatTip_C.PlayIntro
// (BlueprintCallable, BlueprintEvent)

void ULore_Container_CombatTip_C::PlayIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lore_Container_CombatTip.Lore_Container_CombatTip_C.PlayIntro");

	ULore_Container_CombatTip_C_PlayIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lore_Container_CombatTip.Lore_Container_CombatTip_C.ExecuteUbergraph_Lore_Container_CombatTip
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULore_Container_CombatTip_C::ExecuteUbergraph_Lore_Container_CombatTip(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lore_Container_CombatTip.Lore_Container_CombatTip_C.ExecuteUbergraph_Lore_Container_CombatTip");

	ULore_Container_CombatTip_C_ExecuteUbergraph_Lore_Container_CombatTip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
