// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Basic_ResourceICon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Basic_ResourceICon.Basic_ResourceIcon_C.SetIconSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         InSize                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_ResourceIcon_C::SetIconSize(float* InSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ResourceICon.Basic_ResourceIcon_C.SetIconSize");

	UBasic_ResourceIcon_C_SetIconSize_Params params;
	params.InSize = InSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_ResourceICon.Basic_ResourceIcon_C.SetResource
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UResourceData**          Resource                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_ResourceIcon_C::SetResource(class UResourceData** Resource)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ResourceICon.Basic_ResourceIcon_C.SetResource");

	UBasic_ResourceIcon_C_SetResource_Params params;
	params.Resource = Resource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_ResourceICon.Basic_ResourceIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_ResourceIcon_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ResourceICon.Basic_ResourceIcon_C.PreConstruct");

	UBasic_ResourceIcon_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_ResourceICon.Basic_ResourceIcon_C.ExecuteUbergraph_Basic_ResourceIcon
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_ResourceIcon_C::ExecuteUbergraph_Basic_ResourceIcon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ResourceICon.Basic_ResourceIcon_C.ExecuteUbergraph_Basic_ResourceIcon");

	UBasic_ResourceIcon_C_ExecuteUbergraph_Basic_ResourceIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
