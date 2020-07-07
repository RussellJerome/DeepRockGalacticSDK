// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_RewardResourcesBox_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_RewardResourcesBox.UI_RewardResourcesBox_C.HasResources
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           HasResources                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_RewardResourcesBox_C::HasResources(bool* HasResources)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RewardResourcesBox.UI_RewardResourcesBox_C.HasResources");

	UUI_RewardResourcesBox_C_HasResources_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasResources != nullptr)
		*HasResources = params.HasResources;
}


// Function UI_RewardResourcesBox.UI_RewardResourcesBox_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_RewardResourcesBox_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RewardResourcesBox.UI_RewardResourcesBox_C.PreConstruct");

	UUI_RewardResourcesBox_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_RewardResourcesBox.UI_RewardResourcesBox_C.PlayReceiveAnim
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UUI_RewardResourcesBox_C::PlayReceiveAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RewardResourcesBox.UI_RewardResourcesBox_C.PlayReceiveAnim");

	UUI_RewardResourcesBox_C_PlayReceiveAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_RewardResourcesBox.UI_RewardResourcesBox_C.AddResource
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class URewardWidget**          RewardWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_RewardResourcesBox_C::AddResource(class URewardWidget** RewardWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RewardResourcesBox.UI_RewardResourcesBox_C.AddResource");

	UUI_RewardResourcesBox_C_AddResource_Params params;
	params.RewardWidget = RewardWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_RewardResourcesBox.UI_RewardResourcesBox_C.Clear
// (BlueprintCallable, BlueprintEvent)

void UUI_RewardResourcesBox_C::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RewardResourcesBox.UI_RewardResourcesBox_C.Clear");

	UUI_RewardResourcesBox_C_Clear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_RewardResourcesBox.UI_RewardResourcesBox_C.ExecuteUbergraph_UI_RewardResourcesBox
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_RewardResourcesBox_C::ExecuteUbergraph_UI_RewardResourcesBox(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RewardResourcesBox.UI_RewardResourcesBox_C.ExecuteUbergraph_UI_RewardResourcesBox");

	UUI_RewardResourcesBox_C_ExecuteUbergraph_UI_RewardResourcesBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
