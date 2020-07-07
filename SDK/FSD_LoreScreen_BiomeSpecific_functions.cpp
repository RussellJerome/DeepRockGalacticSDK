// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_LoreScreen_BiomeSpecific_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LoreScreen_BiomeSpecific.LoreScreen_BiomeSpecific_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULoreScreen_BiomeSpecific_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoreScreen_BiomeSpecific.LoreScreen_BiomeSpecific_C.Construct");

	ULoreScreen_BiomeSpecific_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoreScreen_BiomeSpecific.LoreScreen_BiomeSpecific_C.RefreshContent
// (BlueprintCallable, BlueprintEvent)

void ULoreScreen_BiomeSpecific_C::RefreshContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoreScreen_BiomeSpecific.LoreScreen_BiomeSpecific_C.RefreshContent");

	ULoreScreen_BiomeSpecific_C_RefreshContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoreScreen_BiomeSpecific.LoreScreen_BiomeSpecific_C.ExecuteUbergraph_LoreScreen_BiomeSpecific
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoreScreen_BiomeSpecific_C::ExecuteUbergraph_LoreScreen_BiomeSpecific(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoreScreen_BiomeSpecific.LoreScreen_BiomeSpecific_C.ExecuteUbergraph_LoreScreen_BiomeSpecific");

	ULoreScreen_BiomeSpecific_C_ExecuteUbergraph_LoreScreen_BiomeSpecific_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
