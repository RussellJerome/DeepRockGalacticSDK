// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Lore_Content_Weaknesses_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Lore_Content_Weaknesses.Lore_Content_Weaknesses_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULore_Content_Weaknesses_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lore_Content_Weaknesses.Lore_Content_Weaknesses_C.PreConstruct");

	ULore_Content_Weaknesses_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lore_Content_Weaknesses.Lore_Content_Weaknesses_C.ClearChildren
// (BlueprintCallable, BlueprintEvent)

void ULore_Content_Weaknesses_C::ClearChildren()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lore_Content_Weaknesses.Lore_Content_Weaknesses_C.ClearChildren");

	ULore_Content_Weaknesses_C_ClearChildren_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lore_Content_Weaknesses.Lore_Content_Weaknesses_C.AddIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageTypeDescription* Icon                           (BlueprintVisible, BlueprintReadOnly, Parm)

void ULore_Content_Weaknesses_C::AddIcon(struct FDamageTypeDescription* Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lore_Content_Weaknesses.Lore_Content_Weaknesses_C.AddIcon");

	ULore_Content_Weaknesses_C_AddIcon_Params params;
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lore_Content_Weaknesses.Lore_Content_Weaknesses_C.PlayFade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Forward                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULore_Content_Weaknesses_C::PlayFade(bool* Forward)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lore_Content_Weaknesses.Lore_Content_Weaknesses_C.PlayFade");

	ULore_Content_Weaknesses_C_PlayFade_Params params;
	params.Forward = Forward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lore_Content_Weaknesses.Lore_Content_Weaknesses_C.ExecuteUbergraph_Lore_Content_Weaknesses
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULore_Content_Weaknesses_C::ExecuteUbergraph_Lore_Content_Weaknesses(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lore_Content_Weaknesses.Lore_Content_Weaknesses_C.ExecuteUbergraph_Lore_Content_Weaknesses");

	ULore_Content_Weaknesses_C_ExecuteUbergraph_Lore_Content_Weaknesses_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
