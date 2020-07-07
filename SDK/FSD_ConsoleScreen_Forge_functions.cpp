// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ConsoleScreen_Forge_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ConsoleScreen_Forge.ConsoleScreen_Forge_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UConsoleScreen_Forge_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_Forge.ConsoleScreen_Forge_C.Construct");

	UConsoleScreen_Forge_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleScreen_Forge.ConsoleScreen_Forge_C.ExecuteUbergraph_ConsoleScreen_Forge
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsoleScreen_Forge_C::ExecuteUbergraph_ConsoleScreen_Forge(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_Forge.ConsoleScreen_Forge_C.ExecuteUbergraph_ConsoleScreen_Forge");

	UConsoleScreen_Forge_C_ExecuteUbergraph_ConsoleScreen_Forge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
