// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_MixerAnnouncement_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_MixerAnnouncement.HUD_MixerAnnouncement_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_MixerAnnouncement_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_MixerAnnouncement.HUD_MixerAnnouncement_C.Construct");

	UHUD_MixerAnnouncement_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_MixerAnnouncement.HUD_MixerAnnouncement_C.OnMixerAnnouncement
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFSD_FMixerAnnouncement* Announcement                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UHUD_MixerAnnouncement_C::OnMixerAnnouncement(struct FFSD_FMixerAnnouncement* Announcement)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_MixerAnnouncement.HUD_MixerAnnouncement_C.OnMixerAnnouncement");

	UHUD_MixerAnnouncement_C_OnMixerAnnouncement_Params params;
	params.Announcement = Announcement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_MixerAnnouncement.HUD_MixerAnnouncement_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_MixerAnnouncement_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_MixerAnnouncement.HUD_MixerAnnouncement_C.PreConstruct");

	UHUD_MixerAnnouncement_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_MixerAnnouncement.HUD_MixerAnnouncement_C.ExecuteUbergraph_HUD_MixerAnnouncement
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_MixerAnnouncement_C::ExecuteUbergraph_HUD_MixerAnnouncement(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_MixerAnnouncement.HUD_MixerAnnouncement_C.ExecuteUbergraph_HUD_MixerAnnouncement");

	UHUD_MixerAnnouncement_C_ExecuteUbergraph_HUD_MixerAnnouncement_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
