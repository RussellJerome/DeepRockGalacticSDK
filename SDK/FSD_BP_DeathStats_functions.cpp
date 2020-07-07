// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_DeathStats_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DeathStats.BP_DeathStats_C.Set Stats Owner
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFSDPlayerState**        Player_State                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DeathStats_C::Set_Stats_Owner(class AFSDPlayerState** Player_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeathStats.BP_DeathStats_C.Set Stats Owner");

	ABP_DeathStats_C_Set_Stats_Owner_Params params;
	params.Player_State = Player_State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeathStats.BP_DeathStats_C.ExecuteUbergraph_BP_DeathStats
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DeathStats_C::ExecuteUbergraph_BP_DeathStats(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeathStats.BP_DeathStats_C.ExecuteUbergraph_BP_DeathStats");

	ABP_DeathStats_C_ExecuteUbergraph_BP_DeathStats_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
