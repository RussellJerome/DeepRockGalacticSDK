// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Widget_DropPod_GarbageGen_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_DropPod_GarbageGen.Widget_DropPod_GarbageGen_C.GetNewOperation
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_DropPod_GarbageGen_C::GetNewOperation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DropPod_GarbageGen.Widget_DropPod_GarbageGen_C.GetNewOperation");

	UWidget_DropPod_GarbageGen_C_GetNewOperation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DropPod_GarbageGen.Widget_DropPod_GarbageGen_C.DoOperation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_DropPod_GarbageGen_C::DoOperation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DropPod_GarbageGen.Widget_DropPod_GarbageGen_C.DoOperation");

	UWidget_DropPod_GarbageGen_C_DoOperation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DropPod_GarbageGen.Widget_DropPod_GarbageGen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_DropPod_GarbageGen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DropPod_GarbageGen.Widget_DropPod_GarbageGen_C.Construct");

	UWidget_DropPod_GarbageGen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DropPod_GarbageGen.Widget_DropPod_GarbageGen_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_DropPod_GarbageGen_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DropPod_GarbageGen.Widget_DropPod_GarbageGen_C.PreConstruct");

	UWidget_DropPod_GarbageGen_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DropPod_GarbageGen.Widget_DropPod_GarbageGen_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_DropPod_GarbageGen_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DropPod_GarbageGen.Widget_DropPod_GarbageGen_C.Tick");

	UWidget_DropPod_GarbageGen_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DropPod_GarbageGen.Widget_DropPod_GarbageGen_C.OnGeneratedMissionChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGeneratedMission**      OutGeneratedMission            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_DropPod_GarbageGen_C::OnGeneratedMissionChanged(class UGeneratedMission** OutGeneratedMission)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DropPod_GarbageGen.Widget_DropPod_GarbageGen_C.OnGeneratedMissionChanged");

	UWidget_DropPod_GarbageGen_C_OnGeneratedMissionChanged_Params params;
	params.OutGeneratedMission = OutGeneratedMission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DropPod_GarbageGen.Widget_DropPod_GarbageGen_C.ExecuteUbergraph_Widget_DropPod_GarbageGen
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_DropPod_GarbageGen_C::ExecuteUbergraph_Widget_DropPod_GarbageGen(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DropPod_GarbageGen.Widget_DropPod_GarbageGen_C.ExecuteUbergraph_Widget_DropPod_GarbageGen");

	UWidget_DropPod_GarbageGen_C_ExecuteUbergraph_Widget_DropPod_GarbageGen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
