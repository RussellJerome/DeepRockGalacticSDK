// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ConsoleScreen_SelectCharacterOnly_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ConsoleScreen_SelectCharacterOnly.ConsoleScreen_SelectCharacterOnly_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UConsoleScreen_SelectCharacterOnly_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_SelectCharacterOnly.ConsoleScreen_SelectCharacterOnly_C.Construct");

	UConsoleScreen_SelectCharacterOnly_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleScreen_SelectCharacterOnly.ConsoleScreen_SelectCharacterOnly_C.ExecuteUbergraph_ConsoleScreen_SelectCharacterOnly
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsoleScreen_SelectCharacterOnly_C::ExecuteUbergraph_ConsoleScreen_SelectCharacterOnly(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_SelectCharacterOnly.ConsoleScreen_SelectCharacterOnly_C.ExecuteUbergraph_ConsoleScreen_SelectCharacterOnly");

	UConsoleScreen_SelectCharacterOnly_C_ExecuteUbergraph_ConsoleScreen_SelectCharacterOnly_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
