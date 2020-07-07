// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_Community_Console_ClaimReward_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_Community_Console_ClaimReward.ITM_Community_Console_ClaimReward_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Community_Console_ClaimReward_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Community_Console_ClaimReward.ITM_Community_Console_ClaimReward_C.PreConstruct");

	UITM_Community_Console_ClaimReward_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Community_Console_ClaimReward.ITM_Community_Console_ClaimReward_C.ExecuteUbergraph_ITM_Community_Console_ClaimReward
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Community_Console_ClaimReward_C::ExecuteUbergraph_ITM_Community_Console_ClaimReward(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Community_Console_ClaimReward.ITM_Community_Console_ClaimReward_C.ExecuteUbergraph_ITM_Community_Console_ClaimReward");

	UITM_Community_Console_ClaimReward_C_ExecuteUbergraph_ITM_Community_Console_ClaimReward_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
