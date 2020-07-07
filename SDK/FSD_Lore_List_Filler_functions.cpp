// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Lore_List_Filler_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Lore_List_Filler.Lore_List_Filler_C.SetSize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Number_Of_Buttons              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULore_List_Filler_C::SetSize(int* Number_Of_Buttons)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lore_List_Filler.Lore_List_Filler_C.SetSize");

	ULore_List_Filler_C_SetSize_Params params;
	params.Number_Of_Buttons = Number_Of_Buttons;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lore_List_Filler.Lore_List_Filler_C.DecrementSize
// (BlueprintCallable, BlueprintEvent)

void ULore_List_Filler_C::DecrementSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lore_List_Filler.Lore_List_Filler_C.DecrementSize");

	ULore_List_Filler_C_DecrementSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lore_List_Filler.Lore_List_Filler_C.ExecuteUbergraph_Lore_List_Filler
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULore_List_Filler_C::ExecuteUbergraph_Lore_List_Filler(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lore_List_Filler.Lore_List_Filler_C.ExecuteUbergraph_Lore_List_Filler");

	ULore_List_Filler_C_ExecuteUbergraph_Lore_List_Filler_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lore_List_Filler.Lore_List_Filler_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULore_List_Filler_C::OnClicked__DelegateSignature(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lore_List_Filler.Lore_List_Filler_C.OnClicked__DelegateSignature");

	ULore_List_Filler_C_OnClicked__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
