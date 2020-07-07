#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_CrossHair_PickAxe_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_CrossHair_PickAxe.HUD_CrossHair_PickAxe_C.PreConstruct
struct UHUD_CrossHair_PickAxe_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_CrossHair_PickAxe.HUD_CrossHair_PickAxe_C.SetData
struct UHUD_CrossHair_PickAxe_C_SetData_Params
{
	class AManualMiningItem**                          pickAxe;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_CrossHair_PickAxe.HUD_CrossHair_PickAxe_C.ActiveMiningEvent_Triggered
struct UHUD_CrossHair_PickAxe_C_ActiveMiningEvent_Triggered_Params
{
	bool*                                              success;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_CrossHair_PickAxe.HUD_CrossHair_PickAxe_C.ExecuteUbergraph_HUD_CrossHair_PickAxe
struct UHUD_CrossHair_PickAxe_C_ExecuteUbergraph_HUD_CrossHair_PickAxe_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
