#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_MixerAnnouncement_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_MixerAnnouncement.HUD_MixerAnnouncement_C.Construct
struct UHUD_MixerAnnouncement_C_Construct_Params
{
};

// Function HUD_MixerAnnouncement.HUD_MixerAnnouncement_C.OnMixerAnnouncement
struct UHUD_MixerAnnouncement_C_OnMixerAnnouncement_Params
{
	struct FFSD_FMixerAnnouncement*                    Announcement;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function HUD_MixerAnnouncement.HUD_MixerAnnouncement_C.PreConstruct
struct UHUD_MixerAnnouncement_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_MixerAnnouncement.HUD_MixerAnnouncement_C.ExecuteUbergraph_HUD_MixerAnnouncement
struct UHUD_MixerAnnouncement_C_ExecuteUbergraph_HUD_MixerAnnouncement_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
