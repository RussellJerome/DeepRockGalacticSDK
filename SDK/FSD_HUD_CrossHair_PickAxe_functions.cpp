// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_CrossHair_PickAxe_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_CrossHair_PickAxe.HUD_CrossHair_PickAxe_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_CrossHair_PickAxe_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CrossHair_PickAxe.HUD_CrossHair_PickAxe_C.PreConstruct");

	UHUD_CrossHair_PickAxe_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_CrossHair_PickAxe.HUD_CrossHair_PickAxe_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AManualMiningItem**      pickAxe                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_CrossHair_PickAxe_C::SetData(class AManualMiningItem** pickAxe)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CrossHair_PickAxe.HUD_CrossHair_PickAxe_C.SetData");

	UHUD_CrossHair_PickAxe_C_SetData_Params params;
	params.pickAxe = pickAxe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_CrossHair_PickAxe.HUD_CrossHair_PickAxe_C.ActiveMiningEvent_Triggered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_CrossHair_PickAxe_C::ActiveMiningEvent_Triggered(bool* success)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CrossHair_PickAxe.HUD_CrossHair_PickAxe_C.ActiveMiningEvent_Triggered");

	UHUD_CrossHair_PickAxe_C_ActiveMiningEvent_Triggered_Params params;
	params.success = success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_CrossHair_PickAxe.HUD_CrossHair_PickAxe_C.ExecuteUbergraph_HUD_CrossHair_PickAxe
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_CrossHair_PickAxe_C::ExecuteUbergraph_HUD_CrossHair_PickAxe(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CrossHair_PickAxe.HUD_CrossHair_PickAxe_C.ExecuteUbergraph_HUD_CrossHair_PickAxe");

	UHUD_CrossHair_PickAxe_C_ExecuteUbergraph_HUD_CrossHair_PickAxe_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
