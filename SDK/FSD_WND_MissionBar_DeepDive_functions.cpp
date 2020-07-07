// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WND_MissionBar_DeepDive_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WND_MissionBar_DeepDive.WND_MissionBar_DeepDive_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_MissionBar_DeepDive_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MissionBar_DeepDive.WND_MissionBar_DeepDive_C.PreConstruct");

	UWND_MissionBar_DeepDive_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_MissionBar_DeepDive.WND_MissionBar_DeepDive_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWND_MissionBar_DeepDive_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MissionBar_DeepDive.WND_MissionBar_DeepDive_C.Construct");

	UWND_MissionBar_DeepDive_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_MissionBar_DeepDive.WND_MissionBar_DeepDive_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_MissionBar_DeepDive_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MissionBar_DeepDive.WND_MissionBar_DeepDive_C.Tick");

	UWND_MissionBar_DeepDive_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_MissionBar_DeepDive.WND_MissionBar_DeepDive_C.ExecuteUbergraph_WND_MissionBar_DeepDive
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_MissionBar_DeepDive_C::ExecuteUbergraph_WND_MissionBar_DeepDive(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MissionBar_DeepDive.WND_MissionBar_DeepDive_C.ExecuteUbergraph_WND_MissionBar_DeepDive");

	UWND_MissionBar_DeepDive_C_ExecuteUbergraph_WND_MissionBar_DeepDive_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
