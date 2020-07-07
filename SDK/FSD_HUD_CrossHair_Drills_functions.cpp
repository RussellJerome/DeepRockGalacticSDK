// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_CrossHair_Drills_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_CrossHair_Drills.HUD_CrossHair_Drills_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_CrossHair_Drills_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CrossHair_Drills.HUD_CrossHair_Drills_C.PreConstruct");

	UHUD_CrossHair_Drills_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_CrossHair_Drills.HUD_CrossHair_Drills_C.ExecuteUbergraph_HUD_CrossHair_Drills
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_CrossHair_Drills_C::ExecuteUbergraph_HUD_CrossHair_Drills(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CrossHair_Drills.HUD_CrossHair_Drills_C.ExecuteUbergraph_HUD_CrossHair_Drills");

	UHUD_CrossHair_Drills_C_ExecuteUbergraph_HUD_CrossHair_Drills_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
