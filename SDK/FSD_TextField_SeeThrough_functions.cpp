// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_TextField_SeeThrough_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TextField_SeeThrough.TextField_SeeThrough_C.SetShowBG
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          ShowBG                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTextField_SeeThrough_C::SetShowBG(bool* ShowBG)
{
	static auto fn = UObject::FindObject<UFunction>("Function TextField_SeeThrough.TextField_SeeThrough_C.SetShowBG");

	UTextField_SeeThrough_C_SetShowBG_Params params;
	params.ShowBG = ShowBG;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TextField_SeeThrough.TextField_SeeThrough_C.SetTextSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           TextSize                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTextField_SeeThrough_C::SetTextSize(int* TextSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function TextField_SeeThrough.TextField_SeeThrough_C.SetTextSize");

	UTextField_SeeThrough_C_SetTextSize_Params params;
	params.TextSize = TextSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TextField_SeeThrough.TextField_SeeThrough_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  InText                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UTextField_SeeThrough_C::SetText(struct FText* InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function TextField_SeeThrough.TextField_SeeThrough_C.SetText");

	UTextField_SeeThrough_C_SetText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TextField_SeeThrough.TextField_SeeThrough_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTextField_SeeThrough_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TextField_SeeThrough.TextField_SeeThrough_C.PreConstruct");

	UTextField_SeeThrough_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TextField_SeeThrough.TextField_SeeThrough_C.ExecuteUbergraph_TextField_SeeThrough
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTextField_SeeThrough_C::ExecuteUbergraph_TextField_SeeThrough(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TextField_SeeThrough.TextField_SeeThrough_C.ExecuteUbergraph_TextField_SeeThrough");

	UTextField_SeeThrough_C_ExecuteUbergraph_TextField_SeeThrough_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
