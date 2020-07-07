// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WND_MissionBar_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WND_MissionBar.WND_MissionBar_C.SetMissionType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionStructure*             Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_MissionBar_C::SetMissionType(EMissionStructure* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MissionBar.WND_MissionBar_C.SetMissionType");

	UWND_MissionBar_C_SetMissionType_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_MissionBar.WND_MissionBar_C.SetGeneratedMission
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGeneratedMission**      InMission                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_MissionBar_C::SetGeneratedMission(class UGeneratedMission** InMission)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MissionBar.WND_MissionBar_C.SetGeneratedMission");

	UWND_MissionBar_C_SetGeneratedMission_Params params;
	params.InMission = InMission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_MissionBar.WND_MissionBar_C.OnGeneratedMissionChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGeneratedMission**      OutGeneratedMission            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_MissionBar_C::OnGeneratedMissionChanged(class UGeneratedMission** OutGeneratedMission)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MissionBar.WND_MissionBar_C.OnGeneratedMissionChanged");

	UWND_MissionBar_C_OnGeneratedMissionChanged_Params params;
	params.OutGeneratedMission = OutGeneratedMission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_MissionBar.WND_MissionBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWND_MissionBar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MissionBar.WND_MissionBar_C.Construct");

	UWND_MissionBar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_MissionBar.WND_MissionBar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_MissionBar_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MissionBar.WND_MissionBar_C.PreConstruct");

	UWND_MissionBar_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_MissionBar.WND_MissionBar_C.ExecuteUbergraph_WND_MissionBar
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_MissionBar_C::ExecuteUbergraph_WND_MissionBar(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MissionBar.WND_MissionBar_C.ExecuteUbergraph_WND_MissionBar");

	UWND_MissionBar_C_ExecuteUbergraph_WND_MissionBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
