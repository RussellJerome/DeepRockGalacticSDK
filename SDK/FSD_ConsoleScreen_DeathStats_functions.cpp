// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ConsoleScreen_DeathStats_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ConsoleScreen_DeathStats.ConsoleScreen_DeathStats_C.SetStatsOwner
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFSDPlayerState**        Player_State                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UConsoleScreen_DeathStats_C::SetStatsOwner(class AFSDPlayerState** Player_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_DeathStats.ConsoleScreen_DeathStats_C.SetStatsOwner");

	UConsoleScreen_DeathStats_C_SetStatsOwner_Params params;
	params.Player_State = Player_State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleScreen_DeathStats.ConsoleScreen_DeathStats_C.ExecuteUbergraph_ConsoleScreen_DeathStats
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsoleScreen_DeathStats_C::ExecuteUbergraph_ConsoleScreen_DeathStats(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_DeathStats.ConsoleScreen_DeathStats_C.ExecuteUbergraph_ConsoleScreen_DeathStats");

	UConsoleScreen_DeathStats_C_ExecuteUbergraph_ConsoleScreen_DeathStats_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
