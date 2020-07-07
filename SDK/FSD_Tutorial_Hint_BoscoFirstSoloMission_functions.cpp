// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Tutorial_Hint_BoscoFirstSoloMission_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Tutorial_Hint_BoscoFirstSoloMission.Tutorial_Hint_BoscoFirstSoloMission_C.ReceiveOnInitialized
// (Event, Protected, BlueprintEvent)

void UTutorial_Hint_BoscoFirstSoloMission_C::ReceiveOnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_BoscoFirstSoloMission.Tutorial_Hint_BoscoFirstSoloMission_C.ReceiveOnInitialized");

	UTutorial_Hint_BoscoFirstSoloMission_C_ReceiveOnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tutorial_Hint_BoscoFirstSoloMission.Tutorial_Hint_BoscoFirstSoloMission_C.OnLaserPointerEvent
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLaserPointerTarget*    HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UTutorial_Hint_BoscoFirstSoloMission_C::OnLaserPointerEvent(struct FLaserPointerTarget* HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_BoscoFirstSoloMission.Tutorial_Hint_BoscoFirstSoloMission_C.OnLaserPointerEvent");

	UTutorial_Hint_BoscoFirstSoloMission_C_OnLaserPointerEvent_Params params;
	params.HitInfo = HitInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tutorial_Hint_BoscoFirstSoloMission.Tutorial_Hint_BoscoFirstSoloMission_C.ExecuteUbergraph_Tutorial_Hint_BoscoFirstSoloMission
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTutorial_Hint_BoscoFirstSoloMission_C::ExecuteUbergraph_Tutorial_Hint_BoscoFirstSoloMission(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_BoscoFirstSoloMission.Tutorial_Hint_BoscoFirstSoloMission_C.ExecuteUbergraph_Tutorial_Hint_BoscoFirstSoloMission");

	UTutorial_Hint_BoscoFirstSoloMission_C_ExecuteUbergraph_Tutorial_Hint_BoscoFirstSoloMission_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
