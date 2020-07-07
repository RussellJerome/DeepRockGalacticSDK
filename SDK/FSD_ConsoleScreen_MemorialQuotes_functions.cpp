// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ConsoleScreen_MemorialQuotes_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ConsoleScreen_MemorialQuotes.ConsoleScreen_MemorialQuotes_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UConsoleScreen_MemorialQuotes_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_MemorialQuotes.ConsoleScreen_MemorialQuotes_C.Construct");

	UConsoleScreen_MemorialQuotes_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleScreen_MemorialQuotes.ConsoleScreen_MemorialQuotes_C.ExecuteUbergraph_ConsoleScreen_MemorialQuotes
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsoleScreen_MemorialQuotes_C::ExecuteUbergraph_ConsoleScreen_MemorialQuotes(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_MemorialQuotes.ConsoleScreen_MemorialQuotes_C.ExecuteUbergraph_ConsoleScreen_MemorialQuotes");

	UConsoleScreen_MemorialQuotes_C_ExecuteUbergraph_ConsoleScreen_MemorialQuotes_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
