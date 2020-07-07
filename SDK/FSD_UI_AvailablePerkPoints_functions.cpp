// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_AvailablePerkPoints_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_AvailablePerkPoints.UI_AvailablePerkPoints_C.CountPerkPoints
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_AvailablePerkPoints_C::CountPerkPoints(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_AvailablePerkPoints.UI_AvailablePerkPoints_C.CountPerkPoints");

	UUI_AvailablePerkPoints_C_CountPerkPoints_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_AvailablePerkPoints.UI_AvailablePerkPoints_C.SetPerkPointsText
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Points                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_AvailablePerkPoints_C::SetPerkPointsText(int* Points)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_AvailablePerkPoints.UI_AvailablePerkPoints_C.SetPerkPointsText");

	UUI_AvailablePerkPoints_C_SetPerkPointsText_Params params;
	params.Points = Points;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_AvailablePerkPoints.UI_AvailablePerkPoints_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_AvailablePerkPoints_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_AvailablePerkPoints.UI_AvailablePerkPoints_C.PreConstruct");

	UUI_AvailablePerkPoints_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_AvailablePerkPoints.UI_AvailablePerkPoints_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_AvailablePerkPoints_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_AvailablePerkPoints.UI_AvailablePerkPoints_C.Construct");

	UUI_AvailablePerkPoints_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_AvailablePerkPoints.UI_AvailablePerkPoints_C.OnPerkPointsChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           PerkPoints                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Change                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_AvailablePerkPoints_C::OnPerkPointsChanged(int* PerkPoints, int* Change)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_AvailablePerkPoints.UI_AvailablePerkPoints_C.OnPerkPointsChanged");

	UUI_AvailablePerkPoints_C_OnPerkPointsChanged_Params params;
	params.PerkPoints = PerkPoints;
	params.Change = Change;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_AvailablePerkPoints.UI_AvailablePerkPoints_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_AvailablePerkPoints_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_AvailablePerkPoints.UI_AvailablePerkPoints_C.Tick");

	UUI_AvailablePerkPoints_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_AvailablePerkPoints.UI_AvailablePerkPoints_C.OnPingAnimFinished
// (BlueprintCallable, BlueprintEvent)

void UUI_AvailablePerkPoints_C::OnPingAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_AvailablePerkPoints.UI_AvailablePerkPoints_C.OnPingAnimFinished");

	UUI_AvailablePerkPoints_C_OnPingAnimFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_AvailablePerkPoints.UI_AvailablePerkPoints_C.ExecuteUbergraph_UI_AvailablePerkPoints
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_AvailablePerkPoints_C::ExecuteUbergraph_UI_AvailablePerkPoints(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_AvailablePerkPoints.UI_AvailablePerkPoints_C.ExecuteUbergraph_UI_AvailablePerkPoints");

	UUI_AvailablePerkPoints_C_ExecuteUbergraph_UI_AvailablePerkPoints_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
