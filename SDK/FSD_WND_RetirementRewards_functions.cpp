// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WND_RetirementRewards_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WND_RetirementRewards.WND_RetirementRewards_C.GetData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FClaimableRewardView    OutData                        (Parm, OutParm)

void UWND_RetirementRewards_C::GetData(struct FClaimableRewardView* OutData)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_RetirementRewards.WND_RetirementRewards_C.GetData");

	UWND_RetirementRewards_C_GetData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutData != nullptr)
		*OutData = params.OutData;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
