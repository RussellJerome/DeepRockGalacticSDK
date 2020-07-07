// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Biome_ToolTip_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Biome_ToolTip.Biome_ToolTip_C.SetData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UResourceData**          ResourceA                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UResourceData**          ResourceB                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBiome_ToolTip_C::SetData(class UResourceData** ResourceA, class UResourceData** ResourceB)
{
	static auto fn = UObject::FindObject<UFunction>("Function Biome_ToolTip.Biome_ToolTip_C.SetData");

	UBiome_ToolTip_C_SetData_Params params;
	params.ResourceA = ResourceA;
	params.ResourceB = ResourceB;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Biome_ToolTip.Biome_ToolTip_C.SetPostionAndAlignment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D*              InPosition                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D*              InAlignment                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBiome_ToolTip_C::SetPostionAndAlignment(struct FVector2D* InPosition, struct FVector2D* InAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function Biome_ToolTip.Biome_ToolTip_C.SetPostionAndAlignment");

	UBiome_ToolTip_C_SetPostionAndAlignment_Params params;
	params.InPosition = InPosition;
	params.InAlignment = InAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Biome_ToolTip.Biome_ToolTip_C.SetTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Target_Widget                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBiome_ToolTip_C::SetTarget(class UWidget** Target_Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Biome_ToolTip.Biome_ToolTip_C.SetTarget");

	UBiome_ToolTip_C_SetTarget_Params params;
	params.Target_Widget = Target_Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Biome_ToolTip.Biome_ToolTip_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBiome_ToolTip_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Biome_ToolTip.Biome_ToolTip_C.PreConstruct");

	UBiome_ToolTip_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Biome_ToolTip.Biome_ToolTip_C.Set Tool Tip Owner
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Owner                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBiome_ToolTip_C::Set_Tool_Tip_Owner(class UWidget** Owner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Biome_ToolTip.Biome_ToolTip_C.Set Tool Tip Owner");

	UBiome_ToolTip_C_Set_Tool_Tip_Owner_Params params;
	params.Owner = Owner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Biome_ToolTip.Biome_ToolTip_C.ExecuteUbergraph_Biome_ToolTip
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBiome_ToolTip_C::ExecuteUbergraph_Biome_ToolTip(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Biome_ToolTip.Biome_ToolTip_C.ExecuteUbergraph_Biome_ToolTip");

	UBiome_ToolTip_C_ExecuteUbergraph_Biome_ToolTip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
