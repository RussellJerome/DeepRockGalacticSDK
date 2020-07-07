// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_AOE_Grenade_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_AOE_Grenade_Base.ITM_AOE_Grenade_Base_C.OnExploded
// (Event, Protected, BlueprintEvent)

void AITM_AOE_Grenade_Base_C::OnExploded()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_AOE_Grenade_Base.ITM_AOE_Grenade_Base_C.OnExploded");

	AITM_AOE_Grenade_Base_C_OnExploded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_AOE_Grenade_Base.ITM_AOE_Grenade_Base_C.ExecuteUbergraph_ITM_AOE_Grenade_Base
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AITM_AOE_Grenade_Base_C::ExecuteUbergraph_ITM_AOE_Grenade_Base(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_AOE_Grenade_Base.ITM_AOE_Grenade_Base_C.ExecuteUbergraph_ITM_AOE_Grenade_Base");

	AITM_AOE_Grenade_Base_C_ExecuteUbergraph_ITM_AOE_Grenade_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
