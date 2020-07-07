// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Announcement_VictoryPose_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Announcement_VictoryPose.Announcement_VictoryPose_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnnouncement_VictoryPose_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_VictoryPose.Announcement_VictoryPose_C.PreConstruct");

	UAnnouncement_VictoryPose_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_VictoryPose.Announcement_VictoryPose_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAnnouncement_VictoryPose_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_VictoryPose.Announcement_VictoryPose_C.Construct");

	UAnnouncement_VictoryPose_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_VictoryPose.Announcement_VictoryPose_C.OnAnnounceAnimFinished
// (BlueprintCallable, BlueprintEvent)

void UAnnouncement_VictoryPose_C::OnAnnounceAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_VictoryPose.Announcement_VictoryPose_C.OnAnnounceAnimFinished");

	UAnnouncement_VictoryPose_C_OnAnnounceAnimFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_VictoryPose.Announcement_VictoryPose_C.ExecuteUbergraph_Announcement_VictoryPose
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnnouncement_VictoryPose_C::ExecuteUbergraph_Announcement_VictoryPose(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_VictoryPose.Announcement_VictoryPose_C.ExecuteUbergraph_Announcement_VictoryPose");

	UAnnouncement_VictoryPose_C_ExecuteUbergraph_Announcement_VictoryPose_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
