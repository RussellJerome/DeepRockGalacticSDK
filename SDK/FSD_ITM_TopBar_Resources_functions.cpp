// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_TopBar_Resources_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_TopBar_Resources.ITM_TopBar_Resources_C.AddResource
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UResourceData**          InResource                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          InHideWhenZero                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_TopBar_Resources_C::AddResource(class UResourceData** InResource, bool* InHideWhenZero)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TopBar_Resources.ITM_TopBar_Resources_C.AddResource");

	UITM_TopBar_Resources_C_AddResource_Params params;
	params.InResource = InResource;
	params.InHideWhenZero = InHideWhenZero;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_TopBar_Resources.ITM_TopBar_Resources_C.SetResources
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UResourceData*>   InResources                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UITM_TopBar_Resources_C::SetResources(TArray<class UResourceData*>* InResources)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TopBar_Resources.ITM_TopBar_Resources_C.SetResources");

	UITM_TopBar_Resources_C_SetResources_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InResources != nullptr)
		*InResources = params.InResources;
}


// Function ITM_TopBar_Resources.ITM_TopBar_Resources_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_TopBar_Resources_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TopBar_Resources.ITM_TopBar_Resources_C.PreConstruct");

	UITM_TopBar_Resources_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_TopBar_Resources.ITM_TopBar_Resources_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_TopBar_Resources_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TopBar_Resources.ITM_TopBar_Resources_C.Construct");

	UITM_TopBar_Resources_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_TopBar_Resources.ITM_TopBar_Resources_C.OnResourceAmountChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UResourceData**          Resource                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         currentAmount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_TopBar_Resources_C::OnResourceAmountChanged(class UResourceData** Resource, float* currentAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TopBar_Resources.ITM_TopBar_Resources_C.OnResourceAmountChanged");

	UITM_TopBar_Resources_C_OnResourceAmountChanged_Params params;
	params.Resource = Resource;
	params.currentAmount = currentAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_TopBar_Resources.ITM_TopBar_Resources_C.ExecuteUbergraph_ITM_TopBar_Resources
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_TopBar_Resources_C::ExecuteUbergraph_ITM_TopBar_Resources(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TopBar_Resources.ITM_TopBar_Resources_C.ExecuteUbergraph_ITM_TopBar_Resources");

	UITM_TopBar_Resources_C_ExecuteUbergraph_ITM_TopBar_Resources_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
