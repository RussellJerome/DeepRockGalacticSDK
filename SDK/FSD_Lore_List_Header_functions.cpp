// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Lore_List_Header_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Lore_List_Header.Lore_List_Header_C.SetText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Headline                       (BlueprintVisible, BlueprintReadOnly, Parm)

void ULore_List_Header_C::SetText(struct FText* Headline)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lore_List_Header.Lore_List_Header_C.SetText");

	ULore_List_Header_C_SetText_Params params;
	params.Headline = Headline;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lore_List_Header.Lore_List_Header_C.ExecuteUbergraph_Lore_List_Header
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULore_List_Header_C::ExecuteUbergraph_Lore_List_Header(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lore_List_Header.Lore_List_Header_C.ExecuteUbergraph_Lore_List_Header");

	ULore_List_Header_C_ExecuteUbergraph_Lore_List_Header_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
