// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_MasteryReward_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_MasteryReward.UI_MasteryReward_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_MasteryReward_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasteryReward.UI_MasteryReward_C.Construct");

	UUI_MasteryReward_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MasteryReward.UI_MasteryReward_C.ExecuteUbergraph_UI_MasteryReward
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_MasteryReward_C::ExecuteUbergraph_UI_MasteryReward(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasteryReward.UI_MasteryReward_C.ExecuteUbergraph_UI_MasteryReward");

	UUI_MasteryReward_C_ExecuteUbergraph_UI_MasteryReward_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
