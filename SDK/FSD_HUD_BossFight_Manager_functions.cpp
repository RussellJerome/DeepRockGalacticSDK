// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_BossFight_Manager_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_BossFight_Manager.HUD_BossFight_Manager_C.AddBossFight
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBossFight*             BossFight                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UHUD_BossFight_Manager_C::AddBossFight(struct FBossFight* BossFight)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_BossFight_Manager.HUD_BossFight_Manager_C.AddBossFight");

	UHUD_BossFight_Manager_C_AddBossFight_Params params;
	params.BossFight = BossFight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_BossFight_Manager.HUD_BossFight_Manager_C.OnLoaded_7CEF0B6F41A50A9529F16780A3E45EE9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_BossFight_Manager_C::OnLoaded_7CEF0B6F41A50A9529F16780A3E45EE9(class UClass** Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_BossFight_Manager.HUD_BossFight_Manager_C.OnLoaded_7CEF0B6F41A50A9529F16780A3E45EE9");

	UHUD_BossFight_Manager_C_OnLoaded_7CEF0B6F41A50A9529F16780A3E45EE9_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_BossFight_Manager.HUD_BossFight_Manager_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_BossFight_Manager_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_BossFight_Manager.HUD_BossFight_Manager_C.Construct");

	UHUD_BossFight_Manager_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_BossFight_Manager.HUD_BossFight_Manager_C.OnNewBossFight
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBossFight*             BossFight                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UHUD_BossFight_Manager_C::OnNewBossFight(struct FBossFight* BossFight)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_BossFight_Manager.HUD_BossFight_Manager_C.OnNewBossFight");

	UHUD_BossFight_Manager_C_OnNewBossFight_Params params;
	params.BossFight = BossFight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_BossFight_Manager.HUD_BossFight_Manager_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_BossFight_Manager_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_BossFight_Manager.HUD_BossFight_Manager_C.PreConstruct");

	UHUD_BossFight_Manager_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_BossFight_Manager.HUD_BossFight_Manager_C.ExecuteUbergraph_HUD_BossFight_Manager
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_BossFight_Manager_C::ExecuteUbergraph_HUD_BossFight_Manager(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_BossFight_Manager.HUD_BossFight_Manager_C.ExecuteUbergraph_HUD_BossFight_Manager");

	UHUD_BossFight_Manager_C_ExecuteUbergraph_HUD_BossFight_Manager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
