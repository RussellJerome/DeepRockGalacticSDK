// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_MissionStat_PreviewItem_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_MissionStat_PreviewItem.UI_MissionStat_PreviewItem_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_MissionStat_PreviewItem_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStat_PreviewItem.UI_MissionStat_PreviewItem_C.PreConstruct");

	UUI_MissionStat_PreviewItem_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MissionStat_PreviewItem.UI_MissionStat_PreviewItem_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_MissionStat_PreviewItem_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStat_PreviewItem.UI_MissionStat_PreviewItem_C.Tick");

	UUI_MissionStat_PreviewItem_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MissionStat_PreviewItem.UI_MissionStat_PreviewItem_C.SetMissionStat
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMissionStat**           MissionStat                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_MissionStat_PreviewItem_C::SetMissionStat(class UMissionStat** MissionStat)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStat_PreviewItem.UI_MissionStat_PreviewItem_C.SetMissionStat");

	UUI_MissionStat_PreviewItem_C_SetMissionStat_Params params;
	params.MissionStat = MissionStat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MissionStat_PreviewItem.UI_MissionStat_PreviewItem_C.ExecuteUbergraph_UI_MissionStat_PreviewItem
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_MissionStat_PreviewItem_C::ExecuteUbergraph_UI_MissionStat_PreviewItem(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStat_PreviewItem.UI_MissionStat_PreviewItem_C.ExecuteUbergraph_UI_MissionStat_PreviewItem");

	UUI_MissionStat_PreviewItem_C_ExecuteUbergraph_UI_MissionStat_PreviewItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
