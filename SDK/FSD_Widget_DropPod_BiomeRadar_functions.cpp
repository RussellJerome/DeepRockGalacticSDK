// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Widget_DropPod_BiomeRadar_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_DropPod_BiomeRadar.Widget_DropPod_BiomeRadar_C.SetGeneratedMission
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGeneratedMission**      In_Mission                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_DropPod_BiomeRadar_C::SetGeneratedMission(class UGeneratedMission** In_Mission)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DropPod_BiomeRadar.Widget_DropPod_BiomeRadar_C.SetGeneratedMission");

	UWidget_DropPod_BiomeRadar_C_SetGeneratedMission_Params params;
	params.In_Mission = In_Mission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DropPod_BiomeRadar.Widget_DropPod_BiomeRadar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_DropPod_BiomeRadar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DropPod_BiomeRadar.Widget_DropPod_BiomeRadar_C.Construct");

	UWidget_DropPod_BiomeRadar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DropPod_BiomeRadar.Widget_DropPod_BiomeRadar_C.OnGeneratedMissionChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGeneratedMission**      OutGeneratedMission            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_DropPod_BiomeRadar_C::OnGeneratedMissionChanged(class UGeneratedMission** OutGeneratedMission)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DropPod_BiomeRadar.Widget_DropPod_BiomeRadar_C.OnGeneratedMissionChanged");

	UWidget_DropPod_BiomeRadar_C_OnGeneratedMissionChanged_Params params;
	params.OutGeneratedMission = OutGeneratedMission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DropPod_BiomeRadar.Widget_DropPod_BiomeRadar_C.ExecuteUbergraph_Widget_DropPod_BiomeRadar
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_DropPod_BiomeRadar_C::ExecuteUbergraph_Widget_DropPod_BiomeRadar(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DropPod_BiomeRadar.Widget_DropPod_BiomeRadar_C.ExecuteUbergraph_Widget_DropPod_BiomeRadar");

	UWidget_DropPod_BiomeRadar_C_ExecuteUbergraph_Widget_DropPod_BiomeRadar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
