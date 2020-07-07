// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ConsoleScreen_DeepDive_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ConsoleScreen_DeepDive.ConsoleScreen_DeepDive_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UConsoleScreen_DeepDive_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_DeepDive.ConsoleScreen_DeepDive_C.Construct");

	UConsoleScreen_DeepDive_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleScreen_DeepDive.ConsoleScreen_DeepDive_C.ExecuteUbergraph_ConsoleScreen_DeepDive
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsoleScreen_DeepDive_C::ExecuteUbergraph_ConsoleScreen_DeepDive(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_DeepDive.ConsoleScreen_DeepDive_C.ExecuteUbergraph_ConsoleScreen_DeepDive");

	UConsoleScreen_DeepDive_C_ExecuteUbergraph_ConsoleScreen_DeepDive_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
