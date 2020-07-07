// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Announcement_Schematic_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Announcement_Schematic.Announcement_Schematic_C.SetTitleProgress
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         InProgress                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnnouncement_Schematic_C::SetTitleProgress(float* InProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Schematic.Announcement_Schematic_C.SetTitleProgress");

	UAnnouncement_Schematic_C_SetTitleProgress_Params params;
	params.InProgress = InProgress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_Schematic.Announcement_Schematic_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnnouncement_Schematic_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Schematic.Announcement_Schematic_C.PreConstruct");

	UAnnouncement_Schematic_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_Schematic.Announcement_Schematic_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAnnouncement_Schematic_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Schematic.Announcement_Schematic_C.Construct");

	UAnnouncement_Schematic_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_Schematic.Announcement_Schematic_C.OnAnnounceAnimFinished
// (BlueprintCallable, BlueprintEvent)

void UAnnouncement_Schematic_C::OnAnnounceAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Schematic.Announcement_Schematic_C.OnAnnounceAnimFinished");

	UAnnouncement_Schematic_C_OnAnnounceAnimFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_Schematic.Announcement_Schematic_C.ExecuteUbergraph_Announcement_Schematic
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnnouncement_Schematic_C::ExecuteUbergraph_Announcement_Schematic(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Schematic.Announcement_Schematic_C.ExecuteUbergraph_Announcement_Schematic");

	UAnnouncement_Schematic_C_ExecuteUbergraph_Announcement_Schematic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
