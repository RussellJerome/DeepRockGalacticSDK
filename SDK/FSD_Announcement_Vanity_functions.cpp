// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Announcement_Vanity_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Announcement_Vanity.Announcement_Vanity_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnnouncement_Vanity_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Vanity.Announcement_Vanity_C.PreConstruct");

	UAnnouncement_Vanity_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_Vanity.Announcement_Vanity_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAnnouncement_Vanity_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Vanity.Announcement_Vanity_C.Construct");

	UAnnouncement_Vanity_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_Vanity.Announcement_Vanity_C.OnAnnounceAnimFinished
// (BlueprintCallable, BlueprintEvent)

void UAnnouncement_Vanity_C::OnAnnounceAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Vanity.Announcement_Vanity_C.OnAnnounceAnimFinished");

	UAnnouncement_Vanity_C_OnAnnounceAnimFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_Vanity.Announcement_Vanity_C.ExecuteUbergraph_Announcement_Vanity
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnnouncement_Vanity_C::ExecuteUbergraph_Announcement_Vanity(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Vanity.Announcement_Vanity_C.ExecuteUbergraph_Announcement_Vanity");

	UAnnouncement_Vanity_C_ExecuteUbergraph_Announcement_Vanity_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
