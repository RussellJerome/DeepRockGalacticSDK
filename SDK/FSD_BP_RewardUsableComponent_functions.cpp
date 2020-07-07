// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_RewardUsableComponent_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_RewardUsableComponent.BP_RewardUsableComponent_C.CreateUseText
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int*                           blankSchematicCount            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_RewardUsableComponent_C::CreateUseText(int* blankSchematicCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardUsableComponent.BP_RewardUsableComponent_C.CreateUseText");

	UBP_RewardUsableComponent_C_CreateUseText_Params params;
	params.blankSchematicCount = blankSchematicCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
