// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_DiscordInstantUsable_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DiscordInstantUsable.BP_DiscordInstantUsable_C.BPCanUse
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class APlayerCharacter**       user                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent**        UseCollider                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_DiscordInstantUsable_C::BPCanUse(class APlayerCharacter** user, class USceneComponent** UseCollider)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DiscordInstantUsable.BP_DiscordInstantUsable_C.BPCanUse");

	UBP_DiscordInstantUsable_C_BPCanUse_Params params;
	params.user = user;
	params.UseCollider = UseCollider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
