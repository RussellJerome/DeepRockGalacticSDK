// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Announcement_PickaxePart_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Announcement_PickaxePart.Announcement_PickaxePart_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAnnouncement_PickaxePart_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_PickaxePart.Announcement_PickaxePart_C.Construct");

	UAnnouncement_PickaxePart_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_PickaxePart.Announcement_PickaxePart_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnnouncement_PickaxePart_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_PickaxePart.Announcement_PickaxePart_C.PreConstruct");

	UAnnouncement_PickaxePart_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_PickaxePart.Announcement_PickaxePart_C.OnAnnounceAnimFinished
// (BlueprintCallable, BlueprintEvent)

void UAnnouncement_PickaxePart_C::OnAnnounceAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_PickaxePart.Announcement_PickaxePart_C.OnAnnounceAnimFinished");

	UAnnouncement_PickaxePart_C_OnAnnounceAnimFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_PickaxePart.Announcement_PickaxePart_C.ExecuteUbergraph_Announcement_PickaxePart
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnnouncement_PickaxePart_C::ExecuteUbergraph_Announcement_PickaxePart(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_PickaxePart.Announcement_PickaxePart_C.ExecuteUbergraph_Announcement_PickaxePart");

	UAnnouncement_PickaxePart_C_ExecuteUbergraph_Announcement_PickaxePart_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
