// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_LoreScreen_Creatures_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LoreScreen_Creatures.LoreScreen_Creatures_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULoreScreen_Creatures_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoreScreen_Creatures.LoreScreen_Creatures_C.Construct");

	ULoreScreen_Creatures_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoreScreen_Creatures.LoreScreen_Creatures_C.RefreshContent
// (BlueprintCallable, BlueprintEvent)

void ULoreScreen_Creatures_C::RefreshContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoreScreen_Creatures.LoreScreen_Creatures_C.RefreshContent");

	ULoreScreen_Creatures_C_RefreshContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoreScreen_Creatures.LoreScreen_Creatures_C.RefreshCreature
// (BlueprintCallable, BlueprintEvent)

void ULoreScreen_Creatures_C::RefreshCreature()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoreScreen_Creatures.LoreScreen_Creatures_C.RefreshCreature");

	ULoreScreen_Creatures_C_RefreshCreature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoreScreen_Creatures.LoreScreen_Creatures_C.FadeOutFinished
// (BlueprintCallable, BlueprintEvent)

void ULoreScreen_Creatures_C::FadeOutFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoreScreen_Creatures.LoreScreen_Creatures_C.FadeOutFinished");

	ULoreScreen_Creatures_C_FadeOutFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoreScreen_Creatures.LoreScreen_Creatures_C.ShowCreature
// (BlueprintCallable, BlueprintEvent)

void ULoreScreen_Creatures_C::ShowCreature()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoreScreen_Creatures.LoreScreen_Creatures_C.ShowCreature");

	ULoreScreen_Creatures_C_ShowCreature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoreScreen_Creatures.LoreScreen_Creatures_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoreScreen_Creatures_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoreScreen_Creatures.LoreScreen_Creatures_C.Tick");

	ULoreScreen_Creatures_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoreScreen_Creatures.LoreScreen_Creatures_C.ExecuteUbergraph_LoreScreen_Creatures
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoreScreen_Creatures_C::ExecuteUbergraph_LoreScreen_Creatures(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoreScreen_Creatures.LoreScreen_Creatures_C.ExecuteUbergraph_LoreScreen_Creatures");

	ULoreScreen_Creatures_C_ExecuteUbergraph_LoreScreen_Creatures_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
