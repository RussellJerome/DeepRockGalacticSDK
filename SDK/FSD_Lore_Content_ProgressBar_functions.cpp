// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Lore_Content_ProgressBar_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Lore_Content_ProgressBar.Lore_Content_ProgressBar_C.SetProgress
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULore_Content_ProgressBar_C::SetProgress(int* Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lore_Content_ProgressBar.Lore_Content_ProgressBar_C.SetProgress");

	ULore_Content_ProgressBar_C_SetProgress_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lore_Content_ProgressBar.Lore_Content_ProgressBar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULore_Content_ProgressBar_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lore_Content_ProgressBar.Lore_Content_ProgressBar_C.PreConstruct");

	ULore_Content_ProgressBar_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lore_Content_ProgressBar.Lore_Content_ProgressBar_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULore_Content_ProgressBar_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lore_Content_ProgressBar.Lore_Content_ProgressBar_C.Tick");

	ULore_Content_ProgressBar_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lore_Content_ProgressBar.Lore_Content_ProgressBar_C.ExecuteUbergraph_Lore_Content_ProgressBar
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULore_Content_ProgressBar_C::ExecuteUbergraph_Lore_Content_ProgressBar(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lore_Content_ProgressBar.Lore_Content_ProgressBar_C.ExecuteUbergraph_Lore_Content_ProgressBar");

	ULore_Content_ProgressBar_C_ExecuteUbergraph_Lore_Content_ProgressBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
