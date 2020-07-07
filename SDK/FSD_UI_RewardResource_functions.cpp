// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_RewardResource_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_RewardResource.UI_RewardResource_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_RewardResource_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RewardResource.UI_RewardResource_C.PreConstruct");

	UUI_RewardResource_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_RewardResource.UI_RewardResource_C.PlayReceiveAnim
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UUI_RewardResource_C::PlayReceiveAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RewardResource.UI_RewardResource_C.PlayReceiveAnim");

	UUI_RewardResource_C_PlayReceiveAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_RewardResource.UI_RewardResource_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_RewardResource_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RewardResource.UI_RewardResource_C.Tick");

	UUI_RewardResource_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_RewardResource.UI_RewardResource_C.ExecuteUbergraph_UI_RewardResource
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_RewardResource_C::ExecuteUbergraph_UI_RewardResource(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RewardResource.UI_RewardResource_C.ExecuteUbergraph_UI_RewardResource");

	UUI_RewardResource_C_ExecuteUbergraph_UI_RewardResource_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
