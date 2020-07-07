// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_OnScreenIndicator_UsableItem_Simple_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OnScreenIndicator_UsableItem_Simple.OnScreenIndicator_UsableItem_Simple_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOnScreenIndicator_UsableItem_Simple_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_UsableItem_Simple.OnScreenIndicator_UsableItem_Simple_C.Construct");

	UOnScreenIndicator_UsableItem_Simple_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnScreenIndicator_UsableItem_Simple.OnScreenIndicator_UsableItem_Simple_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOnScreenIndicator_UsableItem_Simple_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_UsableItem_Simple.OnScreenIndicator_UsableItem_Simple_C.Tick");

	UOnScreenIndicator_UsableItem_Simple_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnScreenIndicator_UsableItem_Simple.OnScreenIndicator_UsableItem_Simple_C.OnItemEquipped
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AItem**                  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOnScreenIndicator_UsableItem_Simple_C::OnItemEquipped(class AItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_UsableItem_Simple.OnScreenIndicator_UsableItem_Simple_C.OnItemEquipped");

	UOnScreenIndicator_UsableItem_Simple_C_OnItemEquipped_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnScreenIndicator_UsableItem_Simple.OnScreenIndicator_UsableItem_Simple_C.OnVisibilityChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOnScreenIndicator_UsableItem_Simple_C::OnVisibilityChanged(bool* IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_UsableItem_Simple.OnScreenIndicator_UsableItem_Simple_C.OnVisibilityChanged");

	UOnScreenIndicator_UsableItem_Simple_C_OnVisibilityChanged_Params params;
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnScreenIndicator_UsableItem_Simple.OnScreenIndicator_UsableItem_Simple_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOnScreenIndicator_UsableItem_Simple_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_UsableItem_Simple.OnScreenIndicator_UsableItem_Simple_C.PreConstruct");

	UOnScreenIndicator_UsableItem_Simple_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnScreenIndicator_UsableItem_Simple.OnScreenIndicator_UsableItem_Simple_C.ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOnScreenIndicator_UsableItem_Simple_C::ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_UsableItem_Simple.OnScreenIndicator_UsableItem_Simple_C.ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple");

	UOnScreenIndicator_UsableItem_Simple_C_ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
