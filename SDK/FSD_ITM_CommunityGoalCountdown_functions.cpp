// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_CommunityGoalCountdown_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_CommunityGoalCountdown.ITM_CommunityGoalCountdown_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CommunityGoalCountdown_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalCountdown.ITM_CommunityGoalCountdown_C.PreConstruct");

	UITM_CommunityGoalCountdown_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CommunityGoalCountdown.ITM_CommunityGoalCountdown_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CommunityGoalCountdown_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalCountdown.ITM_CommunityGoalCountdown_C.Tick");

	UITM_CommunityGoalCountdown_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CommunityGoalCountdown.ITM_CommunityGoalCountdown_C.SetTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Seconds                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CommunityGoalCountdown_C::SetTime(float* Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalCountdown.ITM_CommunityGoalCountdown_C.SetTime");

	UITM_CommunityGoalCountdown_C_SetTime_Params params;
	params.Seconds = Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CommunityGoalCountdown.ITM_CommunityGoalCountdown_C.ExecuteUbergraph_ITM_CommunityGoalCountdown
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CommunityGoalCountdown_C::ExecuteUbergraph_ITM_CommunityGoalCountdown(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalCountdown.ITM_CommunityGoalCountdown_C.ExecuteUbergraph_ITM_CommunityGoalCountdown");

	UITM_CommunityGoalCountdown_C_ExecuteUbergraph_ITM_CommunityGoalCountdown_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
